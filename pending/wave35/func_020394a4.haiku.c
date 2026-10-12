#include "ffc/types.h"

extern void func_020095b8(void *p);
extern void *func_02039554(void *p, int idx);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t big;
} W;

typedef struct {
    uint8_t pad : 1;
    uint8_t small : 7;
} B;

void func_020394a4(void *p0) {
    uint32_t len;

    func_020095b8(p0);
    if (((W *)p0)->flag) {
        len = ((W *)p0)->big;
    } else {
        len = ((B *)p0)->small;
    }
    if (len != 0) {
        if (((int8_t *)func_02039554(p0, 0))[0] < 'a') return;
        if (((int8_t *)func_02039554(p0, 0))[0] > 'z') return;
        {
            uint8_t *dst = (uint8_t *)func_02039554(p0, 0);
            *dst = (uint8_t)(((int8_t *)func_02039554(p0, 0))[0] - 0x20);
        }
    }
}
