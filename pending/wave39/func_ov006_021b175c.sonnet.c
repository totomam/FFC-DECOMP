#include "ffc/types.h"

typedef struct S { uint8_t pad[8]; void *o[5]; uint8_t k; } S;
extern S *data_ov006_021bc7f8;
extern uint8_t data_ov006_021b8a18[];
extern uint8_t data_ov006_021b8a04[];
extern uint8_t data_ov006_021b8a7e[];
extern uint8_t data_ov006_021b8a80[];

extern void *func_ov006_021b3bf8(void *p, int x);
extern void func_ov006_021b3e20(int a, int b, void *c);
extern void func_ov006_021b3cec(void *p, int a, uint16_t b, uint16_t c, int d);
extern void func_ov006_021b3d84(void *p, int a, int b);

void func_ov006_021b175c(int a) {
    void *r;
    uint8_t *t;
    int k;
    int m = -1;
    r = func_ov006_021b3bf8(data_ov006_021bc7f8->o[a], 0);
    k = data_ov006_021bc7f8->k;
    t = data_ov006_021b8a18 + k * 2;
    func_ov006_021b3e20(0, t[a] + 1, r);
    k = data_ov006_021bc7f8->k;
    t = data_ov006_021b8a04 + k * 2;
    {
    int i = t[a] << 2;
    func_ov006_021b3cec(data_ov006_021bc7f8->o[a], m,
        *(uint16_t *)(data_ov006_021b8a7e + k * 8 + i),
        *(uint16_t *)(data_ov006_021b8a80 + k * 8 + i), m);
    }
    func_ov006_021b3d84(data_ov006_021bc7f8->o[a], m, 0);
}
