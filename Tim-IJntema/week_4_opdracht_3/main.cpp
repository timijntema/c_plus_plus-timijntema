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
	
	auto button0 = target::pin_in_out(2, 23);
	auto button1 = target::pin_in_out(2, 22);s
	
	auto leds = {&led0, &led1, &led2, &led3};
	
	for(int i = 0; i < 4;i++){
		(leds[i]).direction_set_output();
	}
	
	button0.direction_set_input();
	button1.direction_set_input();
	
	int i = 0;
	
	while(1){
		if(!(button0.get())){
			if(i < 4){
				(leds[i]).set(1);
				i++;
			}
		}
		else if(!(button1.get())){
			if (i > 0){
				(leds[i]).set(0);
				i--;
			}
		}
	}
	return 0;
}
