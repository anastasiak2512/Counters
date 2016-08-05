//
// Created by AK on 20/11/15.
//

#include "Human.h"

float Human::bmi() {
    auto d = squareH();
    if (d != 0) {
        return weight / d;
    } else {
        return -1;
    }

}


float Human::squareH() {
    return 0;
}


