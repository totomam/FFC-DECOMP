#include "ffc/types.h"

extern uint32_t func_0203c23c(void);
extern void func_02060e80(void *object);
extern uint32_t func_0203c250(void);
extern void func_02035f58(void *o);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern void func_0201f600(const void *object, uint32_t index, uint32_t x, void *output);
extern void func_02035be0(void *object);
extern void func_02035c18(void *object);
extern uint32_t func_02036360(const void *object);
extern void func_020363ac(void *a, void *b);
extern void func_02039de0(void *a, void *b);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_02039e54(uint32_t a, void *b, uint32_t c);
extern void func_020397e4(void *a, uint32_t b);
extern void *func_02035fd0(void *object);
extern void *data_020b93b8;
extern uint8_t data_021395dc[];

uint32_t func_02039ca0(uint8_t *a) {
    uint8_t g[0x60];
    uint8_t f[0x44];
    uint8_t *p;
    uint8_t *r4;
    uint8_t *r6;
    uint8_t *q;
    uint8_t **pp;
    uint32_t st;
    uint32_t res;
    uint32_t r1;
    uint32_t z;
    int flag;

    st = *(uint32_t *)(*(uint8_t **)(a + 0x88) + 0x18);
    if (st == 0) {
        func_02060e80((void *)func_0203c23c());
        func_02060e80((void *)func_0203c250());
        return 1;
    }
    if (st == 1) {
        func_02035f58(g);

        p = *(uint8_t **)(a + 0x88);
        switch (p[0xc]) {
        case 0:
            func_0201f36c(data_020b93b8, *(uint32_t *)(p + 0x1c), g);
            break;
        case 1:
            func_0201f460(data_020b93b8, *(uint32_t *)(p + 0x1c), g);
            break;
        case 2:
            func_0201f600(data_020b93b8, *(uint32_t *)(p + 0x1c), *(uint32_t *)(p + 0x14), g);
            break;
        default:
            break;
        }

        z = 0;

        r6 = f + 0x28;
        *(uint32_t *)(f + 0x28) = z;
        *(uint32_t *)(f + 0x2c) = z;
        *(uint16_t *)(f + 0x30) = z;
        *(uint32_t *)(f + 0x34) = z;
        *(uint32_t *)(f + 0x38) = z;
        *(uint16_t *)(f + 0x3c) = z;
        *(uint16_t *)(f + 0x3e) = z;

        func_02035be0(f);
        *(uint32_t *)(r6 + 0x18) = *(uint32_t *)f;
        func_02035c18(f);

        *(uint32_t *)(f + 0x28) = func_02036360(g);
        pp = (uint8_t **)(a + 0x88);
        *(uint32_t *)(f + 0x2c) = *(uint32_t *)(*pp + 0x20) + 1;
        *(uint16_t *)(f + 0x3e) = 0x7fff;

        func_02035be0(f + 8);
        q = f + 4;
        func_020363ac(q, g);
        func_02039de0(r6, q);
        func_02035c18(q);

        flag = 0;
        res = func_0205681c(0xc0);
        r1 = res;
        if (res != 0) {
            *(uint32_t *)(f + 0xc) = *(uint32_t *)(f + 0x28);
            *(uint32_t *)(f + 0x10) = *(uint32_t *)(f + 0x2c);
            *(uint16_t *)(f + 0x14) = *(int16_t *)(f + 0x30);
            *(uint32_t *)(f + 0x18) = *(uint32_t *)(f + 0x34);
            *(uint32_t *)(f + 0x1c) = *(uint32_t *)(f + 0x38);
            *(uint16_t *)(f + 0x20) = *(uint16_t *)(f + 0x3c);
            *(uint16_t *)(f + 0x22) = *(uint16_t *)(f + 0x3e);
            *(uint32_t *)(f + 0x24) = *(uint32_t *)(f + 0x40);
            flag = 1;
            r1 = func_02039e54(res, f + 0xc, z);
        }
        func_020397e4(data_021395dc, r1);
        if (flag) {
            func_02035c18(f + 0x24);
        }
        func_02035c18(f + 8);
        func_02035c18(f + 0x40);
        func_02035fd0(g);
        return 0;
    }
    return 1;
}
