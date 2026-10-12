#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_ov001_0218de10(void);
extern void func_02056bc0(void *object, void *node);
extern int func_ov001_0218ddec(void *p);
extern void func_ov001_0218e3b4(void *p, int x);
extern void *func_02056aec(void *p);

typedef void *(*VFn)(void *);

void func_ov001_0218e650(void *a)
{
    void *n;
    void *x;

    if (*(void **)((uint8_t *)(*(void **)data_020b8e44) + 0x88) == 0) {
        return;
    }
    func_02056bc0((uint8_t *)a + 0x14, func_ov001_0218de10());
    if (func_ov001_0218ddec(a) == 0) {
        func_ov001_0218e3b4(a, 0);
    }
    n = func_02056aec(a);
    x = ((VFn)((void **)*(void **)a)[6])(a);
    a = (uint8_t *)a + 0x14;
    func_02056bc0(a, x);
    func_02056bc0(a, n);
}
