#include "drawable.hpp"

using namespace std;

drawable::drawable(window & w, const vector & location, const vector & end, int radius):
   w( w ),
   location( location ),
   bounce(1,1),
   end(end),
   radius(radius)
{}   

bool drawable::overlaps(const drawable & other){
	int r = other.radius;
	int x = other.location.x;
	int y = other.location.y;
	float x_new;
	float y_new;
	
	for (int i = 0; i < 360; i++){
		x_new = x + r*cos(i);
		y_new = y + r*sin(i);
		
		if(x_new <= end.x && x_new >= location.x && y_new <= end.y && y_new >= location.y){
			cout << "x:" << x << '\n';
			cout << "y:" << y << '\n';
			cout << "r:" << r << '\n';
			cout << "r*cos(i):" << r*cos(i) << '\n';
			cout << "r*sin(i):" << r*sin(i) << '\n';
			cout << "x_new:" << x_new << '\n';
			cout << "y_new:" << y_new << '\n';
			cout << "location.x,location.y:" << location.x << ',' << location.y << '\n';
			cout << "end.x,end.y:" << end.x << ',' << end.y << '\n';
			return true;
		}
	}
	return false;
}