#include "ball.hpp"

using namespace std;

void ball::update(){
	if (location.x <= (L.end.x+radius)){
		location += L.bounce;
		if (sideLastTouched == 3){
			bouncedirx = -1;
			bouncediry = 1;
		}
		sideLastTouched = 4;
	}
	else if (location.x >= (R.location.x-radius)){
		location += R.bounce;
		if (sideLastTouched == 1){
			bouncedirx = 1;
			bouncediry = -1;
		}
		sideLastTouched = 2;
	}
	else if (location.y <= (U.end.y+radius)){
		location += U.bounce;
		if (sideLastTouched == 2){
			bouncedirx = -1;
			bouncediry = -1;
		}
		sideLastTouched = 3;
	}
	else if (location.y >= (D.location.y-radius)){
		location += D.bounce;
		if (sideLastTouched == 4){
			bouncedirx = 1;
			bouncediry = 1;
		}
		sideLastTouched = 1;
	}
	location.x += (speed.x * bouncedirx);
	location.y += (speed.y * bouncediry);
}

ball::ball( window & w, const vector & midpoint, int radius, const vector & speed, const wall & L, const wall & R, const wall & U, const wall & D):
   circle( w, midpoint, radius ),
   radius(radius),
   midpoint(midpoint),
   speed( speed ),
   L(L),
   R(R),
   U(U),
   D(D)
{}