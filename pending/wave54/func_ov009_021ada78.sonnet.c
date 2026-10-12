#include "ffc/types.h"

extern uint32_t func_ov009_021ad914(void *self);
typedef struct { uint8_t v; } B;
extern void func_ov009_0219a6d8(void *p, uint32_t a, B b);
extern void func_02035f58(void *obj);
extern void func_ov009_021ad6ac(void *self, uint32_t idx, void *obj);
extern uint32_t func_020363bc(const void *object);
extern uint32_t func_020363a4(const void *object);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_020634e0(void *dst, void *src, uint32_t n);
extern void func_02063520(void *a, void *b);
extern void func_ov009_0219a46c(void *p, void *b, B c);
extern void func_02063530(void *o);
extern void *func_020059cc(void *o);
extern void *func_02035fd0(void *o);
extern uint32_t data_ov009_021b0c48;

void func_ov009_021ada78(char *p) {
    uint8_t n;
    uint8_t i;
    B z;
    uint32_t hw;
    uint32_t obj_a[0x18];
    uint8_t obj_b[0x44];
    uint32_t l18;
    uint32_t l1c;
    uint32_t cnt;

    n = (uint8_t)func_ov009_021ad914(p);
    z.v = 0;
    func_ov009_0219a6d8(p + 0x214, *(uint32_t *)(p + 0x218), z);
    if (n == 0) {
        return;
    }
    i = 0;
    do {
        func_02035f58(obj_a);
        func_ov009_021ad6ac(p, i, obj_a);
        hw = *(uint16_t *)((char *)func_020363bc(obj_a) + 0x40);
        func_02086ad4(obj_b, (uint32_t)&data_ov009_021b0c48, hw, func_020363a4(obj_a));
        func_02005988(&l1c, obj_b);
        func_020634e0(&l18, &l1c, 7);
        cnt = *(uint32_t *)(p + 0x218);
        if (cnt < *(uint32_t *)(p + 0x21c)) {
            uint32_t d = *(uint32_t *)(p + 0x214) + cnt * 4;
            if (d != 0) {
                func_02063520((void *)d, &l18);
            }
            *(uint32_t *)(p + 0x218) = *(uint32_t *)(p + 0x218) + 1;
        } else {
            z.v = 0;
            func_ov009_0219a46c(p + 0x214, &l18, z);
        }
        func_02063530(&l18);
        func_020059cc(&l1c);
        func_02035fd0(obj_a);
        i++;
    } while (i < n);
}
