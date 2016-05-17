#ifndef VICTIM_HPP
#define VICTIM_HPP

#include "vector.hpp"
#include "window.hpp"
#include "drawable.hpp"
#include "rectangle.hpp"
#include <iostream>

class victim : public rectangle {
private:
	//vector start;
	//vector end;
	int makesmaller = 0;
public:
	victim(window & w, vector start, vector end);
	void update() override;
	void interact(const drawable & other) override;
};

#endif // VICTIM_HPP
