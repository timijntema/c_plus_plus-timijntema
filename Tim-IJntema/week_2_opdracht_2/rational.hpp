#ifndef RATIONAL_HPP
#define RATIONAL_HPP

/// @file

/// rational ADT
//
/// This is an ADT that implements rational (fractional) values.
/// The counter and denominator are stored as two (signed) integers.
/// The appropriate constructors and operators are provided.
///
/// Rational values are always simplied (reduced): the counter
/// and denominator have no common factors.
class rational {
private:
	//int counter;//maybe on the bottom
	//int denominator;
	void reduce(){
		int a = counter;
		int b = denominator;

		while( b){// != 0 
			int temp = b;
			b = a % b;
			a = temp;
		}

		if( a != 0){
			counter /= a;
			denominator /= a;
		}
	}
public:
	int counter;//maybe on the bottom
	int denominator;
   /// constructor from explicit values
   //
   /// This constructor initializes a rational from its counter and denominator.
   /// The default value for the denominator is 1, so a rational be initialized
   /// with just a whole value.
   rational( int counter, int denominator = 1 ):
     counter( counter ), denominator( denominator )
   {
	   reduce();
   }
   
   /// compare two rational values
   //
   /// This operator tests for equality. It returns true
   /// if and only if the counter and denminator of both
   /// operands are equal.
   bool operator==( const rational & rhs ) const {
      return ( counter == rhs.counter ) && ( denominator == rhs.denominator );
   }

   /// output operator for a rational value
   //
   /// This operator<< prints a constructor in the format
   /// [counter/denominator] where both values are printed as
   /// decimal values.
   friend std::ostream & operator<<( std::ostream & lhs, const rational & rhs ){
      return lhs << "[" << rhs.counter << "/" << rhs.denominator << "]";
   }   
   
   /// multiply a rational by an integer
   //
   /// This operator* multiplies a rational value by an integer value.
   rational operator*( const int rhs ) const {
		return rational(counter * rhs, denominator);
   }
   
   /// multiply a rational by a rational
   //
   /// This operator* multiplies a rational value by a rational value.
   rational operator*( const rational & rhs )const{
	  return rational(counter*rhs.counter, denominator*rhs.denominator);
   }
   
   /// add a rational to another rational
   //
   /// This operator+= adds a rational value a rational variable.
   rational & operator+=( const rational & rhs ){
      counter = counter * rhs.denominator + rhs.counter * denominator;
      denominator *= rhs.denominator;
      reduce();
      return *this;
   }
   
   ///Mulitply a rational with another rational
   //
   ///Multiply a rational by another rational and assign it to the first rational
   rational & operator*=( const rational & rhs ){
      counter *= rhs.counter;
      denominator *= rhs.denominator;
	  reduce();
      return *this;
   }
   
};

#endif