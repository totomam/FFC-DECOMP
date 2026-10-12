#include "ffc/types.h"

extern int32_t func_0200710c(int16_t a, int16_t b);
extern int32_t func_02079a0c(int16_t a);
extern int32_t func_02079a40(int16_t a, int16_t b);

typedef struct {
    int32_t pad0;
    int16_t x;
    int16_t y;
} S;

void func_020070b4(S *p, int16_t *o1, int16_t *o2) {
    int32_t r;
    *o1 = -1;
    *o2 = -1;
    r = func_0200710c(p->x, p->y);
    switch (r) {
    case 0:
        if (func_02079a0c(p->x) != 0) {
            *o1 = p->x;
            *o2 = -1;
            break;
        }
        /* fall through */
    case 1:
        if (func_02079a40(p->x, p->y) != 0) {
            *o1 = p->x;
            *o2 = p->y;
        }
        break;
    default:
        break;
    }
}
