#include "ffc/types.h"
typedef struct { uint32_t v:24; uint32_t f:8; } BF;

extern uint32_t *func_0207a880(void *a);
extern uint32_t func_0207b17c(uint32_t v, uint32_t r7, uint32_t r3);
extern uint32_t func_0207ab40(uint32_t v);
extern BF *func_0207a8cc(void);
extern uint32_t func_0207b034(uint16_t v, uint32_t flags, uint32_t r7, uint32_t r3, uint32_t *local);
extern uint32_t func_0207b430(uint32_t local, uint32_t r4, uint32_t i, uint32_t val, uint32_t r7);
extern void func_0208a458(uint32_t r4, uint32_t i, uint32_t local);

uint32_t func_0207af5c(void *a, uint32_t flags, uint32_t r7, uint32_t r3, uint32_t *out)
{
    uint32_t *obj;
    uint32_t r4;
    int32_t i;
    uint32_t f4;

    obj = func_0207a880(a);
    if (obj == 0) {
        return 4;
    }
    if (flags & 2) {
        r4 = func_0207b17c(obj[0], r7, r3);
        if (r4 == 0) {
            return 8;
        }
    } else {
        r4 = func_0207ab40(obj[0]);
    }
    i = 0;
    f4 = flags & 4;
    for (; i < 4; i++) {
        uint16_t *ptr = (uint16_t *)obj + i;
        if (ptr[2] != 0xffff) {
            uint32_t local;
            BF *r6;
            uint32_t t;
            r6 = func_0207a8cc();
            if (r6 == 0) {
                return 5;
            }
            t = func_0207b034(ptr[2], flags, r7, r3, &local);
            if (t != 0) {
                return t;
            }
            if ((r6->f & 1) && f4) {
                if (func_0207b430(local, r4, i, r6->v, r7) == 0) {
                    return 9;
                }
            }
            if (r4 != 0 && local != 0) {
                func_0208a458(r4, i, local);
            }
        }
    }
    if (out != 0) {
        *out = r4;
    }
    return 0;
}
