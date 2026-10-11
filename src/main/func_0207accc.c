#include "ffc/types.h"

extern int32_t func_02078168(uint32_t a, uint32_t b);
extern int32_t func_0207ade0(void *p);
extern int32_t func_02078198(uint32_t a, uint32_t b);

typedef struct {
    uint32_t x;
    uint8_t pad[8];
    uint16_t h;
} S;

int32_t func_0207accc(S *p) {
    int32_t r;
    if (func_02078168(p->x, p->h) == 0) {
        return -1;
    }
    if (func_0207ade0(p) == 0) {
        r = 0;
        func_02078198(p->x, 0);
        return r - 1;
    }
    return p->h - 1;
}
