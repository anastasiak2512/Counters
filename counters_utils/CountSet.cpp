#include <stdint.h>
#include <stdlib.h>
#include "CountSet.h"



int32_t CountSet::average_set_add(int64_t id, int64_t interval_seconds) {
    int32_t index = average_set_find_(id);
    if (index != -1) {
        return index;
    }
    if (this->free_count == 0) {
        return -1;
    }
    index = this->free_info[this->free_count - 1];
    this->free_count--;
    this->used_count++;

    int32_t old_index = this->index[id % AVERAGE_SET_INDEX_SIZE];
    this->prev[index] = -1;
    this->id[index] = id;
    if (old_index != -1) {
        this->next[index] = old_index;
        this->prev[old_index] = index;
    } else {
        this->next[index] = -1;
    }
    this->index[id % AVERAGE_SET_INDEX_SIZE] = index;
    return index;
}

int32_t CountSet::average_set_find_(int64_t id) {
    this->find_count++;
    int32_t index = this->index[id % AVERAGE_SET_INDEX_SIZE];
    if (index == -1) {
        return -1;
    }
    while (1) {
        if (this->id[index] == id) {
            return index;
        }
        if (this->next[index] == -1) {
            return -1;
        }
        index = this->next[index];
        this->find_count_next++;
    }
}
