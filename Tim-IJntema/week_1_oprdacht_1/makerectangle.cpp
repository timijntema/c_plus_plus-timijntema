#include "makerectangle.hpp"

void filled_rectangle::draw(){
	/*for (int i = start_x; i < until_x; i++){
		line line1(w, i, start_y, i, end_y);//deze en de vorige lijn misschien boven de body van de constructor?
		line1.print();//kan je hier line(i) van maken om te zorgen dat het verschillende lijnen zijn
	}*/
	for (int i = start_x; i < end_x; i++){
		for (int j = start_y; j < end_y; j++){
			w.draw(i, j);
		}
	}
}