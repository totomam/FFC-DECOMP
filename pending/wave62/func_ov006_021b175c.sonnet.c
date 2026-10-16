#include "ffc/types.h"
typedef struct { uint32_t p0, p1; void *o[5]; uint8_t k; } G;
extern G *data_ov006_021bc7f8;
extern uint8_t data_ov006_021b8a18[], data_ov006_021b8a04[], data_ov006_021b8a7e[], data_ov006_021b8a80[];
extern int func_ov006_021b3bf8(void *, int);
extern void func_ov006_021b3e20(int, int, int);
extern void func_ov006_021b3cec(void *, int, int, int, int);
extern void func_ov006_021b3d84(void *, int, int);
void func_ov006_021b175c(int a)
{
    int r = func_ov006_021b3bf8(data_ov006_021bc7f8->o[a], 0);
    int x;
    uint8_t *p, *q;
    func_ov006_021b3e20(0, (data_ov006_021b8a18 + data_ov006_021bc7f8->k*2)[a] + 1, r);
    x = (data_ov006_021b8a04 + data_ov006_021bc7f8->k*2)[a] * 4;
    p = data_ov006_021b8a7e + data_ov006_021bc7f8->k*8;
    q = data_ov006_021b8a80 + data_ov006_021bc7f8->k*8;
    func_ov006_021b3cec(data_ov006_021bc7f8->o[a], -1, *(uint16_t*)(p + x), *(uint16_t*)(q + x), -1);
    func_ov006_021b3d84(data_ov006_021bc7f8->o[a], -1, 0);
}
