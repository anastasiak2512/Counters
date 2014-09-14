#include "SMA.h"


class DSMA : SMA {

public:
    DSMA(unsigned int period, double *window):SMA(period) {
    }
};