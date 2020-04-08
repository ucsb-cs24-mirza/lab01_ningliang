// rugfit2.cpp - calculates fit of rug to a floor
// YOUR NAME(S), TODAY'S DATE
// Ning Liang, 2020/4/6
#include <iostream>
using namespace std;

// definition of class Rectangle
// (usually would be in a separate file named rectangle.h)
class Rectangle {

public:
    // DECLARE a parameterized constructor to set the width and length
       Rectangle(double width1=0, double length1=0);

    // DECLARE accessors to get the width and length
       double getWidth();

       double getLength();
       
    // DECLARE mutators to set the width and lengtg
       void setWidth(double a);

       void setLength(double b);
    // DECLARE (const) METHOD TO RETURN AREA OF RECTANGLE
       double area() const;
private:
    double width, length;

}; // end of class definition

// implementation of class Rectangle here to main function
// (usually would be in a separate file named rectangle.cpp,
// and this separate file would #include "rectangle.h")
Rectangle::Rectangle(double width1, double length1){
	width = width1;
	length = length1;
}

// IMPLEMENT CONSTRUCTOR USING INITIALIZATION LIST
double Rectangle::getWidth(){
	return width;
}
double Rectangle::getLength(){
	return length;
}
void Rectangle::setWidth(double a){
	width = a;
}
void Rectangle::setLength(double b){
	length = b;
}

// IMPLEMENT ACCESSORS and MUTATORS
double Rectangle::area() const{
	return width * length;
}

// IMPLEMENT THE AREA METHOD HERE




// change main where instructed in UPPER CASE below
// (usually would #include "rectangle.h" before main)
int main() {
    
    double width, length;
    Rectangle rug(0,0); // will be updated below

    // create Rectangle named "floor" for sizes input by user
    cout << "enter width and length of floor: ";
    cin >> width >> length;
    const Rectangle floor(width, length); // note: const object

    // RESET Rectangle NAMED "rug" FOR SIZES INPUT BY USER
    rug.setWidth(0);
    rug.setLength(0);
    
    
    // DO NOT CHANGE ANYTHING BELOW (if you do, you will earn 0 points,
    // no matter what submit.cs says is your "tentative" score)

    // print results
    cout << "floor area: " << floor.area() << endl;
    cout << "rug area: " << rug.area() << endl;
    double leftover = rug.area() - floor.area();
    cout << "leftover rug area: " <<
        (leftover > 0 ? leftover : 0) << endl;
    cout << "empty floor area: " <<
        (leftover < 0 ? -leftover : 0) << endl;

    return 0;
}
