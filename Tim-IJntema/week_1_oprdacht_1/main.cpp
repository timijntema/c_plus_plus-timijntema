// example: 
// using a line that requires its window

#include <iostream>

#include "window.hpp"
#include "makerectangle.hpp"

int main(){
   window w( 128, 64, 2 );
   filled_rectangle square(w, 20, 20, 60, 60);
   filled_rectangle square2(w, 10, 10, 80, 15);
   square2.draw();
   square.draw();
   return 0;
}


