#include "hwlib.hpp"

class pin_out_all : public hwlib::pin_out {
private:
   hwlib::pin_out * list[ 4 ];     
   
public:

   pin_out_all( 
      hwlib::pin_out & p0, 
      hwlib::pin_out & p1 = hwlib::pin_out_dummy,  
      hwlib::pin_out & p2 = hwlib::pin_out_dummy, 
      hwlib::pin_out & p3 = hwlib::pin_out_dummy 
   ):
      list{ &p0, &p1, &p2, &p3 }
   {}
   
   void set( bool v ) override{
      for( auto p  : list ){
          p->set( v );
      }
   }
};

class pin_out_invert{
private:
	pin_out_all set1;
	pin_out_all set2;
public:
	pin_out_invert(hwlib::pin_out & p0, hwlib::pin_out & p1, hwlib::pin_out & p2, hwlib::pin_out & p3, hwlib::pin_out & p4, hwlib::pin_out & p5, hwlib::pin_out & p6, hwlib::pin_out & p7):
	set1(p0, p1, p2, p3),
	set2(p4, p5, p6, p7)
	{}
	
	void kitt(int ms){
		set1.set(1);
		hwlib::wait_ms(ms);
		set1.set(0);
		set2.set(1);
		hwlib::wait_ms(ms);
		set2.set(0);
	}
};

int main() {
	namespace target = hwlib::target;
	
	auto led0 = target::pin_out( target::pins::d27 );
	auto led1 = target::pin_out( target::pins::d26 );
	auto led2 = target::pin_out( target::pins::d25 );
	auto led3 = target::pin_out( target::pins::d24 );
	
	auto ds = target::pin_out( target::pins::d8 );
	auto shcp = target::pin_out( target::pins::d9 );
	auto stcp = target::pin_out( target::pins::d10 );
	auto spi = hwlib::spi_bus_bit_banged_sclk_mosi_miso(stcp, ds, hwlib::pin_in_dummy);
	auto hc595 = hwlib::hc595( spi, shcp );
	
	pin_out_invert obj1(led0, led1, led2, led3, hc595.p1, hc595.p2, hc595.p3, hc595.p4);
	
	while(1){
		obj1.kitt(200);
	}
	return 0;
}
