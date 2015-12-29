#include <stdio.h>
#include <iostream>
//#include <vector>
//#include <map>
#include <numeric>
#include <map>
#include <vector>
#include <ParserSamples.h>
#include <assert.h>
#include <memory>
#include <Human.h>

using namespace std;


template<typename T = int>
void f() {
}
void test() {
    f<>();
}

int Foo_Test_a_very_long(int b, int a) {
    return a - b;
}

//Macro definition support
#define CLASS_DEF(class_name) class class_##class_name {};

CLASS_DEF(one)
CLASS_DEF(two)

void foo(int c) {
   class_two cl;
}

void printing(int first, int second) {
    cout << "first " << first << " and second " << second << endl;
}

void log(const char* format, ...) {

}

typedef struct PersonData {
    int    age;
    int    id;
    const char * name;
} PersonData;

void printingPerson(PersonData *p1, PersonData *p) {
    cout << p->name << endl;
}

void usage() {
    PersonData p = {64, 0, "Bjarne Stroustrup"};

    printingPerson(nullptr, &p);
}

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
//        default:break;
    }

    switch (c) {
        case color::red: break;
        case color::blue: break;
        case color::green: break;
        case color::yellow: break;
        default: break;
    }

}

template <typename T, typename U>
auto add(T t, U u) -> decltype(t+u)
{
    return t+u;
}

void fun_type() {
    auto q = add(3, 3);
}

int boo(int x) {
    if (x == 10)
        return 7;
    if (x == 8)
        goto fail;
        goto fail;
    if (x == 7)
        return 8;
    fail:
    return 0;
}

//Neil's sample1
enum class States {Started, Stopped, Waiting};

void startOnStop(States current) {
    current = States::Started;

    if (current == States::Stopped) {
        //...
    }

    //...
}

//Neil's sample2
enum SystemLevels {
    SystemLOne, SystemLTwo, SystemLThree
};
const unsigned int g_flags = SystemLTwo | SystemLThree;

void flagsHandler() {
    if (g_flags & SystemLOne) {
        //...
    }

    //...
}

void handle_value(int val) {
    int &x = val;

    wchar_t wa[] = L"Develop with pleasure!";

    //...
}

namespace Base {
    void test() {};
}
namespace Child = Base;


using Child::test;


int main(int argc, char **argv) {

    handle_value(2015);
    map<string, string> itMap;

    ParserSamples sample;
    sample.test_parse_constructor();
//    return 0;

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
