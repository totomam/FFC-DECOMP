#include "ffc/types.h"

extern void *func_0203b6f0(void);
extern void *func_0203b81c(uint32_t n);
extern void func_0205f818(void *p, int v);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02151334(void *p, int v, void *q);
extern void *func_0203b67c(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_02151658(void *p);

void func_ov003_021515b8(uint8_t *a)
{
    uint8_t *p;
    void *q;
    void *v;
    void *c8c;
    void *c90;
    void *c98;
    uint8_t *b;

    p = func_0203b6f0();
    *(void **)(a + 0x8c) = p;
    p[0x12] = (p[0x12] & 0xffffff00) | 1;

    q = func_0203b81c(4);
    *(void **)(a + 0x98) = q;
    func_0205f818(q, 1);

    v = func_0205681c(0x88);
    if (v != 0) {
        v = func_ov003_02151334(v, 2, *(void **)(a + 0x98));
    }
    *(void **)(a + 0x88) = v;
    func_02056bc0(*(void **)(a + 0x8c), v);

    p = func_0203b67c();
    *(void **)(a + 0x90) = p;
    p[0x12] = (p[0x12] & 0xffffff00) | 1;

    b = a + 0x48;
    c98 = *(void **)(a + 0x98);
    c90 = *(void **)(a + 0x90);
    c8c = *(void **)(a + 0x8c);
    func_02056bc0(b, c8c);
    func_02056bc0(b, c90);
    func_02056bc0(b, c98);

    func_ov003_02151658(a);
}
