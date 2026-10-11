#include "ffc/types.h"

extern int func_ov000_02167c24(void *obj, void *a, void *b, uint32_t c);
extern void func_ov007_021c0cf8(void *ctx, uint32_t a, uint32_t b);
extern void func_ov007_021c0cb4(void *ctx, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c95a4[];
extern uint8_t data_ov007_021c96a8[];

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
} Sub;

typedef struct {
    uint8_t pad0[8];
    Sub *sub;
    uint8_t pad1[0xc];
    void *obj;
} Ctx;

uint32_t func_ov007_021c139c(Ctx *p)
{
    Sub *s = p->sub;
    func_ov000_02167c24(p->obj, data_ov007_021c95a4, data_ov007_021c96a8, s->w0);
    func_ov007_021c0cf8(p, s->w4, s->w8);
    func_ov007_021c0cb4(p, s->wc, s->w10);
    return 0;
}
