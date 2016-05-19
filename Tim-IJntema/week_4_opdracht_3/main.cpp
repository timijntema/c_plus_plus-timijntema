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
	
	auto button0 = target::pin_in( target::pins::d23 );
	auto button1 = target::pin_in( target::pins::d22 );
	
	auto leds = hwlib::port_out_from_pins(led0, led1, led2, led3);
	
	int i = 0;
	
	while(1){
		if(!button0.get()){
			i++;
			hwlib::wait_ms(500);
		}
		else if(!button1.get()){
			i--;
			hwlib::wait_ms(500);
		}
		leds.set((1 << i)-1);
	}
	return 0;
}
