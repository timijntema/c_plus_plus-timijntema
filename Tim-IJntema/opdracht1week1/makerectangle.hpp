#ifndef _MAKERECTANGLE_HPP
#define _MAKERECTANGLE_HPP

#include "window.hpp"
#include "makerectangle.hpp"

class filled_rectangle{
private:
	int start_x;
	int start_y;
	int end_x;
	int end_y;
	window & w;
public:
	filled_rectangle(window & w, int p_start_x, int p_start_y, int p_end_x, int p_end_y):
		w(w),
		start_x(p_start_x),
		start_y(p_start_y),
		end_x(p_end_x),
		end_y(p_end_y)
	{}
	void draw();
};

#endif //_MAKERECTANGLE_HPP