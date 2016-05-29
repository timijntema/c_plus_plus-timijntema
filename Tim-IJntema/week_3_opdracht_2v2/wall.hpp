#ifndef WALL_HPP
#define WALL_HPP

#include "rectangle.hpp"
#include "vector.hpp"
#include "window.hpp"
#include "filled_rectangle.hpp"
#include "drawable.hpp"

class wall : public drawable{
private:
	bool filled = true;
	int update_intervall;
	int update_count = 0;
	int update_intervallcounter = 0;
	filled_rectangle filledrec;
	rectangle unfilled;
public:
	vector bounce;
	vector location;
	vector end;
	
	wall(window & w, vector location, vector end, int update_intervall, vector bounce);
	void draw() override;
	void update() override;
};

#endif // WALL_HPP
