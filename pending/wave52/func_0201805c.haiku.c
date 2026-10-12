#include "ffc/types.h"

typedef struct {
    uint8_t init;
    uint8_t pad[3];
    uint32_t v4;
    uint32_t pad2[2];
    uint32_t idx;
} State;

typedef struct {
    void *p;
    uint8_t flag;
} Guard;

extern State data_020b9190;
extern uint32_t data_020b9198[];
extern uint32_t data_020b8f4c[];
extern uint8_t data_020b91a4[];

extern void func_0207e920(void *obj, uint32_t v);
extern void func_0208763c(void *p);
extern void func_0207e890(void *obj);
extern uint32_t func_0207e990(void *object, uint32_t second, uint32_t third, ...);
extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern void func_0207eab0(void *object, void *p, uint32_t n);
extern void func_0207ea0c(void *object);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_02087678(void *p);

void func_0201805c(uint8_t *a, uint32_t b, uint32_t c) {
    Guard *gp;
    uint8_t tmp[0x48];
    Guard g;
    uint32_t x;
    uint32_t idx;
    State *s = &data_020b9190;

    if (s->init == 0) {
        func_0207e920(data_020b9198, s->v4);
        s->idx = 0xFFFFFFFF;
        s->init = 1;
    }

    gp = &g;
    gp->p = data_020b8f4c;
    gp->flag = 1;
    if (gp->flag) {
        func_0208763c(gp->p);
    }

    s = &data_020b9190;
    x = c << 3;
    idx = x >> 8;
    if (idx != s->idx) {
        s->idx = idx;
        func_0207e890(tmp);
        func_0207e990(tmp, data_020b9198[0], data_020b9198[1]);
        func_0207ea98(tmp, s->idx << 8, 0);
        func_0207eab0(tmp, data_020b91a4, 1 << 8);
        func_0207ea0c(tmp);
    }

    func_02084ca4(data_020b91a4 + (uint8_t)x, a, 8);

    if (gp->flag) {
        func_02087678(gp->p);
    }
}
