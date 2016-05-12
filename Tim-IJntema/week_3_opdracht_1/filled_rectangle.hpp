#ifndef _FILLED_RECTANGLE_HPP
#define _FILLED_RECTANGLE_HPP

#include "window.hpp"
#include "vector.hpp"
#include "drawable.hpp"

class filled_rectangle : public drawable {
private:
	vector stop;
	vector start;
public:
	filled_rectangle(window & w, vector start, vector stop):
	   drawable( w, start ),
	   start(start),
		stop(stop)
	{}
	void draw() override;
};

#endif //_FILLED_RECTANGLE_HPP