#include "ffc/types.h"

extern void func_ov001_02186e00(int a, uint32_t b);

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void func_ov001_0218632c(S *p)
{
    func_ov001_02186e00(0, p->a);
    func_ov001_02186e00(0, p->b);
}
