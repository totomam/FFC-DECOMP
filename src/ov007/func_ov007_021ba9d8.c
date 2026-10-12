#include "ffc/types.h"

extern void *func_0203bfe0(int x);
extern void *func_0203bfcc(int x);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov001_0218dde0(void *obj, int v);
extern void *func_0205681c(uint32_t size);
extern void *func_ov012_021d274c(void *obj, void *node);
extern void *func_0203bfb8(int x);
extern void *func_0203bfa4(int x);
extern uint32_t data_ov007_021c7814[2];

void func_ov007_021ba9d8(uint8_t *a)
{
    void *p;
    void *q;
    void *s;
    void *t;
    uint32_t v0;
    uint32_t v1;

    *(uint32_t *)(a + 0x38b8) = 0;
    s = func_0203bfe0(0x1e);
    p = func_0203bfcc(0x1e);
    t = func_0203b6fc();
    func_02056bc0(t, p);
    func_02056bc0(t, s);
    func_02056bc0(func_ov001_0218dde0(a, 1), t);
    q = func_0205681c(0x84);
    if (q != 0) {
        q = func_ov012_021d274c(q, a + 0x38b8);
    }
    func_02056bc0(func_ov001_0218dde0(a, 1), q);
    s = func_0203bfb8(0x1e);
    p = func_0203bfa4(0x1e);
    t = func_0203b6fc();
    func_02056bc0(t, p);
    func_02056bc0(t, s);
    func_02056bc0(func_ov001_0218dde0(a, 1), t);
    typedef struct { uint32_t x, y; } S;
    *(S *)(a + 0xb0) = *(S *)data_ov007_021c7814;
}
