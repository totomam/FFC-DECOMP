#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x16];
    uint16_t val;
} Sub;

typedef struct {
    uint32_t a;
    Sub *p;
} Outer;

extern int32_t func_0208cbfc(int32_t a, int32_t b, int32_t c);
extern Outer data_02143580;

int32_t func_0208cbe0(int32_t a, int32_t b)
{
    int32_t r = func_0208cbfc(a, b, 0xf00);
    if (r == 0) {
        data_02143580.p->val = 0;
    }
    return r;
}
