//
// Created by AK on 08/06/15.
//

#include <stdio.h>
#include "ParserSamples.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-value"

template<int>
struct x {
    x(int i) { }
};

void ParserSamples::test_parse_template(int y) {

    const int a = 100;

    auto k = x<a>(0); //Template parameters
    auto l = y < a > (0); //Binary expressions
}

void ParserSamples::test_parse_constructor() {
    struct x {
    };

    struct y {
        y(x) { }; // constructor with parameter x
        x(z); // variable z with type x
    };
}


void ParserSamples::test_parse_func() {
    struct a;

    class x {
        x(a()) { }; // constructor
        x(b()) {}; // function

    };
}


void ParserSamples::test_parse_decltype() {
    float a;
    decltype(0)(b); // Variable b of type int
    decltype(a)(0); // Cast of 0 to type of a
}


void ParserSamples::test_parse_cast() {
    struct x {
        x(int) { };
    };

    int y = 100;

    (x) -5; // cast
    (y) - 5; // expression

}

struct Type {
};
int var;

void ParserSamples::test_parse_cast_type() {
    // function type taking Type
    // and returning int; we cast "+1" to it
//    (int(Type)) + 1;
    // function-style cast of var to int;
    // we add result of cast to 1
    //   (int(var)) + 1;
}


void ParserSamples::test_parse_constructor_struct() {
    struct x {
    };
    struct y {
    };

//    x(b)(int (y *c));
}

void ParserSamples::test_template_args() {
//    template <typename T> void distance();
//    int distance2;
//
//    struct mypath
//    {
//        int distance;
//        template <typename T> int distance2() { return 0; };
//    };
//
//    mypath a;
//    if (a.distance < 0) { } //Should be binary
//    if (a.distance2<int>()) { } //Should be template arg
}


#pragma clang diagnostic pop