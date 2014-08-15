#include "SMA.h"

int64_t SMA::iter_count(int l) {
    return l;
}

double SMA::avg() const {
    auto size = this->size();
    if (size == 0) {
        return 0;
    }
    return total / (double) size;
}

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
        head = window;
        *head = val;
        tail = head;
        inc(tail);
        total = val;
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














