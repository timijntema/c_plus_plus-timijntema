#include <iostream>
#include "composition.hpp"

int main()
{
	window w( 400, 100, 2 );
	composition comp1(w, 10, 5);
	comp1.print();
	return 0;
}
