#include "ffc/types.h"

extern uint32_t func_020783a4(void *p, uint32_t d);
extern void *func_020783d0(void *p, uint32_t d);

int32_t func_02078de4(void *ctx, void *p, int32_t a, int32_t b, void *c, uint16_t d)
{
    uint32_t r7;
    uint8_t *L[2];
    uint8_t *obj;
    uint8_t *s;
    void *t;

    r7 = func_020783a4(p, d);
    obj = *(uint8_t **)p;
    if (r7 == 0xffff) {
        r7 = *(uint16_t *)(obj + 2);
    }
    L[0] = func_020783d0(p, r7);
    obj = *(uint8_t **)p;
    s = *(uint8_t **)(obj + 8);
    L[1] = s + 8 + (*(uint16_t *)(s + 2)) * r7;
    switch (s[7]) {
    case 0:
    case 7:
        a += (int8_t)L[0][0];
        break;
    case 1:
    case 2:
        a -= s[0];
        b += (int8_t)L[0][0];
        break;
    case 3:
    case 4:
        a -= (int8_t)L[0][0] + L[0][1];
        b -= s[1];
        break;
    case 5:
    case 6:
        b -= (int8_t)L[0][0] + s[1];
        break;
    }
    t = *(void **)((uint8_t *)ctx + 0x14);
    ((void (*)(void *, void *, int32_t, int32_t, void *, void *))(*(void **)t))(ctx, p, a, b, c, &L);
    return *(int8_t *)(L[0] + 2);
}
