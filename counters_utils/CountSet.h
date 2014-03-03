#include "Count.h"

#define AVERAGE_SET_SIZE 10
#define AVERAGE_SET_INDEX_SIZE 10

class CountSet {
private:
    Count average[AVERAGE_SET_SIZE];
    int64_t id[AVERAGE_SET_SIZE];
    int32_t free_info[AVERAGE_SET_SIZE];
    int32_t next[AVERAGE_SET_SIZE];
    int32_t prev[AVERAGE_SET_SIZE];
    int32_t index[AVERAGE_SET_INDEX_SIZE];
    int32_t used_count = 0;
    int32_t free_count = AVERAGE_SET_SIZE;
    int64_t find_count = 0;
    int64_t find_count_next = 0;

    int32_t average_set_find_(int64_t id);

public:

    int32_t getUsed_count() const {
        return used_count;
    }

    void setUsed_count(int32_t used_count) {
        CountSet::used_count = used_count;
    }

    int32_t getFree_count() const {
        return free_count;
    }

    void setFree_count(int32_t free_count) {
        CountSet::free_count = free_count;
    }

    int64_t getFind_count() const {
        return find_count;
    }

    void setFind_count(int64_t find_count) {
        CountSet::find_count = find_count;
    }

    int64_t getFind_count_next() const {
        return find_count_next;
    }

    void setFind_count_next(int64_t find_count_next) {
        CountSet::find_count_next = find_count_next;
    }

    int32_t average_set_add(int64_t id, int64_t interval_seconds);

    Count get_count_by_ind(int32_t ind) const {
        return average[ind];
    }
};