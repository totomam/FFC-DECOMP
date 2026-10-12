#include "ffc/types.h"

typedef struct {
    uint32_t lo;
    uint32_t hi;
} S64;

extern uint32_t func_ov004_02153514(uint32_t x);
extern uint32_t func_ov004_0214f740(void *obj, uint32_t idx);
extern void func_01ffdd5c(S64 *out, S64 a, S64 b, uint32_t flag);

void func_ov004_0214ed10(S64 *out, uint8_t *obj, uint32_t key, S64 v) {
    S64 t1;
    S64 t2;
    uint32_t idx;
    if (key != func_ov004_02153514(*(uint32_t *)(obj + 0x88))) {
        if (func_ov004_0214f740(obj, key) != func_ov004_0214f740(obj, func_ov004_02153514(*(uint32_t *)(obj + 0x88)))) {
            v.lo = *(uint32_t *)(obj + 0xfc) - 1 - v.lo;
        }
        func_01ffdd5c(&t1, *(S64 *)(obj + 0x158 + key * 8), v, 0);
        v.lo = t1.lo;
        v.hi = t1.hi;
        idx = func_ov004_02153514(*(uint32_t *)(obj + 0x88));
        func_01ffdd5c(&t2, *(S64 *)(obj + 0x158 + idx * 8), v, 1);
        v.lo = t2.lo;
        v.hi = t2.hi;
    }
    out->lo = v.lo;
    out->hi = v.hi;
}
