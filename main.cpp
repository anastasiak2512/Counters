#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>

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
    if (c == color::red) {
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

//typedef struct PersonData {
//    string name;
//    string family_name;
//    int    age;
//} PersonData;
//
//void foo(PersonData *visitor) {
//    string name = visitor->family_name;
//
//
//}

//void handle_person(PersonData *visitor) {
//    string name = visitor->name;
//
//
//
//
//}


int main(int argc, char **argv) {


    std::map<string, string> it;
    it.insert(pair<string, string>("Ada", "Ada Lovelace"));
    it.insert(pair<string, string>("Turing Machine", "Alan Turing"));
    it.insert(pair<string, string>("von Neumann architecture", "John von Neumann"));
    it.insert(pair<string, string>("Lisp", "John McCarthy"));
    it.insert(pair<string, string>("C++", "Bjarne Stroustrup"));
    it.insert(pair<string, string>("GNU project", "Richard Stallman"));
    it.insert(pair<string, string>("Linux", "Linus Torvalds"));

    auto search = it.find("C++");
    if(search != it.end())
        std::cout << "Found " << search->first << " created by " << search->second << '\n';
    else
        std::cout << "Not found\n";



    return 0;
}

