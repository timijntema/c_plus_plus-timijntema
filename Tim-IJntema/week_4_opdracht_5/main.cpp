#include "hwlib.hpp"
//#include "dualInputAnd.hpp"

class dualInputAnd : public hwlib::pin_in{
private:
	hwlib::target::pin_in & p1;
	hwlib::target::pin_in & p2;
public:
	dualInputAnd(hwlib::target::pin_in & p1, hwlib::target::pin_in & p2):
	p1(p1),
	p2(p2)
	{}
	bool get() override{
		//return (!(p1.get()) && !(p2.get()));
		return (p1.get() == 0 && p2.get() == 0);
	}
};

int main()
{
	auto button0 = hwlib::target::pin_in( hwlib::target::pins::d23 );
	auto button1 = hwlib::target::pin_in( hwlib::target::pins::d22 );
	
	auto led0 = hwlib::target::pin_out( hwlib::target::pins::d27 );
	
	dualInputAnd decorator1(button0, button1);
	
	while(1){
		led0.set(decorator1.get());
	}
	return 0;
}
