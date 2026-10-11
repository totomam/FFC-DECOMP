#include "ffc/types.h"
extern void func_ov007_021bc074();
extern void func_ov007_021bc098(void *p);
typedef struct { uint8_t pad[0xbc]; uint32_t a; uint8_t pad2[0x10]; uint32_t b; uint8_t pad3[4]; uint32_t c; } S;
void func_ov007_021bb6e8(S *s, uint32_t x)
{
    uint32_t b = s->b;
    if (x == b) func_ov007_021bc074(s);
    if (s->a != 2) { if (x == s->c) func_ov007_021bc098(s); }
}
