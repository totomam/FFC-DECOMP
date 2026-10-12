#include "ffc/types.h"

extern int func_ov006_021b3fb8(int a);
extern void func_ov006_021a6508(int a, int *b);
extern void func_ov006_021b11fc(uint32_t a, int b, int c, int d, int e);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021aebac(void);
extern uint32_t data_ov006_021b88fc[3];

typedef struct {
    uint32_t a[3];
} Tri;

void func_ov006_021aeb54(void)
{
    int idx;
    int v;
    Tri t;

    t = *(Tri *)data_ov006_021b88fc;
    if (func_ov006_021b3fb8(1) == 0) {
        v = 0;
        if (func_ov006_021b3fb8(v) == 0) {
            func_ov006_021a6508(v, &idx);
            func_ov006_021b11fc(t.a[idx], 1, 1, v - 1, v);
            func_ov006_021a64c8((void *)func_ov006_021aebac);
        }
    }
}
