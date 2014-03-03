#include "SMA.h"


void SMA::inc(double *&p) {
    if (++p >= window + period) {
        p = window;
    }
}

ptrdiff_t SMA::size() const {
    if (head == NULL)
        return 0;
    if (head == tail)
        return period;
    return (period + tail - head) % period;
}

void SMA::add(double val) {
    if (head == NULL) {
        addToBegin(val);
        return;
    }

    if (head == tail) {
        total -= *head;
        inc(head);
    }

    *tail = val;
    inc(tail);

    total += val;
}

void SMA::addToBegin(double val) {
    head = window;
    *head = val;
    tail = head;
    inc(tail);
    total = val;
}

double SMA::avg() const {
    auto size = this->size();
    if (size == 0) {
        return 0;
    }
    return total / (double) size;
}
