#include "ffc/types.h"

struct Inner {
    uint8_t pad[0x40];
    uint32_t val;
};

struct Outer {
    uint32_t a;
    struct Inner *b;
};

extern struct Outer data_ov006_021bc800;
extern void func_02088f30(uint32_t);
extern void func_ov006_021b20f0(uint32_t);
extern uint32_t func_0208d8ec(void *);
extern void func_ov006_021b2674(void);

int func_ov006_021b2c3c(void) {
    uint32_t v = data_ov006_021bc800.b->val;
    if (v != 1) {
        func_02088f30(v);
    }
    func_ov006_021b20f0(3);
    uint32_t r = func_0208d8ec((void *)func_ov006_021b2674);
    if (r != 2) {
        func_ov006_021b20f0(9);
        return 0;
    }
    return 1;
}
