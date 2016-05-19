#ifndef PIN_OUT_INVERT_HPP
#define PIN_OUT_INVERT_HPP

#include "hwlib.hpp"

class pin_out_invert
{
private:
	hwlib::pin_out_all set1;
	hwlib::pin_out_all set2;
public:
	pin_out_invert(hwlib::pin_out & p0, hwlib::pin_out & p1, hwlib::pin_out & p2, hwlib::pin_out & p3, hwlib::pin_out & p4, hwlib::pin_out & p5, hwlib::pin_out & p6, hwlib::pin_out & p7):
	set1(p0, p1, p2, p3),
	set2(p4, p5, p6, p7)
	{}
	void kitt()override{
		set1.set(1);
		hwlib::wait_ms(200);
		set1.set(0);
		set2.set(1);
		hwlib::wait_ms(200);
		set2.set(0);
	}
};

#endif // PIN_OUT_INVERT_HPP
