//pin definitions an wire collors i used
//blue = DS to pin D8
//orangesmall = SHCP to pin 10
//MR to vcc
//green = STCP to pin D9
//OE to gnd

#include "hwlib.hpp"

int main()
{
	//kill the watchdog
	WDT->WDT_MR = WDT_MR_WDDIS;
	
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
	
	auto leds = hwlib::port_out_from_pins(led0, led1, led2, led3, hc595.p1, hc595.p2, hc595.p3, hc595.p4);
	
	auto button0 = target::pin_in( target::pins::d23 );
	auto button1 = target::pin_in( target::pins::d22 );
	
	int i = 0;
	
	while(1){
		if(!(button0.get())){
			i++;
			hwlib::wait_ms(500);
		}
		else if(!(button1.get())){
			i--;
			hwlib::wait_ms(500);
		}
		leds.set((1 << i)-1);
	}
	return 0;
}

