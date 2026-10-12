#include "ffc/types.h"

extern void func_020211d4(uint32_t a, uint32_t b);
extern uint32_t func_0203c318(void);
extern void func_020591f4(uint32_t a, uint32_t b);
extern uint32_t func_0204f7ec(const void *object);
extern void func_02060bf4(uint32_t a);
extern void func_0203c2d0(void);
extern void func_0206047c(void);
extern uint32_t func_ov004_02153544(uint32_t a);
extern void func_02055050(uint32_t a, uint32_t b);
extern uint32_t func_ov004_02153558(uint32_t a);
typedef struct { uint32_t x, y; } S2;
extern uint32_t func_ov004_021460f8(uint32_t a, S2 b);
extern uint32_t func_0206cbf4(uint32_t a);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *dst, uint32_t src);
extern uint32_t func_02033094(uint32_t a, void *b, uint32_t c, S2 d, uint32_t f, uint32_t g);
extern void func_020059cc(void *object);
extern uint32_t func_02056aec(uint32_t a);
extern uint32_t func_0206c270(uint32_t a);
extern void func_ov004_02146138(uint32_t a);
extern uint32_t data_0213df18;
extern uint32_t data_0213e098;
extern S2 data_ov004_02157b4c;
extern uint32_t data_020b8e44;
extern S2 data_ov004_02157b54;

void func_ov004_02145f68(uint32_t a)
{
    uint32_t r6;
    uint32_t r4;
    uint32_t r7;
    uint32_t buf[3];
    uint32_t obj;
    S2 sz;
    uint32_t v;

    func_020211d4(0x27, 0);
    func_020591f4(func_0203c318(), 3);
    func_02060bf4(*(uint32_t *)((uint8_t *)func_0204f7ec((const void *)data_0213df18) + 0x1c));
    func_0203c2d0();
    func_0206047c();

    if (func_ov004_02153544(*(uint32_t *)(a + 0x88)) == 0) {
        goto ret_fail;
    }

    func_02055050(data_0213e098, 2);
    r6 = 2;
    obj = *(uint32_t *)(a + 0x88);
    *(uint32_t *)(obj + 0x2a4) = r6;

    obj = *(uint32_t *)(a + 0x88);
    if (*(uint32_t *)(*(uint32_t *)(obj + 0x28c) + 0x40) == 0x401328) {
        if (func_ov004_02153558(*(uint32_t *)(a + 0x88)) != 0) {
            r6 = func_ov004_021460f8(a, data_ov004_02157b4c);
            obj = *(uint32_t *)(a + 0x88);
            v = func_0206cbf4(*(uint32_t *)(obj + 0x28c));
            {
                uint32_t p4 = a + 0x14;
                func_02056bc0((void *)p4, v);
                func_02056bc0((void *)p4, r6);
            }
        } else {
            obj = *(uint32_t *)(a + 0x88);
            *(uint8_t *)(*(uint32_t *)(obj + 0xa0) + 0xe1) = 1;
            *(uint32_t *)(a + 0xc) = (*(uint32_t *)(a + 0xc) & ~0xffu) | r6;
        }
    }

    if (func_ov004_02153558(*(uint32_t *)(a + 0x88)) != 0) {
        goto ret_fail;
    }

    r7 = 0;
    r4 = 0;
    r6 = func_0205681c(0xa4);
    if (r6 != 0) {
        sz.x = 0x80;
        sz.y = 0x60;
        func_02005988(buf, func_020159c8(data_020b8e44, 0x1bc));
        r6 = func_02033094(r6, buf, 1, sz, 4, r7);
        r4 = 1;
    }
    if (r4 != 0) {
        func_020059cc(buf);
    }

    func_02056bc0((void *)(a + 0x48), r6);
    r6 = func_02056aec(r6);
    obj = *(uint32_t *)(a + 0x88);
    v = func_0206c270(*(uint32_t *)(obj + 0x28c));
    {
        uint32_t p4 = a + 0x14;
        func_02056bc0((void *)p4, v);
        func_02056bc0((void *)p4, r6);
    }
    *(S2 *)(a + 0x80) = data_ov004_02157b54;
    return;
ret_fail:
    func_ov004_02146138(a);
}
