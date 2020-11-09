/*
  Andrew Alagna
  November 6th, 2018
  Hunter College
  CSCI 135/136
` poem.cpp - This program will fix the porgram poem
      given by professor.`
*/

#include <iostream>
#include <cmath>
using namespace std;


string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue\n";
    return p;
}

int main() {
    string *p;
    while(true) {
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
        cout << *p;
        delete p;
    }

    delete p;
}
