#include <stddef.h>
#include <sys/time.h>
#include <stdint.h>
#include "Count.h"


void Count::add_volume(int64_t volume) {
    time_t now = time(NULL);
    this->value += volume;
    this->count++;
    this->interval_count++;
    this->interval_volume += volume;
    if (this->max < volume) {
        this->max = volume;
        if (this->interval_max < volume) {
            this->interval_max = volume;
        }
    }
    this->update_time = now;
}
