#include <iostream>
#include "composition.hpp"

int main(int argc, char **argv)
{
	window w( 400, 100, 2 );
	composition comp1(w, 0, 4);
	comp1.print();
	return 0;
}
