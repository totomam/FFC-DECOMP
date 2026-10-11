#include "ffc/types.h"

extern void func_ov004_02153124(uint32_t v);
extern int32_t func_ov004_0214cf90(void);
extern void func_02069300(void);
extern void func_020692f0(void);

typedef struct {
    uint8_t pad0[0x94];
    uint32_t f94;
    uint8_t pad1[0xa4 - 0x98];
    uint8_t fa4;
} S;

void func_ov004_0214d24c(S *p)
{
    if (p->fa4 != 0) {
        p->fa4 = 0;
        func_ov004_02153124(p->f94);
        if (func_ov004_0214cf90() != 0) {
            func_ov004_02153124(p->f94);
            func_ov004_0214cf90();
            func_02069300();
        }
    } else {
        p->fa4 = 1;
        func_020692f0();
    }
}
