#include "General_SMA.h"

union dsma_id {
    std::string name;
    int id;
    int pass;

};

class DSMA : SMA {

    int test;
//    static const std::string m_stat_blob[];

public:
    DSMA(unsigned int period, double *window):SMA(period) {
    }

    DSMA(unsigned int period, int temp) : SMA(period) {

    }

//    std::string blob_str[2] = { "blob1", "blob2" };
//    static const std::string stat_blob[];

    static const std::string m_stat_blob[];

    static const std::string *get_stat_blob() {
        return m_stat_blob;
    }
};
