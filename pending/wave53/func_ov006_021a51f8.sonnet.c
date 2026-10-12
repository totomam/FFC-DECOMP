#include "ffc/types.h"

extern void func_ov006_021b5774(uint32_t, uint32_t);
extern void func_ov006_021b42d8(uint32_t);
extern void func_ov006_021b3b9c(uint32_t);
extern void func_ov006_021b51a8(uint32_t);
extern void func_ov006_021b49fc(void *);
typedef struct {
    uint32_t a[3][4];
    uint32_t b[0x2f];
    uint32_t c[4];
    uint32_t d[2];
    uint32_t e[4];
} S;
extern S *data_ov006_021bc6fc;

void func_ov006_021a51f8(uint32_t a) {
    int j, i, k, o, r;

    func_ov006_021b5774(0, a);
    for (j = 0; j < 3; j++) {
        r = j*16;
        for (i = 0; i < 4; i++) {
            o = i*4;
            func_ov006_021b42d8(*(uint32_t*)((char*)data_ov006_021bc6fc + r + o));
            if (r == 0) {
                func_ov006_021b3b9c(*(uint32_t*)((char*)data_ov006_021bc6fc + 0x104 + o));
            }
        }
    }
    for (k = 0; k < 2; k++) {
        func_ov006_021b3b9c(data_ov006_021bc6fc->d[k]);
    }
    for (k = 0; k < 4; k++) {
        func_ov006_021b51a8(data_ov006_021bc6fc->c[k]);
    }
    for (k = 0; k < 0x2f; k++) {
        func_ov006_021b51a8(data_ov006_021bc6fc->b[k]);
    }
    func_ov006_021b49fc(&data_ov006_021bc6fc);
}
