#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.hpp"
#include "victim.hpp"

int main(){
   window w( vector( 128, 64 ), 2 );
   wall bricksU(w, vector (0, 0), vector (127, 4), 2, vector(-1,3));
   wall bricksR(w, vector (123, 4), vector (127, 59), 2, vector(-3, 1));
   wall bricksL(w, vector (0, 4), vector (4, 59), 2, vector(3, 1));
   wall bricksD(w, vector (0, 59), vector (127, 63), 2, vector(1,-3));
   ball b( w, vector( 10, 10 ), 8, vector( 2, 2 ), bricksL, bricksR, bricksU, bricksD);
   victim veee(w, vector(70, 35), vector(100, 57), b);
   
   drawable * objects[] = { &b,&bricksU, &bricksD, &bricksL, &bricksR, &veee};

   for(;;){
      w.clear();
      for( auto & p : objects ){
         p->draw();
      }
      wait_ms( 100 );
      for( auto & p : objects ){
          p->update();
      }
   }
}

