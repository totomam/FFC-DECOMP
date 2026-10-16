#include "ffc/types.h"
typedef struct S { uint32_t *a; uint32_t *b; uint32_t *c[2]; uint32_t d; uint32_t e; uint32_t f; uint8_t g; } S;
extern S *data_ov006_021bc7f8;
extern uint32_t data_ov006_021bc7f4[];
extern uint8_t data_ov006_021b89f6[];
extern void func_ov006_021b3b9c(void *);
extern void func_ov006_021b42d8(void *);
extern void func_ov006_021b5774(int, int);
extern void func_ov006_021b49fc(void *);
void func_ov006_021b1884(int p)
{
    int i;
    *(volatile uint32_t *)0x04000000 &= 0xffff1fff;
    func_ov006_021b3b9c(*(void **)data_ov006_021bc7f8);
    func_ov006_021b3b9c(((void **)data_ov006_021bc7f8)[1]);
    for (i = 0; i < data_ov006_021b89f6[((uint8_t *)data_ov006_021bc7f8)[0x1c]]; i++) {
        void *q = ((void **)data_ov006_021bc7f8)[2 + i];
        if (q) func_ov006_021b3b9c(q);
    }
    func_ov006_021b42d8(((void **)data_ov006_021bc7f8)[4]);
    func_ov006_021b5774(1, p);
    func_ov006_021b49fc(data_ov006_021bc7f4 + 1);
}
