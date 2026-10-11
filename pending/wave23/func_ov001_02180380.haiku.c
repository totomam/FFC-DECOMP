#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0xc];
    int32_t f0c;
    uint8_t pad1[4];
    int32_t f14;
} FuncObj;

extern void func_ov001_021822f8(uint32_t *a, uint32_t *b);
extern void func_ov001_021818a4(FuncObj *p, uint32_t a, uint32_t b);

void func_ov001_02180380(FuncObj *p, uint32_t a, uint32_t b)
{
    p->f14 = 0;
    if (p->f0c == 4) {
        func_ov001_021822f8(&a, &b);
        func_ov001_021818a4(p, a, b);
        p->f0c = 6;
    }
}
