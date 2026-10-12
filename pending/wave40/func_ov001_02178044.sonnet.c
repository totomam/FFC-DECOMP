#include "ffc/types.h"

extern int32_t func_ov001_0217c8f0(void *a, void *b, void **out);
extern void func_ov001_0217ef6c(void *a, void *d);
extern int32_t func_ov001_0217699c(void *a);
extern void func_ov000_021653f4(int32_t x);
extern int32_t func_ov001_0217cb40(void *p);
extern void func_ov001_0217c9e8(void *a, void *p);
extern uint8_t data_ov001_02190548[];

typedef struct {
    uint8_t pad[0x14];
    int32_t f14;
    int32_t f18;
} Local;

int32_t func_ov001_02178044(void *a, void *b) {
    Local *loc;
    uint8_t *base = *(uint8_t **)a;
    int32_t r;

    if (func_ov001_0217c8f0(a, b, (void **)&loc) == 0) {
        func_ov001_0217ef6c(a, data_ov001_02190548);
        return 2;
    }
    if (loc->f14 == 0) {
        func_ov001_0217ef6c(a, data_ov001_02190548);
        return 2;
    }
    r = func_ov001_0217699c(a);
    if (r != 0) {
        return r;
    }
    loc->f18 = loc->f18 - 1;
    if (*(int32_t *)(base + 0x100) == 0) {
        if (loc->f18 <= 0) {
            func_ov000_021653f4(loc->f14);
            loc->f14 = 0;
            if (func_ov001_0217cb40(loc) != 0) {
                func_ov001_0217c9e8(a, loc);
            }
        }
    }
    return 0;
}
