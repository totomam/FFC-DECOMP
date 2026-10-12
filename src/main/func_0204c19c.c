#include "ffc/types.h"

extern uint32_t func_0204de50(uint32_t);
extern uint32_t func_0204de70(uint32_t);
extern uint32_t func_0204de7c(uint32_t);
extern uint32_t func_0204de78(uint32_t);
extern int32_t func_0204bf04(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

int32_t func_0204c19c(uint32_t p, uint32_t x, uint32_t flag) {
    uint32_t obj = func_0204de50(p);
    uint32_t a = func_0204de70(obj);
    uint32_t b = func_0204de7c(obj);
    uint32_t c = func_0204de78(obj);
    uint32_t v = *(uint32_t *)(*(uint32_t *)c + 0xc);
    uint32_t bk = b + 0x100;
    int32_t r;

    if (flag == 0) {
        return 0;
    }
    r = func_0204bf04(v, bk, *(uint32_t *)(a + 0xc), p + 0x324, x, flag);
    if (r < 0) {
        return 1;
    }
    if (r == 0) {
        return 2;
    }
    return 0;
}
