#include "dualInputAnd.hpp"

dualInputAnd::dualInputAnd(hwlib::target::pin_in & p1, hwlib::target::pin_in & p2):
p1(p1),
p2(p2)
{}

bool dualInputAnd::get(){
	return (!(p1.get()) && !(p2.get()));
}