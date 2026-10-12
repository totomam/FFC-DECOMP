#include "ffc/types.h"

extern int func_ov005_02196144(void *obj, uint8_t v);
extern void func_0200a630(void *out, void *p);
extern void func_02068e18(void *obj, void *arg);
extern void *func_0200a678(void *obj);
extern uint32_t func_02091b10(void *object, void *first, ...);
extern void func_02005988(void *out, void *in);
extern void func_02068ddc(void *obj, void *arg);
extern void func_020059cc(void *obj);
extern void func_02069288(void *obj);
extern void func_020692a4(void *obj);
extern uint8_t data_ov007_021c77fc[];
extern uint8_t data_ov007_021c7800[];

#define PTR(off) (*(void **)((uint8_t *)self + (off)))
#define U8(off) (*(uint8_t *)((uint8_t *)self + (off)))
#define U32(off) (*(uint32_t *)((uint8_t *)self + (off)))
#define VCALL(obj, slot) (((void (*)(void *))((*(void ***)(obj))[slot]))(obj))

void func_ov007_021ba704(void *self)
{
    int i;
    uint32_t k;
    uint8_t a40[12];
    uint8_t a4c[12];
    uint8_t a34[12];
    uint8_t a28[12];
    uint32_t o128 = 0x128;
    uint32_t o134a = o128 + 0xc, o134b = o128 + 0xc, o134c = o128 + 0xc;
    uint32_t o144a = 0x23c - 0xf8, o144b = 0x23c - 0xf8, o144c = 0x23c - 0xf8;
    uint32_t o110a = o128 - 0x18, o110b = o128 - 0x18, o110c = o128 - 0x18;
    uint32_t o140 = 0x23c - 0xfc;
    func_ov005_02196144(PTR(o128), (uint8_t)(U8(o128 + 0x1c) + 1));
    for (i = 0; i < 6; i++) {
        k = i + 6 * U8(o144c);
        if (k < U32(o140)) {
            uint8_t *e = (uint8_t *)PTR(o134a) + 0x23c * k;
            func_0200a630(a40, e + 0x10);
            func_02068e18(PTR(0xe0 + 4 * i), a40);
            func_0200a678(a40);
            VCALL(PTR(0xe0 + 4 * i), 10);
            func_02091b10(a4c, data_ov007_021c77fc, *(uint32_t *)((uint8_t *)PTR(o134b) + 0x23c * (i + 6 * U8(o144a)) + 0x28));
            func_02005988(a34, a4c);
            func_02068ddc(PTR(0xf8 + 4 * i), a34);
            func_020059cc(a34);
            VCALL(PTR(0xf8 + 4 * i), 10);
            func_02091b10(a4c, data_ov007_021c7800, *(uint32_t *)((uint8_t *)PTR(o134c) + 0x23c * (i + 6 * U8(o144b)) + 0x8c));
            func_02005988(a28, a4c);
            func_02068ddc(*(void **)((uint8_t *)self + 4 * i + o110a), a28);
            func_020059cc(a28);
            VCALL(*(void **)((uint8_t *)self + 4 * i + o110b), 10);
            func_02069288(PTR(0xc0 + 4 * i));
            VCALL(*(void **)((uint8_t *)PTR(0xc0 + 4 * i) + 0x94), 10);
        } else {
            VCALL(PTR(0xe0 + 4 * i), 11);
            VCALL(PTR(0xf8 + 4 * i), 11);
            VCALL(*(void **)((uint8_t *)self + 4 * i + o110c), 11);
            func_020692a4(PTR(0xc0 + 4 * i));
            VCALL(*(void **)((uint8_t *)PTR(0xc0 + 4 * i) + 0x94), 11);
        }
    }
}
