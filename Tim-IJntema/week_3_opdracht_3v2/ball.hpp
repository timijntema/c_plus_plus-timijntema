#ifndef BALL_HPP
#define BALL_HPP

#include "window.hpp"
#include "vector.hpp"
#include "circle.hpp"
#include "wall.hpp"

class ball : public circle {
private:
   vector speed;
   wall L;
   wall R;
   wall U;
   wall D;
   vector midpoint;
   int radius;
   int sideLastTouched = 0;
   int bouncedirx = 1;
   int bouncediry = 1;
public:
   ball( window & w, const vector & midpoint, int radius, const vector & speed, const wall & L, const wall & R, const wall & U, const wall & D);
   void update() override;
};

#endif // BALL_HPP
