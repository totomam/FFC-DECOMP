#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x1d];
    uint8_t state;
} Inner;

typedef struct Outer {
    uint32_t a;
    Inner *b;
} Outer;

extern Outer data_ov006_021bc7ac;
extern void func_ov006_021b09a8(void);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021b4100(uint32_t x);
extern void func_ov006_021a64c8(void *f);
extern void func_ov006_021adc48(void);

void func_ov006_021adc1c(void) {
    if (data_ov006_021bc7ac.b->state == 2) {
        func_ov006_021b09a8();
    }
    func_ov006_021a37a8();
    func_ov006_021b4100(8);
    func_ov006_021a64c8((void *)func_ov006_021adc48);
}
