#include "hwlib.hpp"

int main()
{
	//kill the watchdog
	WDT->WDT_MR = WDT_MR_WDDIS;
	
	namespace target = hwlib::target
	
	auto led0 = target::pin_in_out(1, 27);
	auto led1 = target::pin_in_out(1, 26);
	auto led2 = target::pin_in_out(1, 25);
	auto led3 = target::pin_in_out(1, 24);
	
	auto leds = {&led0, &led1, &led2, &led3};
	for(int i = 0; i < 4;i++){
		(leds[i]).direction_set_output();
	}
	
	
	while(1){
		for(int i = 0; i < 4;i++){
			(leds[i]).set(1);
			(leds[(i+1)]).set(1);
			if((i+2) == 4){
				(leds[(i+2)]).set(0);
				(leds[(i-1)]).set(0);
			}
			else if((i+2) == 5){
				(leds[(i-2)]).set(0);
				(leds[(i-1)]).set(0);
			}
			else{
				(leds[(i+2)]).set(0);
				(leds[(i+3)]).set(0);
			}
			hwlib::waitMS(500);
		}
		
		for(int i = 3; i >= 0; i++){
			(leds[i]).set(1);
			(leds[(i+1)]).set(1);
			if((i+2) == 4){
				(leds[(i+2)]).set(0);
				(leds[(i-1)]).set(0);
			}
			else if((i+2) == 5){
				(leds[(i-2)]).set(0);
				(leds[(i-1)]).set(0);
			}
			else{
				(leds[(i+2)]).set(0);
				(leds[(i+3)]).set(0);
			}
			hwlib::waitMS(500);
		}
	}
	return 0;
}
