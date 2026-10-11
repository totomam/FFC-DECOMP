#include "ffc/types.h"

extern void *func_ov007_021bfce0(void *ctx, uint32_t *out);
extern void func_ov007_021bf91c(uint32_t a, void *b, void *c);
extern void *func_ov007_021bfd94(uint32_t a, void *b);
extern void func_ov000_02159014(uint32_t a, void *b);
extern uint8_t data_ov007_021c89a4[];

void *func_ov007_021bfda4(void *ctx)
{
    uint32_t v;
    void *p;

    p = func_ov007_021bfce0(ctx, &v);
    if (p != 0) {
        func_ov007_021bf91c(0x6db, data_ov007_021c89a4, p);
        func_ov000_02159014(v, func_ov007_021bfd94(1, p));
    }
    return p;
}
