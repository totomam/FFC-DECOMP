#include "ffc/types.h"

typedef struct {
    uint8_t pad[8];
    int16_t f8;
    int16_t fa;
    uint32_t fc;
    uint8_t f10;
    uint8_t f11;
    uint8_t f12;
} FuncStruct;

extern void func_0200795c(FuncStruct *p);

void func_0200796c(FuncStruct *p) {
    func_0200795c(p);
    p->f8 = -1;
    p->fc = 0;
    p->f10 = 0;
    p->f11 = 0;
    p->f12 = 0;
    p->fa = 0x7f;
}
