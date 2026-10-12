#include "ffc/types.h"

extern void func_020095b8(void *p);
extern int8_t *func_02039554(void *p, int idx);

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
    int i = 0;

    func_020095b8(p0);
    if (((W *)p0)->flag == 0) {
        len = ((B *)p0)->small;
    } else {
        len = ((W *)p0)->big;
    }
    if (len == 0) return;
    if (func_02039554(p0, i)[i] < 'a') return;
    if (func_02039554(p0, i)[i] > 'z') return;
    {
        int8_t *dst = func_02039554(p0, i);
        *dst = func_02039554(p0, i)[i] - 0x20;
    }
}
