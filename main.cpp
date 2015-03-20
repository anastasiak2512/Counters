#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <Hotel.h>

using namespace std;

template <typename value_t>
struct kv_t
{
    struct keyvalue_t
    {
        int key;
        value_t value;
    };
};

typedef kv_t<int> pair_t;

int test()
{
    typedef vector<pair_t::keyvalue_t> keyvalues_t;

    keyvalues_t keyvalues;
    pair_t::keyvalue_t kv;
    keyvalues.push_back(kv);
    return 0;
}

typedef struct boo {
    int x;
} boo;

typedef struct foo {
   boo *b;
   boo* get_boo() {
       return b;
   }
} b;


using namespace std;

typedef enum class color {
    red, blue, green, yellow
} color;


void ColorCheck(color c) {

//    foo *f = new foo();
//    f->get_boo()->x;
//
//    if (c == color::red) {
//        //do smth
//    } else {
//
//    }
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

enum class Color {
    red, green, blue
};


void printColorName(Color c) {
    switch (c) {
        case Color::red:
            printf("RED");
        case Color::green:
            printf("GREEN");
        case Color::blue:
            break;
    }
}

int Foo_Test_a_very_long(int b, int a) {
    return a - b;
}

typedef struct PersonData {
    string name;
    string family_name;
    int    age;
    int    id;
} PersonData;

//void foo(PersonData *visitor) {
//    //string name = visitor->name;
//
//}


//void handle_person(PersonData *visitor) {
//    string name = visitor->name;
//
//
//
//
//}

#define CLASS_DEF(c_name) class class_##c_name {};

CLASS_DEF(one)
CLASS_DEF(two)

void foo() {
   class_one one;
}

void printing(int first, int second) {
    cout << first << " and " << second << endl;
}

void usage() {
    printing(20, 3);
}


//
//bool foo() {
//    //
//}

//void singleStateSample(int num) {
//    int x, y;
//
//    if (num)
//        x = 2, y = 3;
//    else
//        x = 4, y = 5;
//
//    if (foo()) {
//        if (x == 2 || y == 5) {
//            //...
//        }
//
//        if (x == 2 && y == 5) {
//            //...
//        }
//        if (x == 2 || y == 5) {
//            //...
//        } else {
//
//        }
//    }
//}

int main(int argc, char **argv) {

    map<string, string> it_map;

    for (int k = 0; k < 50; k++) {
        cout << k << "\n";
    }

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

