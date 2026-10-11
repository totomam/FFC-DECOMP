#include "ffc/types.h"

extern void func_ov012_021cffe8(void *p);
extern int func_020692e0(void *p);

typedef struct VT {
    void *slots[14];
    void (*m38)(void *self, int a, int b);
} VT;

void func_ov012_021d1078(uint8_t *p, int flag)
{
    func_ov012_021cffe8(*(void **)(p + 0xc0));
    if (func_020692e0(p) == 0) {
        return;
    }
    if (flag != 0) {
        void *o = *(void **)(p + 0xc4);
        VT *vt = *(VT **)o;
        vt->m38(o, 3, 1);
    } else {
        void *o = *(void **)(p + 0xc4);
        VT *vt = *(VT **)o;
        vt->m38(o, 2, 1);
    }
}
