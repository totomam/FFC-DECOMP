#include "ffc/types.h"

extern int32_t (*data_020aabc4[])(void);
extern int32_t data_020aabc0;

int32_t func_02008b50(int32_t a) {
    int32_t r;
    if (a < 0 || a > 59) {
        return -1;
    }
    r = data_020aabc4[a]();
    data_020aabc0 = a;
    return r;
}
