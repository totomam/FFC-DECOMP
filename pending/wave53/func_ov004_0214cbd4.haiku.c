#include "ffc/types.h"

extern uint32_t func_ov004_021534a8(void *a);
extern int32_t func_0201c9ac(void *a, int32_t b);
extern int32_t *func_ov004_02153504(void *a);
extern void func_ov004_0214cc64(uint8_t *p, int32_t kind, int32_t val, uint32_t idx);
extern void *data_020b93b8;

void func_ov004_0214cbd4(uint8_t *p) {
    uint32_t i;
    int32_t r5;
    int32_t kind;

    for (i = 0; i < func_ov004_021534a8(*(void **)(p + 0xb8)); i++) {
        r5 = 3;
        switch (i) {
        case 0:
            kind = 9;
            r5 = func_0201c9ac(data_020b93b8, 7);
            break;
        case 1:
            kind = 10;
            r5 = func_0201c9ac(data_020b93b8, 8);
            break;
        case 2:
            kind = 11;
            break;
        case 3:
        default:
            kind = 12;
            break;
        }
        if (func_ov004_02153504(*(void **)(p + 0xb8))[2] != 0) {
            r5 = func_ov004_02153504(*(void **)(p + 0xb8))[2];
        }
        if (r5 > 0) {
            func_ov004_0214cc64(p, kind, r5, i);
        }
    }
}
