#include "ffc/types.h"

extern void func_02091b10(void *object, uint32_t first, ...);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern uint8_t data_ov005_02199344[];
extern uint8_t data_ov005_02199378[];

void *func_ov005_02197b10(void *p0, uint32_t *p1)
{
    uint32_t buf[0x11];
    void *obj;
    void **vt;
    int flag;
    uint8_t *s;

    flag = 0;
    if (((*p1 << 14) >> 31) == 1) {
        flag = 1;
    }
    if (flag) {
        s = data_ov005_02199378;
    } else {
        s = data_ov005_02199344;
    }
    func_02091b10(buf, s, (*p1 << 22) >> 22);
    obj = func_0203b95c(buf, p0, 2, 1);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, ((*p1 << 15) >> 25) + 1, 0);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[0x28 / 4])(obj);
    return obj;
}
