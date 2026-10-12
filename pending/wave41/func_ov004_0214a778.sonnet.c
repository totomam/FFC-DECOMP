/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern int func_ov004_02151e48(void *);
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_ov004_0214e84c(void *);
extern uint32_t func_ov004_0215311c(void);
extern void func_02021b48(uint32_t, uint32_t);
extern void func_ov004_02151b0c(void *);
extern void func_ov004_021509bc(void *);
void func_ov004_0214a778(void *param_1);
}
struct Lock {
    uint8_t f; void *s;
    Lock(uint8_t fl, void *p) : f(fl), s(p) { if (f) func_0208763c(s); }
    ~Lock() { if (f) func_02087678(s); }
};
void func_ov004_0214a778(void *param_1)
{
    uint8_t *self = (uint8_t *)param_1;
    if (func_ov004_02151e48(*(void **)(self + 0x88)) != 0) return;
    uint8_t *obj = *(uint8_t **)(self + 0x9c);
    int ok;
    {
        Lock l(obj[0x12], obj + 0x1c);
        ok = (*(uint32_t *)(obj + 0x14) == 0);
    }
    if (!ok) return;
    func_ov004_0214e84c(*(void **)(self + 0x88));
    func_02021b48(func_ov004_0215311c(), 0x1b);
    func_ov004_02151b0c(*(void **)(self + 0x88));
    func_ov004_021509bc(*(void **)(self + 0x88));
    uint32_t w = *(uint32_t *)(self + 0xc);
    *(uint32_t *)(self + 0xc) = (w & ~0xffu) | 2u;
}
