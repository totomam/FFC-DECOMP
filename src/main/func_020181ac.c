#include "ffc/types.h"

typedef struct {
    uint8_t init;
    uint8_t pad[3];
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t cur;
} G1;

typedef struct {
    uint16_t buf;
    uint32_t *p;
    uint8_t f;
} L1;

extern G1 data_020b92a4;
extern uint32_t data_020b92ac[];
extern uint32_t data_020b8f4c[];
extern uint8_t data_020b92b8[];

extern void func_0207e920(void *a, uint32_t b);
extern void func_0208763c(void *a);
extern void func_0207e890(void *object);
typedef struct { uint32_t a, b; } S8;
extern uint32_t func_0207e990(void *object, S8 s);
extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern uint32_t func_0207eab0(void *object, void *p, uint32_t n);
extern uint32_t func_0207ea0c(void *object);
extern void func_02087678(void *a);
extern uint32_t func_02084ca4(void *a, void *b, uint32_t n);

uint16_t func_020181ac(uint32_t a0, uint32_t id) {
    L1 L;
    uint32_t obj[0x12];
    uint32_t r5;

    if (data_020b92a4.init == 0) {
        func_0207e920(data_020b92ac, data_020b92a4.w4);
        data_020b92a4.cur = 0xFFFFFFFF;
        data_020b92a4.init = 1;
    }

    L.p = data_020b8f4c;
    L.f = 1;
    if (L.f != 0) {
        func_0208763c(L.p);
    }

    r5 = id << 1;
    if ((r5 >> 8) != data_020b92a4.cur) {
        data_020b92a4.cur = r5 >> 8;
        func_0207e890(obj);
        func_0207e990(obj, *(S8*)data_020b92ac);
        func_0207ea98(obj, data_020b92a4.cur << 8, 0);
        func_0207eab0(obj, data_020b92b8, 0x100);
        func_0207ea0c(obj);
    }

    func_02084ca4(data_020b92b8 + (uint8_t)r5, &L, 2);

    if (L.f != 0) {
        func_02087678(L.p);
    }
    return L.buf;
}
