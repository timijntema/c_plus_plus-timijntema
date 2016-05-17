#ifndef VICTIM_HPP
#define VICTIM_HPP

#include "ball.hpp"
#include "vector.hpp"
#include "drawable.hpp"
#include "rectangle.hpp"

class victim : public rectangle{
private:
	//vector start;
	//vector end;
	ball rolingThing;
	//rectangle theObject;
	int happened = 0;
public:
	victim(window & w, vector start, vector end, const ball & rolingThing);
	//void draw() override;
	void update() override;
};

#endif // VICTIM_HPP
