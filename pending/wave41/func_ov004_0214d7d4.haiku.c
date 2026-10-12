#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x8c];
    uint32_t b;
    uint32_t a;
    uint8_t pad1[4];
    uint32_t *arr[2];
} FuncOv004Struct;

void func_ov004_0214d7d4(FuncOv004Struct *p) {
    int i;
    uint32_t j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < p->a; j++) {
            for (k = 0; k < p->b; k++) {
                p->arr[i][j * p->b + k] = 0;
            }
        }
    }
}
