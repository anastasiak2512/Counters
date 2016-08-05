//
// Created by AK on 27/06/16.
//

#ifndef COUNTERS_HOUSE_H
#define COUNTERS_HOUSE_H

#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;             // 0 to infinite
    int inches;           // 0 to 12
public:
    Distance() : feet(0), inches(0) {}
    Distance(int feet, int inches) : feet(feet), inches(inches) {}

    Distance operator- ()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }

    bool operator <(const Distance& d)
    {
        if(feet < d.feet)
        {
            return true;
        }
        return feet == d.feet && inches < d.inches;
    }

};

class House {
private:
    Distance centerDist;
    string   name;
    int      id;

};


#endif //COUNTERS_HOUSE_H
