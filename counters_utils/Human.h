//
// Created by AK on 20/11/15.
//

#ifndef COUNTERS_HUMAN_H
#define COUNTERS_HUMAN_H

#include <string>
#include <iostream>

class Mammal {
    std::string name;
public:
    virtual void makeSound() = 0;
    void test(){};
};

class Human : public Mammal {
private:
    float height;
    float weight;
    int age;

public:

    Human(float height, float weight) :
            height(height), weight(weight) { }

    float getHeight() const {
        return height;
    }

    void setHeight(float height) {
        Human::height = height;
    }

    float getWeight() const {
        return weight;
    }

    void setWeight(float weight) {
        Human::weight = weight;
    }

    float bmi();

    float square();
};


#endif //COUNTERS_HUMAN_H
