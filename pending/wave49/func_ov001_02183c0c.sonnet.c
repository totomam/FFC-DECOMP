#include "ffc/types.h"

extern void func_ov000_021652a8();
extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov000_0216591c(void);
extern void func_02091c34(void);
extern void func_ov000_021663e8(void *dst, uint32_t src, uint32_t size);
extern uint32_t func_02091c0c(void);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void *func_020903cc();
extern void func_ov001_021841c8(void);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_ov001_02184208(void *p, uint32_t x, void *q, uint32_t z);
extern uint32_t func_ov000_0214f148(uint32_t x);
extern uint8_t data_ov001_0219347c[];
extern uint8_t data_ov001_021926e0[];
extern int8_t data_ov001_02195610[];
extern uint8_t data_ov001_02193490[];
extern uint8_t data_ov001_021934b0[];
extern uint8_t data_ov001_021934c4[];
extern uint8_t data_ov001_021934e4[];

int func_ov001_02183c0c(void **pp, uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                        uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i,
                        uint32_t j, uint32_t k, uint32_t l, uint32_t m)
{
    uint8_t buf[0x40];
    uint32_t r6;
    uint32_t val;
    int idx;
    int8_t sel;
    void *ptr;
    uint8_t *obj;

    func_ov000_021652a8(3, 4, 0x40, (void *)data_ov001_0219347c);

    if (pp == 0) {
        obj = (uint8_t *)data_ov001_021926e0;
    } else {
        *pp = func_ov000_021653d4(0xd9c);
        obj = *pp;
    }

    func_ov000_0216591c();
    func_02091c34();

    func_ov000_021663e8(obj + 4, c, 0x40);
    func_ov000_021663e8(obj + 0x44, d, 0x40);

    *(uint32_t *)(obj + 0xc8) = b;
    *(uint32_t *)(obj + 0xb4) = 0;
    *(uint32_t *)(obj + 0xb8) = 0;
    *(uint32_t *)obj = a;
    *(uint32_t *)(obj + 0xc0) = 1;
    *(uint32_t *)(obj + 0x114) = m;
    *(uint32_t *)(obj + 0x88) = g;
    *(uint32_t *)(obj + 0x8c) = h;
    *(uint32_t *)(obj + 0x90) = i;
    *(uint32_t *)(obj + 0x94) = j;
    *(uint32_t *)(obj + 0x98) = k;
    *(uint32_t *)(obj + 0x9c) = l;
    *(uint32_t *)(obj + 0xa0) = 0;
    *(uint32_t *)(obj + 0xa4) = 0;
    *(uint32_t *)(obj + 0xdc) = 0;
    *(uint32_t *)(obj + 0xc4) = e;
    *(uint32_t *)(obj + 0xcc) = 0;
    *(uint32_t *)(obj + 0xd0) = f;
    *(uint32_t *)(obj + 0x10c) = 0;
    *(uint16_t *)(obj + 0x110) = 0;
    *(uint32_t *)(obj + 0xa8) = 0;
    *(uint32_t *)(obj + 0xb0) = 0;
    *(uint32_t *)(obj + 0xac) = 0;
    *(uint32_t *)(obj + 0xbc) = 0;
    *(uint8_t *)(obj + 0x118) = 0;

    for (idx = 0; idx < 4; idx++) {
        uint32_t v = func_02091c0c();
        obj[0x84 + idx] = (uint8_t)(func_0209a76c(v, 0xff) >> 32);
    }

    for (idx = 0; idx < 10; idx++) {
        *(int32_t *)(obj + 0xe0 + idx * 4) = -1;
    }

    *(uint32_t *)(obj + 0x108) = 0;
    func_020903cc(obj + 0x11c, 0, 0xc80);

    func_ov001_021841c8();

    if (e != 0) {
        sel = data_ov001_02195610[0];
        if (sel == 0) {
            func_02086ad4(buf, (void *)data_ov001_02193490, c);
        }
        r6 = func_ov001_02184208((sel != 0) ? (void *)data_ov001_02195610 : (void *)buf, 0x6cfc, obj + 0xd4, 0);
        if (r6 == 1) {
            ptr = (sel != 0) ? (void *)data_ov001_02195610 : (void *)buf;
            val = func_ov000_0214f148(*(uint32_t *)(obj + 0xd8));
            func_ov000_021652a8(3, 0, 0x10, (void *)data_ov001_021934b0, ptr, val);
        } else {
            func_ov000_021652a8(3, 0, 1, (void *)data_ov001_021934c4, (sel != 0) ? (void *)data_ov001_02195610 : (void *)buf);
        }
    } else {
        r6 = 1;
    }

    if (r6 == 0) {
        func_ov000_021652a8(3, 4, 1, (void *)data_ov001_021934e4);
        return 3;
    }
    return 0;
}
