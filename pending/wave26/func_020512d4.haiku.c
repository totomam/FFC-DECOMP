#include "ffc/types.h"

extern void func_020095b8(void *a, void *p);
extern void func_02051060(void *b, void *a, int c);
extern void func_02051304(void *b);
extern void *func_0200a678(void *object);
extern void *func_020059cc(void *object);

void func_020512d4(void *p) {
    uint32_t a[3];
    uint32_t b[3];

    func_020095b8(a, p);
    func_02051060(b, a, 0);
    func_02051304(b);
    func_0200a678(b);
    func_020059cc(a);
}
