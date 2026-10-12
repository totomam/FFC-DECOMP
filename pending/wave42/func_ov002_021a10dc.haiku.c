#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern void func_02087620(void *object);
extern void func_ov002_021c8530(void *p);
extern void func_ov002_021c8644(void *p, void *q);
extern void func_ov002_021c8630(void *p, void *q);
extern void *func_0205681c(uint32_t n);
extern void *func_ov002_021c86b0(void *p);
extern char data_020ae6d4[];
extern char data_ov002_021d51f4[];
extern char data_ov002_021d5210[];
extern char data_020b0688[];

void *func_ov002_021a10dc(void *p, void *a1, void *a2)
{
    uint8_t *b = (uint8_t *)p;
    uint32_t *q;
    void *t;

    func_02056c9c(p, 0);
    *(void **)(b + 0x80) = data_020ae6d4;
    q = (uint32_t *)(b + 0x80);
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
    q[4] = 0;
    func_02087620(b + 0x9c);
    q[7] = 0;
    q[8] = 0;
    *(void **)b = data_ov002_021d51f4;
    *(void **)(b + 0x80) = data_ov002_021d5210;
    *(uint32_t *)(b + 0xb8) = 0;
    *(uint32_t *)(b + 0xbc) = 0;
    *(uint32_t *)(b + 0xc0) = 0;
    *(uint32_t *)(b + 0xc8) = 0;
    *(uint32_t *)(b + 0xcc) = 0;
    *(uint32_t *)(b + 0xd0) = 0;
    *(void **)(b + 0xc4) = data_020b0688;
    func_02087620(b + 0xd4);
    *(uint32_t *)(b + 0x100) = 0;
    *(uint32_t *)(b + 0x11c) = 0;
    q = (uint32_t *)(b + 0x11c);
    q[1] = 0;
    q[2] = 0;
    b[0x140] = 0;
    func_ov002_021c8530(b + 0x144);
    q = (uint32_t *)(b + 0x180);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    func_ov002_021c8644(b + 0x144, a1);
    func_ov002_021c8630(b + 0x144, a2);
    t = func_0205681c(12);
    if (t != 0) {
        t = func_ov002_021c86b0(t);
    }
    *(void **)(b + 0x180) = t;
    return p;
}
