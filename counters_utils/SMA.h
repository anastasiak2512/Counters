#include "CountSet.h"
#include <iostream>

#define SMA_SUPPORT 1

class SMA {
private:
    unsigned int period;
    double * window;

    double * head = nullptr;
    double * tail = nullptr;


    double total = 0;

    void inc(double * & p);
    ptrdiff_t size() const;

    CountSet count;

public:

    SMA(unsigned int period) : period(period), window(new double[period]) {
        //assert(period >= 1);
    }
    ~SMA() {
        delete[] window;
    }

    unsigned int getPeriod() const {
        return period;
    }

    void setPeriod(unsigned int period) {
        SMA::period = period;
    }

    double *getWindow() const {
        return window;
    }

    void setWindow(double *window) {
        SMA::window = window;
    }

    void add(double val);
    double avg() const;


    CountSet getMutCount() const {
        return count;
    }

    void setCount(CountSet const &count) {
        SMA::count = count;
    }

    int64_t iter_count(int l);

    void AddToHead(double val);
};
