#include <iostream>
#include <numeric>
#include <map>
#include <vector>
#include <ParserSamples.h>
#include <assert.h>
#include <memory>
#include <Human.h>
#include <set>

using namespace std;

class A { ;
public:
    virtual void testA(int flag) {}
};

class B : public A {
    void testA() {

    }
};

class C : public A {
    void testA(int flag) {
        A::testA(0);
    }
};


void log(int leve, const char* format, ...) {}
#define LOG_INFO(format, ...) log(1, format)
#define LOG_ERROR(format, ...) log(2, format)


int get_id_by_name(const char *name) {
    return 0;
}

void callId(int id) {

}

void makeCall(const char * fullName) {
    LOG_INFO("Call fullName: %s", fullName);
    auto id = get_id_by_name(fullName);
    if (id > 0) {
        callId(id);
    } else {
        LOG_ERROR("Incorrect id for fullName: %s", fullName);
    }
}

template<typename T = int>
void f() {
}
void test() {
    f<>();
}

int Foo_Test_a_very_long(int b, int a) {
    return a - b;
}

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

void printingPerson(PersonData *p1, PersonData *p);

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

typedef enum class BasicColor {
    RedBasicColor, BlueBasicColor, GreenBasicColor, YellowBasicColor
} color;

void ColorCheck(int flag);
void ColorCheck(int flag) {
    BasicColor c;

    switch (flag) {
        case 0: c = BasicColor::RedBasicColor; break;
        case 1: c = BasicColor::BlueBasicColor; break;
        default: c = BasicColor::GreenBasicColor; break;
//        default:break;
    }

    switch (c) {
        case BasicColor::RedBasicColor: break;
        case BasicColor::BlueBasicColor: break;
        case BasicColor::GreenBasicColor: break;
        case BasicColor::YellowBasicColor: break;
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

//Variadic templates
//template<typename First, typename... Rest> class tuple;
//template<typename... Params> void printf(const std::string &str_format, Params... parameters);
//void printf(const char *s)
//{
//    while (*s) {
//        if (*s == '%') {
//            if (*(s + 1) == '%') {
//                ++s;
//            }
//            else {
////                throw std::runtime_error("invalid format string: missing arguments");
//            }
//        }
//        std::cout << *s++;
//    }
//}
//
//template<typename T, typename... Args>
//void printf(const char *s, T value, Args... args)
//{
//    while (*s) {
//        if (*s == '%') {
//            if (*(s + 1) == '%') {
//                ++s;
//            }
//            else {
//                std::cout << value;
//                s += 2; // this only works on 2 characters format strings ( %d, %f, etc ). Fails miserably with %5.4f
//                printf(s, args...); // call even when *s == 0 to detect extra arguments
//                return;
//            }
//        }
//        std::cout << *s++;
//    }
//}

//void func() {} // termination call
//
//template<typename Arg1, typename... Args>
//void func(const Arg1& arg1, const Args&... args)
//{
//    printf( arg1 );
//    func(args...);
//}

//void tprintf(const char* format)
//{
//    std::cout << format;
//}
//
//template<typename T, typename... Targs>
//void tprintf(const char* format, T value, Targs... Fargs)
//{
//    for ( ; *format != '\0'; format++ ) {
//        if ( *format == '%' ) {
//            std::cout << value;
//            tprintf(format+1, Fargs...);
//            return;
//        }
//        std::cout << *format;
//    }
//}

struct S {
    vector<int> field;
};

void some_function() {
    S s;
    s.field.clear();
}

void testrename() {
    {
        float afl = 0.0f;
        for (int i = 0; i < 100; i++) {
            afl += 0.1f;
        }
    }

    float afl = 5.0f;
    std::cout << afl << std::endl;
}

int main(int argc, char **argv) {
    long data[1000000];
    for (int i = 0; i < 100; i += 2) {
        data[i] = i;
    }
    for (int i = 0; i < 100; i += 2) {
        data[i] = i*i;
    }

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

    for (auto const &ent : it_map) {
        std::cout << "Found " << ent.first << " created by " << ent.second << '\n';
    }

//    auto search = it_map.find("C++");
//    if(search != it_map.end()) {
//        std::cout << "Found " << search->first << " created by " << search->second << '\n';
//    }
//    else {
//        std::cout << "Not found\n";
//    }


    auto search = it_map.find("C++");
    











//    Hotel alpha(400, "Izmailovskoe", 64);
//    alpha.print_info();


    return 0;
}
