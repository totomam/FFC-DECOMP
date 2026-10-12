#include "ffc/types.h"

typedef struct {
    uint8_t init;
    uint8_t pad[3];
    uint32_t v4;
    uint32_t pad2[2];
    uint32_t idx;
} State;

typedef struct { uint32_t a, b; } Pair;

typedef struct {
    void *p;
    volatile uint8_t flag;
} Guard;

extern State data_020b9190;
extern uint32_t data_020b9198[];
extern uint32_t data_020b8f4c[];
extern uint8_t data_020b91a4[];

extern void func_0207e920(void *obj, uint32_t v);
extern void func_0208763c(void *p);
extern void func_0207e890(void *obj);
extern uint32_t func_0207e990(void *object, Pair pr);
extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern void func_0207eab0(void *object, void *p, uint32_t n);
extern void func_0207ea0c(void *object);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_02087678(void *p);

void func_0201805c(uint8_t *a, uint32_t b, uint32_t c) {
    uint8_t tmp[0x48];
    Guard g;
    uint32_t x;
    uint32_t idx;

    if (data_020b9190.init == 0) {
        func_0207e920(data_020b9198, data_020b9190.v4);
        data_020b9190.idx = 0xFFFFFFFF;
        data_020b9190.init = 1;
    }

    g.p = data_020b8f4c;
    g.flag = 1;
    if (g.flag) {
        func_0208763c(g.p);
    }

    x = c << 3;
    idx = x >> 8;
    if (idx != data_020b9190.idx) {
        data_020b9190.idx = idx;
        func_0207e890(tmp);
        func_0207e990(tmp, *(Pair *)data_020b9198);
        func_0207ea98(tmp, data_020b9190.idx << 8, 0);
        func_0207eab0(tmp, data_020b91a4, 1 << 8);
        func_0207ea0c(tmp);
    }

    func_02084ca4(data_020b91a4 + (uint8_t)x, a, 8);

    if (g.flag) {
        func_02087678(g.p);
    }
}
