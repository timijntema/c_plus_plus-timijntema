#include "filled_rectangle.hpp"

void filled_rectangle::draw(){
	for (int i = start.x; i < stop.x; i++){
		for (int j = start.y; j < stop.y; j++){
			w.draw(i, j);
		}
	}
}