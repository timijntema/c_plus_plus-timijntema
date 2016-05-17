#include "victim.hpp"

using namespace std;

victim::victim(window & w, vector start, vector end):
rectangle(w,start,end)
{
}

void victim::update(){
	if (makesmaller == 1){
		if (!(start.x >= end.x || start.y >= end.y)){
			location.x = location.x +5;
			location.y = location.y +5;
			end.x = end.x - 5;
			end.y = end.y - 5;
			cout << "change size location.x,location.y:" << location.x << ',' << location.y << '\n';
			cout << "change size end.x,end.y:" << end.x << ',' << end.y << '\n';
		}
	}
}

void victim::interact(const drawable & other){
	if( this != & other){
		if (makesmaller == 1){
			return;
		}
		else if(overlaps(other)){
			cout << "makesmaller = 1\n";
			makesmaller = 1;
		}
	}
}
