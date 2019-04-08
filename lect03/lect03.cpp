#include <iostream>
using namespace std;

/*
Special methods for C++ Classes (By default empty ones exist for the constructor and destructor, and by default the other 2 just take the local member values and copy them over)
Constructors: Setup for initializing an object when creating an object
Destructors: Tiding up memory and freeing it when a class is destroyed
Copy Constructor: Used to make a copy of another object by using its parameters to make another instance
Copy Assignnment Used to change the contents of an object by assigning the values of one object to another
*/

class quadratic{

public:
	double evaluate(double x);
	quadratic(double x=0, double y=0, double z=0);
	~quadratic();
	quadratic(const quadratic& q);
private:
	double a;
	double b;
	double c;
};

double quadratic::evaluate(double x){
	return a * x * x + b * x + c;
}

quadratic::quadratic(double x, double y, double z){
	a = x;
	b = y;
	c = z;
}
quadratic::~quadratic(){
	cout << "Goodbye Cruel World" <<endl;
}

quadratic::quadratic(const quadratic& q){
	a = q.a;
	b = q.b;
	c = q.c;
}

int main(){
	quadratic q(1,2,3);
	cout << q.evaluate(3) << endl;

	return 0;
}
