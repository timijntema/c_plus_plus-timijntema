#include "ball.hpp"

using namespace std;



ball::ball( window & w, const vector & midpoint, int radius, const vector & speed):
   circle( w, midpoint, radius ),
   radius(radius),
   midpoint(midpoint),
   speed( speed )
{}

void ball::update(){
	location += speed;
}

void ball::interact(const drawable & other){
	if( this != & other){
		if(overlaps(other)){
			speed = speed*other.bounce;
			//bounceTheThing = 1;
			//speed.x *= 1;
			//speed.y *= -1;
		}
	}
}