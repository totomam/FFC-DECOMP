#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x13];
    uint8_t v;
} S;

extern void func_ov001_02188714(uint8_t v);

void func_02073c24(S *p)
{
    if (p->v) {
        func_ov001_02188714(p->v);
    }
}
