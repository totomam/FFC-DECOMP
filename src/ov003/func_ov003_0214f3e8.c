#include "ffc/types.h"

extern uint32_t func_ov003_0214dab0(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_0202d4cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_0202d85c(uint32_t obj, void *buf, uint32_t x);
extern void func_0202d75c(uint32_t obj);
extern void func_0202d794(uint32_t obj);
extern void func_0202d6bc(uint32_t obj, void *p);
extern void func_0202d65c(uint32_t obj, void *p);
extern uint32_t func_0202d71c(uint32_t obj);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_02056aec(void *object);
extern uint32_t func_0203b75c(uint32_t x);
extern uint8_t data_ov003_02179a88[];

void func_ov003_0214f3e8(void *p)
{
    uint8_t *a = (uint8_t *)p;
    uint8_t buf[0x44];
    uint32_t h;
    uint32_t r4;
    uint32_t r6;

    func_02086ad4(buf, (uint32_t)data_ov003_02179a88,
                  func_ov003_0214dab0(*(uint32_t *)(a + 0x88), *(uint32_t *)(a + 0xcc), 0));

    h = func_0205681c(0x210);
    if (h != 0) {
        h = func_0202d4cc(h, *(uint32_t *)(a + 0x8c), 0x7fff, 0, 0);
    }
    *(uint32_t *)(a + 0xc0) = h;

    func_0202d85c(*(uint32_t *)(a + 0xc0), buf, 0);
    func_0202d75c(*(uint32_t *)(a + 0xc0));
    func_0202d794(*(uint32_t *)(a + 0xc0));
    func_0202d6bc(*(uint32_t *)(a + 0xc0), a + 0x9c);
    func_0202d65c(*(uint32_t *)(a + 0xc0), a + 0xa8);
    *(uint32_t *)(a + 0xc8) = func_0202d71c(*(uint32_t *)(a + 0xc0));

    func_02056bc0(a + 0x48, *(uint32_t *)(a + 0xc0));
    r4 = func_02056aec(a);
    r6 = func_0203b75c(*(uint32_t *)(a + 0xc8));
    {
        uint8_t *b;
        uint32_t t = func_02056aec(*(void **)(a + 0xbc));
        b = a + 0x14;
        func_02056bc0(b, t);
        func_02056bc0(b, r6);
        func_02056bc0(b, r4);
    }
}
