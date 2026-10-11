#include "ffc/types.h"

extern int func_ov001_0217ef6c(void *p, void *data);
extern int func_ov001_0217c8f0(void *p, int x, void **out);
extern uint8_t data_ov001_02190548[];

int func_ov001_0217823c(void *a, int b, int c) {
    void *out;
    if (b <= 0) {
        func_ov001_0217ef6c(a, data_ov001_02190548);
        return 2;
    }
    if (func_ov001_0217c8f0(a, b, &out) != 0) {
        *(int *)((uint8_t *)out + 0x2c) = c;
    }
    return 0;
}
