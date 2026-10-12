#include "ffc/types.h"

extern void func_02035f58(void *p);
extern void func_ov009_021ad6ac(void *a, void *b, void *c);
extern void func_02036750(void *p);
extern void func_0201f1f0(void *a, uint8_t b, void *c);
extern int func_ov009_021adc9c(void *a, void *b, void *c, int d);
extern void func_020367a8();
extern void *func_02035fd0(void *object);
extern void *data_020b93b8;

int func_ov011_021c2cdc(void *a, void *b) {
    uint8_t s2[0x60];
    uint8_t s1[0x58];
    uint8_t i;

    func_02035f58(s2);
    func_ov009_021ad6ac(a, b, s2);
    i = 1;
    do {
        func_02036750(s1);
        func_0201f1f0(data_020b93b8, i, s1);
        if (func_ov009_021adc9c(a, s1, s2, 0)) {
            func_020367a8(s1);
            func_02035fd0(s2);
            return 0;
        }
        func_020367a8(s1);
        i++;
    } while (i < 4);
    func_02035fd0(s2);
    return 1;
}
