#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t v;
    uint8_t *pp;
    uint8_t *q;
    uint8_t flag;
} Local;

extern void func_02074b28(uint8_t *base);
extern void func_0208763c(void);
extern void func_020235ac(void *a, uint8_t *b, uint32_t *c, uint8_t **d);
extern void func_02056844(void *p);
extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_02087678(uint8_t *p);

void func_02074c04(uint8_t *base)
{
    Local loc;
    uint32_t i, j;
    uint8_t *obj;

    func_02074b28(base);
    loc.q = base + 0x4238;
    loc.flag = 1;
    if (loc.flag) {
        func_0208763c();
    }
    for (i = 0; i < 0x20; i++) {
        uint8_t **pa = (uint8_t **)(base + i * 4 + 0x41b8);
        obj = *pa;
        if (obj != 0) {
            if (obj != 0) {
                loc.pp = obj + 4;
                loc.v = *(uint32_t *)(obj + 8);
                func_020235ac(&loc, obj, &loc.v, &loc.pp);
                func_02056844(obj);
            }
            *pa = (uint8_t *)0;
        }
        obj = *(uint8_t **)(base + i * 4 + 0x4138);
        if (obj) {
            func_02056844(obj);
            *(uint8_t **)(base + i * 4 + 0x4138) = (uint8_t *)0;
        }
        for (j = 0; j < 2; j++) {
            uint8_t *e = base + i * 4 + (j << 7);
            if (*(uint8_t **)(e + 0x30)) {
                func_02056844(*(uint8_t **)(e + 0x30));
                *(uint8_t **)(e + 0x30) = (uint8_t *)0;
            }
        }
    }
    func_02084b2c(base + 0x130, 0, 0x4008);
    if (loc.flag) {
        func_02087678(loc.q);
    }
}
