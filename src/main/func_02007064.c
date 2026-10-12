#include "ffc/types.h"

extern int32_t func_0200710c(void *p, int16_t a, int16_t b);
extern int32_t func_02079a0c(int16_t a);
extern int32_t func_02079a40(int16_t a, int16_t b);

typedef struct {
    uint8_t pad[4];
    int16_t a;
    int16_t b;
} S;

int32_t func_02007064(S *p)
{
    int32_t r = func_0200710c(p, p->a, p->b);
    switch (r) {
    case -1:
        return 0;
    case 0:
        if (func_02079a0c(p->a)) {
            return 1;
        }
        return 0;
    case 1:
        if (func_02079a40(p->a, p->b)) {
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}
