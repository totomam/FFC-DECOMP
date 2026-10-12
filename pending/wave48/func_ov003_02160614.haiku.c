#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern int func_ov003_02160424(void *self, uint32_t p, int flag);
extern void *func_0203b720(void);
extern void *func_02056b10(void *owner);
extern int func_ov003_02160768(void *self, uint32_t a, uint32_t b, int c, int d, int e);
extern void func_02056bc0(void *object, void *node);
extern int func_ov003_02160230(void *self, uint32_t p);
extern uint32_t data_ov003_0217a40c[];

int func_ov003_02160614(void *self, uint32_t param)
{
    uint8_t *o;
    uint8_t *x;
    int f1;
    int f2;
    int f3;
    int ok;
    void *r;
    void *t;
    void *u;

    if (*(int32_t *)((uint8_t *)self + 0xe0) < 0x1e) {
        return 0;
    }

    o = *(uint8_t **)(*(uint8_t **)((uint8_t *)self + 0x80) + 0x180);
    *(uint8_t *)(o + 0xd8) = 0;
    if (o == 0) {
        return 0;
    }

    x = *(uint8_t **)((uint8_t *)self + 0xd4);
    f1 = x[0x12];
    if (f1 != 0) {
        func_0208763c(x + 0x1c);
    }
    ok = (*(void **)(x + 0x14) == 0);
    if (f1 != 0) {
        func_02087678(x + 0x1c);
    }
    if (!ok) {
        return 0;
    }

    if (((uint8_t *)self)[0xce] != 0) {
        return 0;
    }

    x = *(uint8_t **)((uint8_t *)self + 0xd0);
    f2 = x[0x12];
    if (f2 != 0) {
        func_0208763c(x + 0x1c);
    }
    ok = (*(void **)(x + 0x14) == 0);
    if (f2 != 0) {
        func_02087678(x + 0x1c);
    }
    if (!ok) {
        return 0;
    }

    x = *(uint8_t **)(o + 0xbc);
    f3 = x[0x12];
    if (f3 != 0) {
        func_0208763c(x + 0x1c);
    }
    ok = (*(void **)(x + 0x14) == 0);
    if (f3 != 0) {
        func_02087678(x + 0x1c);
    }
    if (!ok) {
        return 0;
    }

    if (*(void **)(o + 0xa0) != 0) {
        func_ov003_02160424(self, param, 1);
        return 1;
    }

    if (*(void **)(o + 0xa4) == 0) {
        return 0;
    }

    t = func_0203b720();
    u = func_02056b10(*(void **)((uint8_t *)self + 0xd0));
    r = (void *)(uintptr_t)func_ov003_02160768(self, data_ov003_0217a40c[0], data_ov003_0217a40c[1], 1, 1, 0);
    x = *(uint8_t **)((uint8_t *)self + 0xd4);
    func_02056bc0(x, r);
    func_02056bc0(x, u);
    func_02056bc0(x, t);
    func_ov003_02160230(self, param);
    return 1;
}
