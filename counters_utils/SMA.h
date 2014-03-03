#include <stddef.h>
#include <cstddef>

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

public:

    SMA(unsigned int period) :
    period(period), window(new double[period]), head(NULL), tail(NULL) {
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

    void addToBegin(double val);
};