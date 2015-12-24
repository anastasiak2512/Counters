//
// Created by AK on 20/11/15.
//

#ifndef COUNTERS_HUMAN_H
#define COUNTERS_HUMAN_H

#include <string>

class Mammal {
public:
    virtual void makeSound() = 0;
};

class Human : public Mammal {
private:
    float height;
    float weight;

    int age;

    std::string name;
    std::string surname;
public:

    Human(float height, float weight, int age) : height(height), weight(weight), age(age) { }

    float getHeight() const {
        return height;
    }

    void test() {
        std::string str = this->surname;
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
