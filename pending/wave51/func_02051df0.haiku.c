#include "ffc/types.h"

extern void func_0207e890(void *object);
extern uint32_t func_0207e990(void *object, uint32_t second, uint32_t third, ...);
extern void *func_0207e904(void *object);
extern void *func_02056830(void);
extern void func_0207e8dc(void *object, void *a, void *b);
extern void func_0205278c(void *out, void *a, void *b);
extern void func_02056858(void *a);
extern void func_0207ea0c(void *object);
extern void func_020095b8(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_02005988(void *a, void *b);
extern uint32_t data_020b04f4;

void func_02051df0(void *obj, uint32_t p1, uint32_t p2, uint32_t p3)
{
    uint32_t *ap;
    uint8_t out[12];
    uint8_t local[0x48];
    uint32_t a;
    uint32_t b;
    void *r6;
    void *r4;

    ap = &p1;
    func_0207e890(local);
    a = *ap++;
    b = *ap++;
    if (func_0207e990(local, a, b) == 1) {
        r4 = func_0207e904(local);
        r6 = func_02056830();
        func_0207e8dc(local, r6, r4);
        func_0205278c(out, r6, r4);
        func_02056858(r6);
        func_0207ea0c(local);
        func_020095b8(obj, out);
        func_020059cc(out);
    } else {
        func_02005988(obj, &data_020b04f4);
    }
}
