/*
  Andrew Alagna
  November 6th, 2018
  Hunter College
  CSCI 135/136
  Lab 9 - 3d-space.cpp - a program in which I define a function
    length() that receives the coordinates of a point P passed as a pointer,
    and computes the distance from the origin to the point P

    -In the same file 3d-space.cpp, I will add a function Which receives the coordinates of two points (passed as pointers), and returns the pointer of the point that is farther away from the origin.

    -Adds functionality which gets the position and the velocity of 
    an object and has to compute object’s
    new coordinates after the time interval dt.
    The function does not return any values, instead,
    it should update the object’s position ppos
    with its new position coordinates.
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

//task C
void move(Coord3D *ppos, Coord3D *pvel, double dt);

// free memory
void deleteCoord3D(Coord3D *p);

int main() {
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

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

    //taskC
       move(&pos, &vel, 2.0); // struct pos gets changed
       cout << pos.x << " " << pos.y << " " << pos.z << endl;

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

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    /*gets the position and the velocity of an object and
    has to compute object’s new coordinates after the time interval dt.*/
    //update coordinates

    (*ppos).x = (*ppos).x+(*pvel).x*dt;
    (*ppos).y = (*ppos).y+(*pvel).y*dt;
    (*ppos).z = (*ppos).z+(*pvel).z*dt;
}
