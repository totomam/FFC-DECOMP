#include "ffc/types.h"

extern void *data_ov006_021bc6a8;
extern void func_ov006_021b3dc8(void *a, int b, int *c, int *d);
extern void func_ov006_021a37b8(int x);
extern void func_ov006_021b5770(void *p, void (*f)(void));
extern void func_ov006_021a3854(void);

void func_ov006_021a3814(void *p)
{
    int b;
    int a;

    func_ov006_021b3dc8(*(void **)((char *)data_ov006_021bc6a8 + 8), 0, &b, &a);
    a = a - 4;
    func_ov006_021a37b8(a);
    if (a <= 0xa8) {
        func_ov006_021a37b8(0xa8);
        func_ov006_021b5770(p, func_ov006_021a3854);
    }
}
