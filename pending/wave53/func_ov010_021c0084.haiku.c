/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
uint32_t func_020367bc(void *p, uint32_t i);
void func_0200d5d4(void *object, void *src, uint32_t value);
}

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void func_ov010_021c0084(uint8_t *obj, uint32_t r2)
{
    uint8_t count = 0;
    uint32_t i;
    uint8_t zb = 0;

    *(uint8_t *)(obj + 0x119) = 0;
    {
        int a = *(int *)(obj + 0xf8);
        *(int *)(obj + 0xf8) = diff(Num(*(int *)(obj + 0xf8)), a);
    }
    for (i = 0; (uint8_t)i < 5; i++) {
        if (i == *(uint32_t *)(obj + 0x10c)) {
            *(uint32_t *)(obj + 0x10c) = count;
        }
        if (func_020367bc(&r2 == 0 ? 0 : (void *)(uintptr_t)r2, i) != 0) {
            uint32_t val = func_020367bc((void *)(uintptr_t)r2, i);
            if (*(uint32_t *)(obj + 0xf8) < *(uint32_t *)(obj + 0xfc)) {
                uint32_t k = *(uint32_t *)(obj + 0xf8) + 1;
                uint32_t *arr = *(uint32_t **)(obj + 0xf4);
                *(uint32_t *)(obj + 0xf8) = k;
                arr[k - 1] = val;
            } else {
                func_0200d5d4(obj + 0xf4, &val, zb);
            }
            count++;
        }
    }
    *(uint32_t *)(obj + 0x110) = count - 1;
}
