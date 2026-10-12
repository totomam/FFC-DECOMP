#include "ffc/types.h"

extern int func_02073898(uint32_t v);
extern int func_02075190(void *p);
extern void func_0208763c(void *lock);
extern uint32_t func_02073878(uint32_t v);
extern int func_020737ac(uint32_t v, uint32_t a, void *data, uint32_t cnt, uint32_t flag);
extern void func_02087678(void *lock);
extern int func_020751bc(void *p);
extern int func_02073764(uint32_t v, uint32_t k, void *data, uint32_t cnt, uint32_t flag);

typedef struct Slot {
    uint16_t cnt;
    uint16_t idx;
    uint8_t data[0x2000];
} Slot;

typedef struct Lk1 {
    uint32_t a;
    uint32_t b;
    uint8_t *lock;
    volatile uint8_t f;
} Lk1;

typedef struct Lk2 {
    uint8_t *lock;
    volatile uint8_t f;
} Lk2;

void func_0207503c(uint8_t *p)
{
    uint32_t i;
    uint32_t n;
    uint32_t k;
    Slot *s;
    uint32_t v;

    if (func_02073898(*(uint32_t *)(p + 0x2c))) {
        if (func_02075190(p)) {
            Lk1 g;
            for (i = 0; i < 2; i++) {
                s = &((Slot *)(p + 0x130))[i];
                if (s->cnt != 0) {
                    g.lock = p + 0x4238;
                    g.f = 1;
                    if (g.f) func_0208763c(g.lock);
                    v = *(uint32_t *)(p + 0x2c);
                    if (func_020737ac(v, func_02073878(v), s->data + ((uint32_t)s->idx << 12), s->cnt, i == 1)) {
                        s->cnt = 0;
                        s->idx = (s->idx + 1) & 1;
                    }
                    if (g.f) func_02087678(g.lock);
                }
            }
        }

        if (func_020751bc(p)) {
            Lk2 g;
            for (n = 0; n < 2; n++) {
                for (k = 0; k < 0x20; k++) {
                    s = *(Slot **)(p + (n << 7) + 0x30 + k * 4);
                    if (s != 0 && s->cnt != 0) {
                        g.lock = p + 0x4238;
                        g.f = 1;
                        if (g.f) func_0208763c(g.lock);
                        v = *(uint32_t *)(p + 0x2c);
                        if (func_02073764(v, k, s->data + ((uint32_t)s->idx << 12), s->cnt, n == 1)) {
                            s->cnt = 0;
                            s->idx = (s->idx + 1) & 1;
                        }
                        if (g.f) func_02087678(g.lock);
                    }
                }
            }
        }
        *(uint32_t *)(p + 0x4250) += 1;
    }
}
