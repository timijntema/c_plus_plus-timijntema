#include "wall.hpp"

wall::wall(window & w, vector location, vector end, int update_intervall, vector bounce):
drawable(w, location),
filled(filled),
unfilled(w, location, end ),
filledrec(w, location, end),
bounce(bounce),
location(location),
end(end)
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
	filled != filled
	/*if (filled){
		filled = false;
	}
	else{
		filled = true;
	}*/
}