#include "drawable.hpp"

drawable::drawable( window & w, const vector & location ):
   w( w ),
   location( location ),
   bounce(1,1)
{}   

