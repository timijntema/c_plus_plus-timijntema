#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "window.hpp"
#include "vector.hpp"
#include "drawable.hpp"

class circle : public drawable {
protected:
   int radius;
public:
   circle( window & w, const vector & midpoint, int radius ):
      drawable( w, midpoint, vector(0,0), radius),
      radius( radius )
   {}
   void draw() override;
};

#endif // CIRCLE_HPP
