#include "ffc/types.h"

extern void func_ov010_021bd180(void *a, void *b, uint32_t c, void *d);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069328(void *object, uint32_t value);
extern uint32_t data_ov010_021d11e0[];
extern uint32_t data_ov010_021d1200[];
extern char data_ov010_021d1278[];

void **func_ov010_021bd2f0(void **a, void *b)
{
    func_ov010_021bd180(a, b, data_ov010_021d11e0[3], data_ov010_021d1200);
    *a = data_ov010_021d1278;
    func_02069320(a, 0x200);
    func_02069328(a, 1);
    return a;
}
