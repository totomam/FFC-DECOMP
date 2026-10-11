#include "ffc/types.h"

typedef struct {
    uint32_t buf[64];
    uint32_t d;
} S;

extern void func_02092878(S *p, uint32_t x);
extern void func_ov001_02186b54(uint8_t *p, void *q, S s);

void func_ov001_02186848(uint8_t *a, void *b, uint32_t c, uint32_t d)
{
    S s;
    s.d = d;
    func_02092878(&s, c);
    func_ov001_02186b54(a + 0x60, b, s);
}
