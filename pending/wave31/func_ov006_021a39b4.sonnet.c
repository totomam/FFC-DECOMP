#include "ffc/types.h"

extern void func_ov006_021b5774(uint32_t a, uint32_t b);
extern void func_ov006_021b3b9c(uint32_t p);
extern void func_ov006_021b49fc(void *p);

typedef struct {
    uint32_t arr[2];
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Obj;

extern Obj *data_ov006_021bc6a8;

void func_ov006_021a39b4(uint32_t a) {
    int i;
    func_ov006_021b5774(0, a);
    if (data_ov006_021bc6a8->f10 != 0) {
        func_ov006_021b5774(0, data_ov006_021bc6a8->f10);
    }
    for (i = 0; i < 2; i++) {
        if (data_ov006_021bc6a8->arr[i] != 0) {
            func_ov006_021b3b9c(data_ov006_021bc6a8->arr[i]);
        }
    }
    func_ov006_021b3b9c(data_ov006_021bc6a8->f8);
    func_ov006_021b49fc(&data_ov006_021bc6a8);
}
