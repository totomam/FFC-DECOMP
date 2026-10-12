#include "ffc/types.h"

extern void func_ov006_021b3dc8(void *a, int b, int *c, int *d);
extern void func_ov006_021b3cec(void *a, int b, int c, int d);
extern void func_ov006_021b5770(void *a, void (*f)(void));
extern void func_ov006_021b0990(void);
extern uint32_t data_ov006_021bc7ec[];

void func_ov006_021b092c(void *a)
{
    int v1;
    int v2;
    void *p;

    p = (void *)data_ov006_021bc7ec[1];
    func_ov006_021b3dc8(*(void **)((char *)p + 0x10), 0, &v1, &v2);
    v1 += 8;
    if (v1 < 0xb0 || v1 > 0x100) {
        func_ov006_021b3cec(*(void **)((char *)((void **)data_ov006_021bc7ec)[1] + 0x10), -1, v1, 0x21);
        return;
    }
    v1 = 0xb0;
    func_ov006_021b3cec(*(void **)((char *)((void **)data_ov006_021bc7ec)[1] + 0x10), -1, v1, 0x21);
    func_ov006_021b5770(a, func_ov006_021b0990);
}
