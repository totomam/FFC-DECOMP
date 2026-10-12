#include "ffc/types.h"

extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_02036de4(void *buf, uint32_t v);
extern void *func_020197b4(uint32_t a, uint32_t b);
extern void func_02036df8(void *buf, uint8_t v);
extern void func_02036e40(void *buf, uint32_t v);
extern void func_02036e0c(void *buf, uint32_t v);
extern void func_0201f9a8(uint32_t a, void *buf, int b, int c);
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint8_t pad[0x84 - 0x10];
    uint32_t f84;
    uint32_t f88;
    uint32_t f8c;
    uint32_t f90;
} S;

void func_ov003_02167c4c(S *s)
{
    uint32_t prev = s->f90;
    uint8_t buf[0x18];
    uint32_t r4;
    uint8_t *p;

    s->f90 = s->f90 + 1;
    if (prev == 0) {
        r4 = 0;
        func_02084b2c(buf, 0, 0x18);
        func_02036de4(buf, s->f84);
        p = func_020197b4(data_020b8e44, s->f84);
        func_02036df8(buf, p[9]);
        func_02036e40(buf, s->f88);
        if (s->f8c != 0) {
            r4 = 1;
        }
        func_02036e0c(buf, r4);
        func_0201f9a8(data_020b93b8, buf, 0, 0);
        s->fc = (s->fc & ~0xff) | 2;
    }
}
