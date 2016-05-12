#include "wall.hpp"

wall::wall(window & w, vector location, vector end, int update_intervall):
drawable(w, location),
filled(filled),
unfilled(w, location, end ),
filledrec(w, location, end)
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
	if (filled){
		filled = false;
	}
	else{
		filled = true;
	}
}