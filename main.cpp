#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include "SMA.h"

#define TEST_MACRO 10
#ifndef SMA_SUPPORT
#error SMA support is required
#endif



using namespace std;

typedef enum class color {
    red, blue, green, yellow
} color;

void ColorCheck(color c) {

    if (c = color::red) {
        //do smth
    } else {

    }
}

class SomeClass {
public:
    SomeClass() {}
    explicit SomeClass(int new_value) : value(new_value) {}


    int getValue() const {
        return value;
    }

private:
    int value = 5;
};

//constexpr int inc (int a)
//{
//    return a + 1;
//}
//
//int func()
//{
//    int a = inc (3);
//    constexpr int b = inc (a); // ошибка: преобразование int -> constexpr int
//    constexpr int c = inc (const_cast<constexpr int> (a)); // ошибка: const_cast не может преобразовать int -> constexpr int
//
//    return b+c;
//}

enum class Color {red, green, blue};

void printColorName(Color c) {
    switch (c) {
        case Color::red: printf("RED");
        case Color::green: printf("GREEN");
        case Color::blue: break;
    }
}

int foo(int b, int a) {
    return a - b;
}


int main(int argc, char **argv) {
    double data[] = { 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 };



//    int a, b, c, d;
//    int e = a + c +
//            d;
//    int a = b * (c +
//            d);
//    return a * (b + c +
//            d);
//    return
//            a +
//                    b + c;


    int k = foo(2, 1);

    int a = (5 + TEST_MACRO/10);

    std::cout << "Enter month (1..12): ";

    SomeClass test;

    SMA sma_handler(a);

    void checkStr(std::string x) {}


    typedef std::map<std::string, std::string, float> StringFloatMap;
    StringFloatMap fmap;
    StringFloatMap::iterator pos;
    for (pos=fmap.begin(); pos!=fmap.end(); ++pos) {
        std::string x = pos->second;
    }


    for (auto el : data) {
        sma_handler.add(el);
        printf("current avg: %f %d\n", sma_handler.avg(), test.getValue());
    }

    return 0;
}

