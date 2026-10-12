#include "ffc/types.h"

extern uint32_t func_020615ac(void *a, uint32_t b);
extern uint32_t *func_0205681c(uint32_t size);
extern void func_02055110(void *a, uint32_t *b);
extern uint32_t data_020b1540[];
extern void *data_0213e098;

typedef struct { uint32_t a, b; } S;
typedef struct { uint32_t p3, a4, a5, a6, a7; } B;
typedef S (*VF)(void *self, uint32_t x);

void func_0206175c(uint32_t *p0, uint32_t *p1, uint32_t idx, B q)
{
    uint32_t id;
    uint32_t *o;
    uint32_t r6;
    uint8_t b;
    S ret;

    id = func_020615ac(p0, q.a7) + 2;
    if (id == 0) {
        return;
    }
    o = func_0205681c(0x38);
    if (o != 0) {
        r6 = p1[1] + idx * p1[5];
        b = ((uint8_t *)p0)[0x24];
        ret = ((VF)((void **)(*(void **)p0))[3])(p0, q.a7);
        o[0] = data_020b1540[0];
        o[3] &= 0xffffff00u;
        o[5] = id;
        o[6] = ret.a;
        o[7] = ret.b;
        o[8] = r6;
        o[9] = q.p3;
        o[10] = q.a4;
        o[11] = q.a5;
        o[12] = q.a6;
        ((uint8_t *)o)[0x34] = b;
    }
    func_02055110(data_0213e098, o);
}
