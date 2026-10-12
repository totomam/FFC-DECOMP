#include "ffc/types.h"

struct Obj { uint32_t a, b, c; };

extern void func_02005988(void *obj, uint32_t v);
extern uint32_t func_020159c8(void *obj, uint32_t idx);
extern void *func_020059cc(void *object);
extern void func_020700a4(void *p, void *o1, void *o2, void *o3, void *o4, void *o5, uint32_t x, uint32_t y);
extern void func_0207051c(void *p, uint16_t v);
extern void func_02070534(void *p, uint16_t v);
extern void func_0207054c(void *p, uint16_t v);
extern void func_ov013_021bcad4(void *a);
extern void func_ov013_021bcb64(void *a);
extern uint32_t data_ov013_021c3ce0[];
extern void *data_020b8e44;

void func_ov013_021bcd04(void *a, void *b)
{
    struct Obj o1, o2, o3, o4, o5;
    uint32_t sel = *(uint32_t *)((uint8_t *)b + 0xc) - 0xd;

    switch (sel) {
    case 0:
        func_02005988(&o1, data_ov013_021c3ce0[3]);
        func_02005988(&o2, data_ov013_021c3ce0[4]);
        func_02005988(&o3, data_ov013_021c3ce0[2]);
        func_02005988(&o4, func_020159c8(data_020b8e44, 0x1c1));
        func_02005988(&o5, func_020159c8(data_020b8e44, 0x1c2));
        func_020700a4(*(void **)((uint8_t *)a + 0xf0), &o1, &o2, &o3, &o4, &o5, 0, 0);
        func_020059cc(&o5);
        func_020059cc(&o4);
        func_020059cc(&o3);
        func_020059cc(&o2);
        func_020059cc(&o1);
        break;
    case 4:
        func_0207051c(*(void **)((uint8_t *)a + 0xf0), *(uint16_t *)((uint8_t *)b + 0x10));
        func_ov013_021bcad4(a);
        break;
    case 7:
        func_02070534(*(void **)((uint8_t *)a + 0xf0), *(uint16_t *)((uint8_t *)b + 0x10));
        break;
    case 9:
        func_0207054c(*(void **)((uint8_t *)a + 0xf0), *(uint16_t *)((uint8_t *)b + 0x10));
        break;
    case 3:
        func_ov013_021bcb64(a);
        break;
    case 1: case 2: case 5: case 6: case 8: case 10: case 11:
        break;
    }
}
