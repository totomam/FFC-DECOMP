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
    int i;
    int n;
    uint8_t k;
    Slot *s;
    union { Lk1 a; Lk2 b; } u;

    if (func_02073898(*(uint32_t *)(p + 0x2c))) {
        if (func_02075190(p)) {
            for (i = 0; i < 2; i++) {
                s = &((Slot *)(p + 0x130))[i];
                if (s->cnt != 0) {
                    u.a.lock = p + 0x4238;
                    u.a.f = 1;
                    if (u.a.f) func_0208763c(u.a.lock);
                                        if (func_020737ac(*(uint32_t *)(p + 0x2c), func_02073878(*(uint32_t *)(p + 0x2c)), s->data + ((uint32_t)s->idx << 12), s->cnt, i == 1)) {
                        s->cnt = 0;
                        s->idx = (s->idx + 1) % 2;
                    }
                    if (u.a.f) func_02087678(u.a.lock);
                }
            }
        }

        if (func_020751bc(p)) {
            for (n = 0; n < 2; n++) {
                for (k = 0; k < 0x20; k++) {
                    s = *(Slot **)(p + (n << 7) + 0x30 + k * 4);
                    if (s != 0 && s->cnt != 0) {
                        u.b.lock = p + 0x4238;
                        u.b.f = 1;
                        if (u.b.f) func_0208763c(u.b.lock);
                                                if (func_02073764(*(uint32_t *)(p + 0x2c), k, s->data + ((uint32_t)s->idx << 12), s->cnt, (n == 1) ? 1 : 0)) {
                            s->cnt = 0;
                            s->idx = (s->idx + 1) % 2;
                        }
                        if (u.b.f) func_02087678(u.b.lock);
                    }
                }
            }
        }
        *(uint32_t *)(p + 0x4250) += 1;
    }
}
