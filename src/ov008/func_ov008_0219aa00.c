#include "ffc/types.h"

extern uint32_t func_020098e0(void);
extern uint32_t func_0209a978(uint32_t cap, uint32_t align);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t size;
} Obj;

uint32_t func_ov008_0219aa00(Obj *p, uint32_t n) {
    uint32_t size = p->size;
    uint32_t *q;
    if (n > 0x3fffffffu - size) {
        func_020098e0();
    }
    if (size < 0x15555555u) {
        uint32_t cap = func_0209a978(3 * (size + 1), 5);
        q = (cap < n) ? &n : &cap;
        return size + *q;
    } else if (size < 0x15555555u * 2u) {
        uint32_t half = (size + 1) >> 1;
        q = (half < n) ? &n : &half;
        return size + *q;
    }
    return 0x3fffffffu;
}
