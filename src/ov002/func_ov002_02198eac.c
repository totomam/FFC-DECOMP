#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t z);
extern void func_02087620(void *object);
extern void func_02055ae8(void *a, void *b);
extern char data_020ae6d4[];
extern char data_ov002_021d49ec[];
extern char data_ov002_021d4a08[];

void *func_ov002_02198eac(void *self, void *p1, uint32_t p2)
{
    char *s = (char *)self;
    uint32_t *r0;
    uint32_t *r1;
    void *b;

    func_02056c9c(self, 0);
    r0 = (uint32_t *)(s + 0x80);
    *(void **)((char *)self + 0x80) = data_020ae6d4;
    r1 = (uint32_t *)(r0 + 4);
    r0[1] = 0;
    r0[2] = 0;
    r0[3] = 0;
    r0[4] = 0;
    r1[1] = 0;
    r1[2] = 0;
    func_02087620(&r0[7]);
    *(void **)s = data_ov002_021d49ec;
    *(void **)(s + 0x80) = data_ov002_021d4a08;
    *(uint32_t *)(s + 0xb8) = p2;
    b = self;
    if (self) {
        b = s + 0x80;
    }
    func_02055ae8(p1, b);
    return self;
}
