#include "ffc/types.h"

extern void func_020095b8(void *tmp, void *a, uint32_t b, uint32_t c);
extern void func_02063c28(void *obj, void *tmp, uint32_t b, uint32_t c, void *extra);
extern void *func_020059cc(void *object);
extern uint32_t data_020ab244[];

void *func_0200d7bc(void *obj, void *a1, uint32_t a2, uint32_t a3, void *a4) {
    uint32_t tmp[3];
    uint32_t *p;

    func_020095b8(tmp, a1, a2, a3);
    func_02063c28(obj, tmp, a2, a3, a4);
    func_020059cc(tmp);
    *(uint32_t **)obj = data_020ab244;
    p = (uint32_t *)((uint8_t *)obj + 0x80);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    return obj;
}
