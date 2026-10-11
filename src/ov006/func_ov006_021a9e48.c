#include "ffc/types.h"

typedef struct {
    uint16_t f0;
    uint16_t f2;
    uint8_t *obj;
} GlobalState;

extern GlobalState data_ov006_021bc778;
extern void func_ov006_021b0600(int x);
extern int func_ov006_021b570c(int a, void *fn, int b, int c);
extern void func_ov006_021a9c60(void);

void func_ov006_021a9e48(void) {
    uint8_t *obj = data_ov006_021bc778.obj;
    if (data_ov006_021bc778.f2 == *(uint16_t *)(obj + 0x40) || obj[0x51] <= 4) {
        if (data_ov006_021bc778.obj[0x59] == 0) {
            func_ov006_021b0600(9);
            data_ov006_021bc778.obj[0x59] = 1;
        }
    } else {
        func_ov006_021b0600(0x13);
        *(int *)(data_ov006_021bc778.obj + 0x38) =
            func_ov006_021b570c(0, (void *)func_ov006_021a9c60, 0, 0x78);
    }
}
