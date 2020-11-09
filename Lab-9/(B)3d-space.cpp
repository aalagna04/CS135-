/*
  Andrew Alagna
  November 6th, 2018
  Hunter College
  CSCI 135/136
  Lab 9 - 3d-space.cpp - a program in which I define a function
    length() that receives the coordinates of a point P passed as a pointer,
    and computes the distance from the origin to the point P
 
    -In the same file 3d-space.cpp, I will add a function Which receives the coordinates of two points (passed as pointers), and returns the pointer of the point that is farther away from the origin.

*/


#include <iostream>
#include <cmath>
using namespace std;



struct Coord3D {
    double x;
    double y;
    double z;
};

//task A
double length(Coord3D *p);
bool test_length();

//task B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
bool test_fartherFromOrigin();

// free memory
void deleteCoord3D(Coord3D *p);

int main() {
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
 

    //taskA
    if(test_length){
        cout << "passed tests for task A" << endl;
    }
    cout << length(&pointP) << endl; // would print 37.4166

    //taskB
    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);

    cout << "ans = " << ans << endl; // So which point is farther?

    
}

double length(Coord3D *p){
    //dereference p first
    double length = sqrt(pow((*p).x, 2.0) + pow((*p).y, 2.0) + pow((*p).z, 2.0));
    return length;
}


//task B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    //the coordinates of two points (passed as pointers), and returns the pointer of the point
    //that is farther away from the origin.
    if(length(p1) > length(p2)) {
        return p1;
    } else {
        return p2;
    }
}

