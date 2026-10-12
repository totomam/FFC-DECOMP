#include "ffc/types.h"

extern int func_0208fddc(void *);
extern uint8_t data_020b2bb0[];

int func_0208f650(void) {
    int r6 = 0;
    int i = 1;
    uint8_t *p = data_020b2bb0;
    do {
        uint32_t v = *(uint32_t *)(p + 4);
        if (((v << 22) >> 29) != 0) {
            if (func_0208fddc(p) != 0) {
                r6 = -1;
            }
        }
        if (i < 3) {
            int off = i * 0x4c;
            i++;
            p = data_020b2bb0 + off;
        } else {
            p = 0;
        }
    } while (p != 0);
    return r6;
}
