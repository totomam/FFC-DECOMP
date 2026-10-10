#include "ffc/types.h"

typedef struct {
    uint8_t pad[8];
    uint16_t f8;
    uint16_t fa;
    uint8_t fc;
    uint8_t fd;
    uint16_t fe;
    uint8_t f10;
    uint8_t f11;
    uint8_t f12;
    uint8_t f13;
} S;

void func_02007048(S *p)
{
    p->fc = 0x7f;
    p->f8 = 0x100;
    p->fa = 0;
    p->fe = 0x40;
    p->f10 = 0;
    p->f11 = 0;
    p->f12 = 0;
    p->f13 = 0;
}
