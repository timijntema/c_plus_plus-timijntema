// example: 
// using a line that requires its window

#include <iostream>

#include "window.hpp"
#include "makerectangle.hpp"

int main(int argc, char **argv){
   window w( 128, 64, 2 );
   filled_rectangle square(w, 20, 20, 60, 60);
   square.draw();
   return 0;
}


