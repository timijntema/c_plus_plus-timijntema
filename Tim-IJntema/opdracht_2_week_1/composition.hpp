#ifndef COMPOSITION_HPP
#define COMPOSITION_HPP

#include "rectangle.hpp"
#include "line.hpp"
#include "window.hpp"
#include "circle.hpp"

class composition{
private:
	rectangle square;
	rectangle square2;
	draw_circle circle1;
	draw_circle circle2;
	line line3;
	int amount;
	int move;
	window & w;
public:
	composition(window & w, int move, int amount);
	void print();
};

#endif // COMPOSITION_HPP