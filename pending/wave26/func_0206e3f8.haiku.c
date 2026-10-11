#include "ffc/types.h"

extern uint32_t data_0213e178;
extern int func_0206cb98(uint32_t);
extern int func_0208e2f0(uint32_t, uint32_t, uint8_t *);

void func_0206e3f8(uint8_t *p) {
    uint32_t base;
    int r;
    uint8_t flag;
    if (func_0206cb98(data_0213e178) != 0) {
        return;
    }
    base = data_0213e178;
    r = func_0208e2f0(*(uint32_t *)(base + 0x30a0),
                      *(uint32_t *)(p + 0x268),
                      p + 0x68);
    flag = 1;
    if (r != 0) {
        flag = 0;
    }
    *(uint8_t *)(p + 0x280) = flag;
}
