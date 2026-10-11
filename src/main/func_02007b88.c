#include "ffc/types.h"

extern int32_t func_02007ac0(void *p);
extern void func_02007a90(void *p, int32_t n);
extern void func_02007a60(void *p, int32_t n);
extern void func_02007ab4(void *p);
extern void func_02007bb4(void *p);

void func_02007b88(void *p, int32_t n)
{
    if (n < 0) {
        return;
    }
    func_02007a90(p, func_02007ac0(p) - 1);
    func_02007a60(p, n);
    func_02007ab4(p);
    func_02007bb4(p);
}
