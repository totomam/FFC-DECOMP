#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x20];
    uint32_t v;
} S;

extern void func_02059bf8(uint32_t v);

void func_ov002_0219d0d8(S *p)
{
    if (p->v) {
        func_02059bf8(p->v);
    }
}
