#include "composition.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include <math.h>

composition::composition(window & w, int move, int amount):
	w(w),
	amount(amount),
	move(move),
	square(w, (20+move), 35, (70+move), 50),
	square2(w, (35+move), 20, (55+move), 50),
	line3(w, (35+move), 15, (45+move), 20),
	circle1(w, (30+move), 55, 5),
	circle2(w, (60+move), 55, 5)
	//circle1(w, (end_x-start_x), (end_y-start_y), (sqrt((end_x-start_x)-(end_y-start_y))))
	//square(w, start_x, start_y, end_x, end_y),
{}
//functie zichzelf aan laten roepen met stopconditie
void composition::print(){
	if (amount == 0){
		return;
	}
	square.print();
	square2.print();
	line3.print();
	circle1.print();
	circle2.print();
	amount--;
	//new_compos = new composition(w, 60, amount);
	//new_compos->print();(names_array[amount])
	composition new_comp(w, 60+move, amount);
	new_comp.print();
}