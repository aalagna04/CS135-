/*
 Andrew Alagna
 November 6th, 2018
 Hunter College
 CSCI 135/136
 Lab 9 - 3d-space.cpp - a program in which I define a function
 length() that receives the coordinates of a point P passed as a pointer,
 and computes the distance from the origin to the point P
 
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



// free memory
void deleteCoord3D(Coord3D *p);

int main() {
    Coord3D pointP = {10, 20, 30};
    
    
    //taskA
    if(test_length){
        cout << "passed tests for task A" << endl;
    }
    cout << length(&pointP) << endl; // would print 37.4166
    
   
    
    
}

double length(Coord3D *p){
    //dereference p first
    double length = sqrt(pow((*p).x, 2.0) + pow((*p).y, 2.0) + pow((*p).z, 2.0));
    return length;
}

