#include "ostream"
#include "catch_with_main.hpp"
#include "vector.hpp"

std::ostream & operator<<( std::ostream & lhs, vector pos ){
	lhs << "(" << pos.x << "," << pos.y << ")";
	return lhs;
}

TEST_CASE("print vectors"){
	vector v(3,4);
	std::stringstream s;
	s << v;
	REQUIRE(s.str() == "(3,4)");
}

TEST_CASE( "Add vector to vector" ){
	vector v(3,4);
	vector r = v+vector(3,4);
	REQUIRE(r == vector(6,8));
}

TEST_CASE( "Plus a vector" ){
	vector v(3,4);
	v =+ v;
	REQUIRE(v == vector(3,4));
}

TEST_CASE( "Add a vector into a vector" ){
	vector v(3,4);
	v+=vector(4,4);
	REQUIRE(v == vector(7,8));
}

TEST_CASE( "substract vector from a vector" ){
	vector v(3,4);
	v = v-vector(3,2);
	REQUIRE(v == vector(0,2));
}

TEST_CASE( "minus a vector" ){
	vector v(3,4);
	v =-v;
	REQUIRE(v == vector(-3,-4));
}

TEST_CASE( "Substract a vector into a vector" ){
	vector v(3,4);
	v-=vector(3,2);
	REQUIRE(v == vector(0,2));
}

TEST_CASE( "Vector times another vector" ){
	vector v(3,4);
	v = v*vector(2,2);
	REQUIRE(v == vector(6,8));
}

TEST_CASE( "vector times the rhs" ){
	vector v(3,4);
	v = v*3;
	REQUIRE(v == vector(9, 12));
}

TEST_CASE( "Vector times equal another vector" ){
	vector v(3,4);
	v*= vector(2,2);
	REQUIRE(v == vector(6,8));
}

TEST_CASE( "divide a vector by rhs" ){
	vector v(6,4);
	v = v/2;
	REQUIRE(v == vector(3,2));
}

TEST_CASE( "divide a vector by a vector and assign" ){
	vector v(30,12);
	v /= vector(6,4);
	REQUIRE(v == vector(5, 3));
}

TEST_CASE( "Check the test cases" ){
	vector v(3,4);
	REQUIRE(v == vector(3,4));
}

