#include <stdio.h>
#include <iostream>
//#include <vector>
//#include <map>
#include <numeric>
#include <map>
#include <vector>
#include <ParserSamples.h>
#include <assert.h>

using namespace std;

int Foo_Test_a_very_long(int b, int a) {
    return a - b;
}

//Start completion
typedef struct PersonData {
    string name;
    string family_name;
    int    age;
    int    id;
} PersonData;

void handle_person(PersonData *visitor) {
    string name = visitor->name;
}


//Macro definition support
#define CLASS_DEF(class_name) class class_##class_name {};

CLASS_DEF(one)
CLASS_DEF(two)


void foo(int c) {
   class_one one;
}

//Change signature refactoring - reorder params
void printing(int erst, int second) {
    cout << "erst " << erst << " and second " << second << endl;
}

void usage() {
    printing(20, 3);
}

//TODO:
//DFA: condition is always true
void singleStateSample(int num, int num2) {
    int x, y;

    if (num)
        x = 2, y = 3;
    else
        x = 4, y = 5;

    if (num2) {
        if (x == 2 || y == 5) {
            //...
        }
    }
}

//DFA: missing switch cases
typedef enum class color {
    red, blue, green, yellow
} color;

void ColorCheck(int flag);
void ColorCheck(int flag) {
    color c;

    switch (flag) {
        case 0: c = color::red; break;
        case 1: c = color::blue; break;
        default: c = color::green; break;
    }

    switch (c) {
        case color::red: break;
        case color::blue: break;
        case color::green: break;
        case color::yellow: break;
        default: break;
    }

}

#define MAX_VALUE 100

void boo(volatile int n) {
//    if (n = MAX_VALUE) {
//
//    }
}

class a {
    int g() const {
        return 4;
    }

    int f() {
        int a = getInt();   // Try to inline it
        return a;
    }

    int getInt() const { return g() + 5; }
};

template <typename T, typename U>
auto add(T t, U u) -> decltype(t+u)
{
    return t+u;
}

void func() {
    auto q = add(2, 3.26); //quick doc
}


struct A { A() {} };

void type_check() {
    const A a;
    auto b = a;

}

class Factory { };

int main(int argc, char **argv) {
    Factory *pf = new Factory();
    volatile Factory *vpf = new Factory();
    pf = vpf;


    ParserSamples sample;
    sample.test_parse_constructor();
    //return 0;

    map<string, string> it_map;

    it_map.insert(pair<string, string>("Ada", "Ada Lovelace"));
    it_map.insert(pair<string, string>("Turing Machine", "Alan Turing"));
    it_map.insert(pair<string, string>("Lisp", "John McCarthy"));
    it_map.insert(pair<string, string>("C++", "Bjarne Stroustrup"));
    it_map.insert(pair<string, string>("GNU project", "Richard Stallman"));
    it_map.insert(pair<string, string>("Linux", "Linus Torvalds"));

    auto search = it_map.find("C++");
    if(search != it_map.end()) {
        std::cout << "Found " << search->first << " created by " << search->second << '\n';
    }
    else {
        std::cout << "Not found\n";
    }

//    Hotel alpha(400, "Izmailovskoe", 64);
//    alpha.print_info();


    return 0;
}

