#include "ffc/types.h"

extern uint8_t data_ov003_0217b0dc[];

typedef struct {
    void *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t flags;
    uint32_t w10;
    uint32_t w14;
    uint32_t w18;
    uint8_t b1c;
    uint8_t p1d[3];
    uint32_t w20;
    uint8_t b24;
    uint8_t p25[3];
    uint32_t w28;
    uint32_t w2c;
    uint32_t w30;
} S;

void func_ov003_0216724c(S *this, uint32_t a1, uint32_t a2, uint8_t a3, uint32_t a4, uint8_t a5, uint32_t a6, uint32_t a7, uint32_t a8)
{
    uint32_t f = this->flags & ~0xffu;
    this->w14 = a1;
    this->flags = f;
    this->w20 = a4;
    this->vt = (void *)data_ov003_0217b0dc;
    this->b1c = a3;
    this->w18 = a2;
    this->b24 = a5;
    this->w28 = a6;
    this->w2c = a7;
    this->w30 = a8;
}
