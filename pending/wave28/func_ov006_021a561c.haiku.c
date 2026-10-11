#include "ffc/types.h"

extern void *data_ov006_021bc700;
extern void func_ov006_021b3dc8(void *p, int flag, int *a, int *b);
extern void func_ov006_021a5b40(int a, int b);
extern void func_ov006_021a5d44(void);
extern void func_ov006_021a5668(void);
extern void func_ov006_021b5770(void *obj, void (*fn)(void));

void func_ov006_021a561c(void *p)
{
    int a;
    int b;
    void *d;

    d = *(void **)((char *)data_ov006_021bc700 + 0x40);
    func_ov006_021b3dc8(d, 0, &a, &b);
    b -= 0xc;
    if (b > 0xaa) {
        func_ov006_021a5b40(4, b);
        return;
    }
    func_ov006_021a5b40(4, 0xaa);
    func_ov006_021a5d44();
    func_ov006_021b5770(p, func_ov006_021a5668);
}
