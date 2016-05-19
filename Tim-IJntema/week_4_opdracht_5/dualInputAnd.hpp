#ifndef DUALINPUTAND_HPP
#define DUALINPUTAND_HPP

#include "hwlib.hpp"

class dualInputAnd : public hwlib::pin_in{
private:
	hwlib::target::pin_in & p1;
	hwlib::target::pin_in & p2;
public:
	dualInputAnd(hwlib::target::pin_in & p1, hwlib::target::pin_in & p2);
	bool get() override;
};

#endif // DUALINPUTAND_HPP
