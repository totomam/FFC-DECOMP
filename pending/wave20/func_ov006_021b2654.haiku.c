#include "ffc/types.h"

extern void func_ov006_021b20f0(int32_t x);
extern void func_ov006_021b2140(int32_t x);

typedef struct {
    uint16_t a;
    uint16_t b;
} S;

void func_ov006_021b2654(S *p) {
    if (p->b != 0) {
        func_ov006_021b20f0(9);
        func_ov006_021b2140(p->b);
    } else {
        func_ov006_021b20f0(1);
    }
}
