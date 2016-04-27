#include "vector.hpp"

//bij een reference hoeft er geen const bij maar bij een kopie wel

vector::vector()
{}

vector::vector(int x, int y):
x(x),
y(y)
{}

vector operator+(const vector & rhs) const{
	return vector(x+rhs.x, y+rhs.y);
}
vector & operator+=(const vector & rhs){
	x+=rhs.x;
	y+=rhs.y;
	return *this;
}
vector operator-(const vector & rhs) const{
	return vector(x-rhs.x, y-rhs.y);
}
vector & operator-=(const vector & rhs){
	x-=rhs.x;
	y-=rhs.y;
	return *this;
}
vector operator*(const vector & rhs) const{
	return vector(x*rhs.x, y*rhs.y);
}
vector & operator*=(const vector & rhs){
	x*=rhs.x;
	y*=rhs.y;
	return *this
}
vector operator/(int rhs) const{
	return vector(x/rhs.x, y/rhs.y);
}
vector & operator/=(const vector & rhs){
	x/=rhs.x;
	y/=rhs.y;
	return *this;
}
vector operator<<(int rhs) const{
	"(" << pos.x << "," << pos.y << ")";
	return *this; 
}