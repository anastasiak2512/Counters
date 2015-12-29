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

    void congratulate() {
        //Congratulate and wish a Merry Christmas
        std::cout << "Merry Christmas " << name << "!" << std::endl;
        std::cout << "May all your wishes come true next year!" << std::endl;
    }
};

class Human : public Mammal {
private:
    float height;
    float weight;

    int age;

public:

    Human(float height, float weight, int age) : height(height), weight(weight), age(age) { }

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

    virtual void makeSound() override;

    float bmi();

    float squareH();
};


#endif //COUNTERS_HUMAN_H
