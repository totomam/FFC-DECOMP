#include "ffc/types.h"

extern void func_ov008_021a4efc(void *p);
extern void func_ov008_021a4f68(void *p);

typedef void (*VFn)(void *, int, int);

void func_ov008_021a5130(uint8_t *a, int b)
{
    uint8_t *s;
    void *o;
    void **vt;

    func_ov008_021a4efc(*(void **)(a + 0x94));
    s = *(uint8_t **)(a + 0x94);
    if (s[0x124] == 0) {
        o = *(void **)(a + 0x98);
        vt = *(void ***)o;
        ((VFn)vt[14])(o, 1, 0);
        return;
    }
    if (b != 0) {
        o = *(void **)(a + 0x98);
        vt = *(void ***)o;
        ((VFn)vt[14])(o, 2, 0);
        return;
    }
    func_ov008_021a4f68(s);
}
