#include "ffc/types.h"

extern int32_t func_ov007_021bf48c(int32_t a, int32_t b, int32_t c, int32_t d);
extern int32_t func_ov007_021bf51c(int32_t a, int32_t b);
extern int32_t func_ov007_021bf598(int32_t a, int32_t b, int32_t c, int32_t d);

typedef struct {
    uint8_t pad[0x24];
    int32_t mode;
    int32_t f28;
    int32_t f2c;
    int32_t f30;
    int32_t f34;
    int32_t f38;
} S;

int32_t func_02073f60(S *p)
{
    int32_t r = 0;
    switch (p->mode) {
    case 0:
        r = func_ov007_021bf48c(p->f28, p->f30, p->f34, p->f38);
        break;
    case 1:
        r = func_ov007_021bf51c(p->f28, p->f2c);
        break;
    case 2:
        r = func_ov007_021bf598(p->f28, p->f2c, p->f30, p->f34);
        break;
    }
    return r;
}
