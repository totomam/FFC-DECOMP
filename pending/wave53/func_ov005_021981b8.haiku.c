/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num {
    uint32_t v;
    Num(uint32_t x) : v(x) {}
    ~Num() {}
};
inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

extern "C" {
uint32_t func_02036cd8(const void *object);
uint32_t func_02036d20(const void *object);
void func_ov005_02197684(uint32_t *out, const void *obj, uint32_t flag);
void func_ov005_02198cf4(void *arr, uint32_t *elem, uint32_t flag);

void func_ov005_021981b8(void *self) {
    uint8_t *s = (uint8_t *)self;
    uint8_t obj[0x18];
    uint32_t out1c;
    uint16_t i;
    uint32_t t = *(uint32_t *)(s + 0x140);
    uint32_t *p7 = (uint32_t *)(s + 0x140);
    *p7 = diff(t, t);

    {
        for (i = 0; (int)i < (int)s[0x105]; i++) {
            void **vt = *(void ***)s;
            ((void (*)(void *, uint32_t, void *))vt[12])(s, i, obj);
            if (func_02036cd8(obj)) {
                uint32_t flag = 1;
                uint32_t v150 = *(uint32_t *)(s + 0x150);
                if (v150 != 1 && v150 != 2) {
                    flag = func_02036d20(obj);
                }
                func_ov005_02197684(&out1c, obj, flag);
                if (*p7 < *(uint32_t *)(s + 0x144)) {
                    uint32_t idx = (*p7)++;
                    uint32_t *arr = *(uint32_t **)(s + 0x13c);
                    arr[idx] = out1c;
                } else {
                    uint32_t b = 0;
                    func_ov005_02198cf4(s + 0x13c, &out1c, b);
                }
            }
        }
    }

    {
        uint32_t n = *p7;
        if (n == 0) {
            *(uint32_t *)(s + 0x100) = 0;
        } else {
            *(uint32_t *)(s + 0x100) = (n - 1) >> 3;
        }
    }
}
}
