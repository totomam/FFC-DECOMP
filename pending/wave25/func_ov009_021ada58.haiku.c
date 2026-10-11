#include "ffc/types.h"

extern void func_ov009_021a4774(void *p, uint8_t i);
extern void func_ov009_021ada30(void *p);

void func_ov009_021ada58(void *p)
{
    uint8_t i = 0;
    while (i < 10) {
        func_ov009_021a4774(p, i);
        i++;
    }
    func_ov009_021ada30(p);
}
