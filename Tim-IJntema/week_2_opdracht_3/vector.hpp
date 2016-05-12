#ifndef VECTOR_HPP
#define VECTOR_HPP
/// @file

#include <ostream>

/// 2D integer vector ADT
//
/// This is 2D vector ADT that stores its two components as (signed) integers.
/// The x and y components are public attributes. 
/// The appropriate constructors and operators are provided.
class vector {
public:
	int x;
	int y;
   /// default constructor
   //
   /// This constructor does not initialize the x and y attributes.
   vector();
   
   ///default constructor with x and y
   //
   ///This constructor does initialize the x and y attributes.
   vector(int x, int y);

	///Add vector to vector
	//
	///Add a vector to a vector and return the new vector.
   vector operator+(const vector & rhs) const;
   
   ///Plus a vector
   //
   ///Plus the x and y coordinates of a vector.
   vector operator+();
   
   ///Add two vectors
   //
   ///Add rhs vector to lhs vector and assign it to the lhs vector.
   vector & operator+=(const vector & rhs);
   
   ///Substract vectors
   //
   ///Substract lhs from rhs.
   vector operator-(const vector & rhs) const;
   
   ///Minus a vector
   //
   ///Minus the x and y coordinates of a vector.
   vector operator-();
   
   ///Substract vectors and assign
   //
   ///Substract the rhs vector and lhs vector and assign it to the lhs vector 
   vector & operator-=(const vector & rhs);
   
   ///times 2 vectors
   //
   ///Return the lhs vector times the rhs vector. 
   vector operator*(const vector & rhs) const;
   
   /// multiply vector by integer
   //
   /// This operator multiplies a vector by an integer, yielding a vector.
   /// The resulting vector points in the same direction as the original,
   /// but its length is rhs times longer than the original.
   /// In other words, the x and y attributes of the result are
   /// the x and y of the original, multiplied by the rhs.
   vector operator*(int times) const;
   
   ///Times 2 vectors and assign
   //
   ///Times the lhs vector by the rhs vector and assign it to the lhs vector.
   vector & operator*=(const vector & rhs);
   
   ///divide vector by int
   //
   ///Divide the lhs vector by int rhs and return that value.
   vector operator/(int rhs) const;
   
   ///Divide and assign
   //
   ///Divide a vector by a vector and reassign the outcome to the lhs vector.
   ///This will keep the vector pointing the same way.
   vector & operator/=(const vector & rhs);
   
   ///Check equality
   //
   ///Check if the lhs vector has the same values as the rhs vector.
   	bool operator==( const vector & rhs ) const {
		return ( x == rhs.x ) && ( y == rhs.y );
	}
};

#endif