#ifndef BALL_HPP
#define BALL_HPP

#include "window.hpp"
#include "vector.hpp"
#include "circle.hpp"
#include "wall.hpp"

class ball : public circle {
private:
   vector speed;
   vector midpoint;
   bool bounceTheThing = false;
   int radius;
   int sideLastTouched = 0;
   int bouncedirx = 1;
   int bouncediry = 1;
public:
   ball( window & w, const vector & midpoint, int radius, const vector & speed);
   void update() override;
   void interact(const drawable & other) override;
};

#endif // BALL_HPP
