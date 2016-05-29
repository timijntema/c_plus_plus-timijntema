#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.hpp"

//add the function of the speed multiplying by the bounce in drawable at the momemt of object collision

int main(){
   window w( vector( 128, 64 ), 2 );
   wall bricksU(w, vector (0, 0), vector (127, 4), 2, vector(1,-1));
   wall bricksR(w, vector (123, 4), vector (127, 59), 2, vector(-1, 1));
   wall bricksL(w, vector (0, 4), vector (4, 59), 2, vector(-1, 1));
   wall bricksD(w, vector (0, 59), vector (127, 63), 2, vector(1,-1));
   ball b( w, vector( 10, 10 ), 6, vector( 2, 2 ));
   
   drawable * objects[] = { &b,&bricksU, &bricksD, &bricksL, &bricksR};

   for(;;){
	  w.clear();
	  for( auto & p : objects ){
		 p->draw();
	  }
	  wait_ms( 100 );
	  for( auto & p : objects ){
		  
		  p->update();
	  }
	  for( auto & obj : objects ){
		  for( auto & other : objects ){
			  obj->interact( *other );
		  }
	  }
   }
}

