#include <stdio.h>
#include "SMA.h"

#ifndef SMA_SUPPORT
#error SMA support is required
#endif

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


int main(int argc, char **argv) {
    SMA sma_handler(4);
    int data[] = { 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 };

    SomeClass test;

    for (auto el : data) {
        sma_handler.add(el);
        printf("current avg: %f %d\n", sma_handler.avg(), test.getValue());
    }

    return 0;
}