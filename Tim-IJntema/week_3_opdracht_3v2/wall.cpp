#include "wall.hpp"

wall::wall(window & w, vector location, vector end, int update_intervall, vector bounce):
drawable(w, location, end, 0),
unfilled(w, location, end ),
filledrec(w, location, end),
bounce(bounce),
location(location),
end(end),
update_intervall(update_intervall)
{}

void wall::draw(){
	if (filled){
		filledrec.draw();
	}
	else{
		unfilled.draw();
	}
}

void wall::update(){
	if (update_intervall == update_intervallcounter){
		if (filled){
			filled = false;
		}
		else{
			filled = true;
		}
		update_intervallcounter = 0;
	}
	update_intervallcounter++;
}