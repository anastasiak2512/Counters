/*
 * Header file
 */

#include <sys/time.h>
#include <stdint.h>

class Count {
private:
    int64_t interval_count;
    double speed;
    double cps;
    int64_t count;
    int64_t interval_volume;
    int64_t interval_max;
    int64_t value;
    int64_t max;

    time_t update_time = 0;
    time_t create_time = 0;

public:
    int64_t getValue() const {
        return value;
    }

    void setValue(int64_t value) {
        Count::value = value;
    }

    time_t getUpdate_time() const {
        return update_time;
    }

    void setUpdate_time(time_t update_time) {
        Count::update_time = update_time;
    }

    time_t getCreate_time() const {
        return create_time;
    }

    void setCreate_time(time_t create_time) {
        Count::create_time = create_time;
    }

    int64_t getInterval_count() const {
        return interval_count;
    }

    void setInterval_count(int64_t interval_count) {
        Count::interval_count = interval_count;
    }

    double getSpeed() const {
        return speed;
    }

    void setSpeed(double speed) {
        Count::speed = speed;
    }

    double getCps() const {
        return cps;
    }

    void setCps(double cps) {
        Count::cps = cps;
    }

    int64_t getInterval_max() const {
        return interval_max;
    }

    void setInterval_max(int64_t interval_max) {
        Count::interval_max = interval_max;
    }

    int64_t getCount() const {
        return count;
    }

    void setCount(int64_t count) {
        Count::count = count;
    }

    int64_t getInterval_volume() const {
        return interval_volume;
    }

    void setInterval_volume(int64_t interval_volume) {
        Count::interval_volume = interval_volume;
    }

    int64_t getMax() const {
        return max;
    }

    void setMax(int64_t max) {
        Count::max = max;
    }

    void add_volume(int64_t volume);
};