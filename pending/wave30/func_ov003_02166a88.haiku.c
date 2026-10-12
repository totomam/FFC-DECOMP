#include "ffc/types.h"

extern void *func_ov003_021481c0(void *p);
extern void *func_020424e0(void *p);
extern void *func_ov003_021464f4(void *p, void *q);
extern float func_0209b5bc(uint32_t a, float b);
extern float func_0209af28(float a, float b);
extern int32_t func_0209ab5c(float a);

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov003_02156358(void *obj, uint32_t a, Pair b, int32_t d, uint32_t e, uint32_t f);

void func_ov003_02166a88(uint32_t *p)
{
    void *r4;
    uint32_t a1;

    r4 = func_ov003_021481c0((void *)p[6]);
    p[6] = (uint32_t)r4;
    if (r4 == 0) {
        return;
    }
    r4 = func_ov003_021464f4(func_020424e0((void *)p[5]), r4);
    if (r4 == 0) {
        return;
    }
    {
        int32_t a0 = func_0209ab5c(func_0209af28(4096.0f, func_0209b5bc(p[10], 360.0f)));
        uint32_t s1 = p[11];
        uint32_t s2 = p[12];
        a1 = p[7];
        p += 8;
        func_ov003_02156358(r4, a1, *(Pair *)p, a0, s1, s2);
    }
}
