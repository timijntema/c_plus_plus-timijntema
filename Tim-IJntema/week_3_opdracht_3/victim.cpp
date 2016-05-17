#include "victim.hpp"

victim::victim(window & w, vector start, vector end, const ball & rolingThing):
start(start),
end(end),
rectangle(w, start, end),
rolingThing(rolingThing)
{
}

/*void victim::draw(){
	theObject.draw();
}*/

void victim::update(){
	if (!(happened)){
		start+=vector(1,1);
		end+=vector(-1,-1);
	}
	if ((rolingThing.midpoint.x+rolingThing.radius) >= start.x && (rolingThing.midpoint.x+rolingThing.radius) <= start.y){
		if (rolingThing.midpoint.y >= start.y && rolingThing.midpoint.y <= end.y){
			happened = 1;
			start+=vector(1,1);
			end+=vector(-1,-1);
		}
	}
	
}