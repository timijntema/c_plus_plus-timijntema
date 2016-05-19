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
	
	auto leds = hwlib::port_out_from_pins(led0, led1, led2, led3);
	int i = 0;
	int goBack = 0;
	
	while(1){
		if (i == 2){
			goBack = 1;
		}
		else if(i==0){
			goBack = 0;
		}
		
		leds.set((3 << i));
		
		if (goBack){
			i--;
		}
		else{
			i++;
		}
		hwlib::wait_ms(500);
	}
	return 0;
}
