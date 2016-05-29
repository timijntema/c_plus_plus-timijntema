// example:
// definition of the functions of a rectangle object

#include "rectangle.hpp"

rectangle::rectangle( window & w, const vector & start, const vector & end ):
   drawable( w, start, end, 0)
{}

void rectangle::draw(){
	line left(   w, vector( location.x, location.y ), vector( location.x, end.y   ) );
	line right(  w, vector( end.x,   location.y ), vector( end.x,   end.y   ) );
	line top(    w, vector( location.x, location.y ), vector( end.x,   location.y ) );
	line bottom( w, vector( location.x, end.y   ), vector( end.x,   end.y   ) );
   	
   left.draw();
   right.draw();
   top.draw();
   bottom.draw();
}

