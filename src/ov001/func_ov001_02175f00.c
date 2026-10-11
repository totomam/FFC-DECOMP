#include "ffc/types.h"

extern void func_ov001_0217ef6c(void *p, void *d);
extern int func_ov001_021780e8(void *p, void *a, int b);
extern uint8_t data_ov001_02190100[];

int func_ov001_02175f00(void *p, void *a) {
    uint8_t *obj;
    int r;
    if (p == 0 || (obj = *(uint8_t **)p) == 0) {
        return 2;
    }
    if (*(uint32_t *)(obj + 0x108) != 0) {
        return 0;
    }
    if (*(uint32_t *)(obj + 0x1F4) == 4) {
        func_ov001_0217ef6c(p, data_ov001_02190100);
        return 2;
    }
    r = func_ov001_021780e8(p, a, 1);
    if (r == 0) {
        return 0;
    }
    return r;
}
