#include "ffc/types.h"

extern int32_t func_02007b5c(void *a, uint32_t *arr, int32_t n, int32_t x);
extern void func_02007a90(void *a, int32_t i);
extern int32_t func_02007a60(void *a, uint32_t v);
extern void func_02007ab4(void *a);
extern void func_02007bb4(void *a);
extern int32_t func_0207ad94(uint32_t v);

int32_t func_02007af0(void *self, int32_t n, uint32_t *arr, int32_t x)
{
    int32_t flag = 1;
    int32_t i = func_02007b5c(self, arr, n, x);
    func_02007a90(self, i);
    for (; i < n; i++) {
        if (func_02007a60(self, arr[i]) == 0) {
            flag = 0;
        }
        func_02007ab4(self);
    }
    if (n != 0) {
        *(uint16_t *)((uint8_t *)self + 0x58) = (uint16_t)arr[n - 1];
    }
    func_02007bb4(self);
    if (flag != 0) {
        return func_0207ad94(*(uint32_t *)((uint8_t *)self + 4));
    }
    return -1;
}
