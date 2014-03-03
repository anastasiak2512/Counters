class DSMA : SimpleMA {

public:
    DSMA(unsigned int period, double *window):SimpleMA(period, window) {
    }
    virtual  void add (double val) = 0;
};