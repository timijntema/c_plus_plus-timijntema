#include "vector.hpp"

vector::vector()
{}

vector::vector(int x, int y):
x(x),
y(y)
{}

vector vector::operator+(const vector & rhs) const{
	return vector(x+rhs.x, y+rhs.y);
}

vector vector::operator+(){
	x =+ x;
	y =+ y;
	return vector(x, y);
}

vector & vector::operator+=(const vector & rhs){
	x+=rhs.x;
	y+=rhs.y;
	return *this;
}

vector vector::operator-(const vector & rhs) const{
	return vector(x-rhs.x, y-rhs.y);
}

vector vector::operator-(){
	x =- x;
	y =- y;
	return vector(x, y);
}

vector & vector::operator-=(const vector & rhs){
	x-=rhs.x;
	y-=rhs.y;
	return *this;
}

vector vector::operator*(const vector & rhs) const{
	return vector(x*rhs.x, y*rhs.y);
}

vector vector::operator*(int times) const{
	return vector(x*times, y*times);
}

vector & vector::operator*=(const vector & rhs){
	x*=rhs.x;
	y*=rhs.y;
	return *this;
}

vector vector::operator/(int rhs) const{
	return vector(x/rhs, y/rhs);
}

vector & vector::operator/=(const vector & rhs){
	x/=rhs.x;
	y/=rhs.y;
	return *this;
}