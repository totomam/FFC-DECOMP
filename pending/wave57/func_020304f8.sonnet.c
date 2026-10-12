#include "ffc/types.h"

extern uint32_t func_0202b414(void *p);
extern uint32_t func_0202e10c(uint32_t r0, uint8_t *p);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_02024928(uint32_t v, uint8_t *p);
extern uint32_t *func_0205681c(uint32_t id);
extern uint32_t *func_0202cb4c(uint32_t *obj, uint32_t r1, uint32_t r2, int32_t r3, int32_t r4);
extern void func_02024db0(uint32_t obj, uint32_t v);
extern uint32_t func_02092924(uint8_t *dst, uint8_t *p);
extern void func_02056b88(uint8_t *p, uint32_t *q);
extern const uint8_t data_020add34[];

uint32_t func_020304f8(uint8_t *a, int32_t b, uint8_t *c)
{
    uint32_t *node;
    uint32_t found = 0;
    int32_t s0c = -1;
    int32_t s08 = -1;
    uint32_t *obj;
    int i;
    uint32_t off;

    node = *(uint32_t **)(a + 0x5c);
    if (node != 0) {
        do {
            uint32_t t = func_0202b414(node);
            if (func_0202e10c(t, a + 0x10a) == 0) {
                found = (uint32_t)node;
                if (func_02092864(a + 0x13c)) {
                    s0c = func_02024928(node[0xd], a + 0x13c);
                }
                if (func_02092864(a + 0x16e)) {
                    s08 = func_02024928(node[0xd], a + 0x16e);
                }
                break;
            }
            node = (uint32_t *)node[1];
        } while (node != 0);
    }

    obj = func_0205681c(0x69c);
    if (obj != 0) {
        obj = func_0202cb4c(obj, *(uint32_t *)(a + 0x98), found, s0c, s08);
    }
    *(uint32_t **)(a + 0x8c) = obj;
    obj[6] = 1;
    obj[7] = 0xffff;
    (*(uint32_t **)(a + 0x8c))[3] &= ~0xffu;
    {
        uint32_t v = (*(uint32_t **)(a + 0x8c))[13];
        if (v != 0) {
            func_02024db0(v, 0);
        }
    }

    {
        uint32_t n = 0xf;
        uint8_t *dst = c;
        const uint8_t *src = data_020add34;
        do {
            *dst = *src;
            dst++;
            src++;
            n--;
        } while (n != 0);
    }
    func_02092924(c, a + 0x10a);

    if (a[0x44c] == 1) {
        int32_t v = *(int32_t *)(a + 0x418) >> (b + 8);
        uint32_t *o = *(uint32_t **)(a + 0x8c);
        o[6] = v;
        o[7] = 1u << 30;
    } else {
        uint32_t *o = *(uint32_t **)(a + 0x8c);
        o[6] = b;
        o[7] = 1u << 30;
    }

    if (a[0x44d] == 1) {
        int32_t v = *(int32_t *)(a + 0x41c) >> (b + 8);
        (*(uint32_t **)(a + 0x8c))[7] = v;
    }

    {
        off = 0x480;
        int32_t x = *(int32_t *)(a + off);
        x = (x + (x >> 6)) & 0x3f;
        (*(uint32_t **)(a + 0x8c))[11] = x;
        *(int32_t *)(a + off) += 8;
    }

    func_02056b88(a + 0x48, *(uint32_t **)(a + 0x8c));
    return 3;
}
