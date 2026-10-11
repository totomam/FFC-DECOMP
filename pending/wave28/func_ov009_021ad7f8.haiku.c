#include "ffc/types.h"

typedef int (*vfn_t)(void *, int, int);

int func_ov009_021ad7f8(void *p, uint8_t idx) {
    uint8_t *b = (uint8_t *)p;
    void **obj;
    if (idx < 5) {
        if (b[0x280] != idx) {
            if (b[0x27b] == 0) {
                b[0x288] = idx;
            } else if (b[0x27b] == 1) {
                b[0x289] = idx;
            }
            b[0x280] = idx;
            obj = *(void ***)(b + 0xd4);
            ((vfn_t)((void **)*obj)[14])(obj, b[0x280] + 1, 0);
            return 1;
        }
    }
    return 0;
}
