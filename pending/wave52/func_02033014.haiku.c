#include "ffc/types.h"

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t len;
    uint8_t *ptr;
} Str;

typedef struct {
    uint8_t v;
} Byte;

extern void func_020059e4(uint32_t *out, uint32_t len);
extern uint32_t *func_02005af4(uint32_t *out, uint32_t a, uint32_t b, uint8_t *p, uint8_t *end, Byte c);

void func_02033014(uint32_t *out, Str *a, Str *b) {
    uint32_t i;
    uint8_t *pa, *pb;
    uint32_t la, lb;
    uint32_t pad;

    for (i = 0; i < 3; i++) {
        out[i] = 0;
    }

    if (a->flag == 0) {
        pa = (uint8_t *)a + 1;
        la = (((uint32_t)((uint8_t *)a)[0] << 24) >> 25);
    } else {
        pa = a->ptr;
        la = a->len;
    }

    if (b->flag == 0) {
        pb = (uint8_t *)b + 1;
        lb = (((uint32_t)((uint8_t *)b)[0] << 24) >> 25);
    } else {
        pb = b->ptr;
        lb = b->len;
    }

    func_020059e4(out, la + lb);
    func_02005af4(func_02005af4(out, 0, 0, pa, pa + la, *(Byte *)((uint8_t *)&pad + 1)), la, 0, pb, pb + lb, *(Byte *)((uint8_t *)&pad));
}
