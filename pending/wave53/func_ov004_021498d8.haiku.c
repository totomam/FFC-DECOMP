#include "ffc/types.h"

extern void *func_ov004_02153114(void *a);
extern int32_t func_ov004_0214f79c(void *a);
extern int32_t func_ov004_0214f7a4(void *a);
typedef struct { uint32_t x; uint32_t y; } Pair;
extern Pair data_ov004_02158864;
extern Pair data_ov004_0215886c;

typedef void (*FnA)(void *, int32_t, int32_t);
typedef void (*FnB)(void *);

void func_ov004_021498d8(uint8_t *p)
{
    void *o6 = func_ov004_02153114(*(void **)(p + 0x80));
    int32_t r4;

    if (func_ov004_0214f79c(o6) >= 0x200) {
        if (func_ov004_0214f79c(o6) < 0x280) {
            r4 = 2;
        } else {
            r4 = 3;
        }
    } else {
        if (func_ov004_0214f7a4(o6) >= 0x180) {
            if (func_ov004_0214f7a4(o6) < 0x1e0) {
                r4 = 4;
            } else {
                r4 = 5;
            }
        } else {
            if (func_ov004_0214f79c(o6) > 0x100) {
                r4 = 1;
            } else {
                *(Pair *)(p + 0x8c) = data_ov004_02158864;
                return;
            }
        }
    }

    ((FnA)(*(void ***)*(void **)(p + 0x88))[0x38 / 4])(*(void **)(p + 0x88), r4, 0);
    ((FnA)(*(void ***)*(void **)(p + 0x84))[0x38 / 4])(*(void **)(p + 0x84), r4, 0);
    ((FnB)(*(void ***)*(void **)(p + 0x88))[0x28 / 4])(*(void **)(p + 0x88));
    ((FnB)(*(void ***)*(void **)(p + 0x84))[0x28 / 4])(*(void **)(p + 0x84));
    {
        *(Pair *)(p + 0x8c) = data_ov004_0215886c;
    }
}
