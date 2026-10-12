/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void *func_02052d90(void *mar, uint32_t index);
extern int func_0201bfa4(void *obj, uint32_t v);
extern void func_0200d5d4(void *object, void *value);
extern void func_ov005_021961ac(void *obj, uint8_t v);
extern void *data_020b93b8;
}

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" void func_ov008_021a3ab8(uint8_t *self)
{
    uint32_t i;
    uint32_t n;
    uint32_t val;
    uint32_t *cnt;
    void *mar;

    cnt = (uint32_t *)(self + 0x10C);
    n = *cnt;
    *cnt = diff(n, n);

    mar = func_02052d90(*(void **)(self + 0xBC), *(uint32_t *)(self + 0xC0));
    if (((uint32_t *)mar)[2] > 0) {
        for (i = 0; i < ((uint32_t *)mar)[2]; ) {
            uint16_t *ent;
            (void)ent;
            mar = func_02052d90(*(void **)(self + 0xBC), *(uint32_t *)(self + 0xC0));
            {
                uint8_t *base = (uint8_t *)mar + ((uint32_t *)mar)[3];
                uint16_t e = *(uint16_t *)(base + i * 4);
                if (func_0201bfa4(data_020b93b8, e) == 0) {
                    val = e;
                    n = *cnt;
                    if (n < *(uint32_t *)(self + 0x110)) {
                        uint32_t *arr = *(uint32_t **)(self + 0x108);
                        arr[n] = val;
                        *cnt = n + 1;
                    } else {
                        func_0200d5d4(self + 0x108, &val);
                    }
                }
            }
            i = (uint16_t)(i + 1);
            mar = func_02052d90(*(void **)(self + 0xBC), *(uint32_t *)(self + 0xC0));
            if (!(i < ((uint32_t *)mar)[2])) break;
        }
    }

    n = *cnt;
    if (n == 0) {
        *(uint32_t *)(self + 0x118) = 0;
    } else {
        *(uint32_t *)(self + 0x118) = (n - 1) >> 3;
    }
    func_ov005_021961ac(*(void **)(self + 0xFC), (uint8_t)(*(uint32_t *)(self + 0x118) + 1));
}
