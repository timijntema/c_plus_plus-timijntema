#ifndef DRAWABLE_HPP
#define DRAWABLE_HPP

#include "window.hpp"
#include "vector.hpp"

#include <iostream>
#include <math.h>

class drawable {
protected:
   window w;
   vector bounce;
   vector end;
   vector location;//betere manier
   int radius;
public:
   drawable( window & w, const vector & location, const vector & end, int radius);
   
   virtual void draw() = 0;
   virtual void update(){}
   
   bool overlaps(const drawable & other);
   virtual void interact(const drawable & other ){}

};

#endif // DRAWABLE_HPP
