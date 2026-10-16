#include "ffc/types.h"
extern void *func_ov000_02159188(void *a, uint32_t n, uint32_t c);
extern uint32_t func_ov000_02159164(void *s);
extern void func_02084ca4(void *d, void *s, uint32_t n);
extern void func_ov000_021591a8(void *a, void *s, uint32_t n);
void *func_ov000_021591dc(void *a, void *s, uint32_t u, uint32_t n, uint32_t c)
{
    void *p = func_ov000_02159188(a, n, c);
    if (p == 0) return 0;
    if (s != 0) {
        uint32_t l = func_ov000_02159164(s);
        if (l <= n) n = l;
        func_02084ca4(s, p, n);
        func_ov000_021591a8(a, s, l);
    }
    return p;
}
