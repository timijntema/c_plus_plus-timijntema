#include "drawable.hpp"

using namespace std;

drawable::drawable(window & w, const vector & location, const vector & end, int radius, const vector bounce):
   w( w ),
   location( location ),
   bounce(bounce),
   end(end),
   radius(radius)
{}   

bool drawable::overlaps(const drawable & other){
	int r = radius;
	int x = location.x;
	int y = location.y;
	float x_new;
	float y_new;
	
	for (int i = 0; i < 360; i++){
		x_new = x + r*cos(i);
		y_new = y + r*sin(i);
		
		if(x_new <= other.end.x && x_new >= other.location.x && y_new <= other.end.y && y_new >= other.location.y){
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