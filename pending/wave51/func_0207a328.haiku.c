#include "ffc/types.h"

extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t data_0213eb74[];
extern uint32_t data_0213eb34[];

typedef struct {
    uint32_t _0[10];
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    int32_t f34;
    uint32_t f38;
    uint32_t f3c;
    int32_t f40;
    uint32_t f44[3];
    int32_t f50;
    uint8_t f54[];
} S;

void func_0207a328(void *p, uint32_t param) {
    S *s = (S *)p;
    uint32_t r7 = func_0209a978(s->f30, s->f34);
    uint32_t r5 = r7 * s->f40;
    int32_t i;

    for (i = 0; i < s->f50; i++) {
        uint32_t v = data_0213eb74[s->f54[i] * 2];
        data_0213eb34[i] = v + r5;
    }

    ((void (*)(uint32_t, uint32_t, uint32_t *, uint32_t, uint32_t, uint32_t))s->f38)(
        param, s->f50, data_0213eb34, r7, s->f28, s->f3c);

    s->f40 = s->f40 + 1;
    if (s->f40 >= s->f34) {
        s->f40 = 0;
    }
}
