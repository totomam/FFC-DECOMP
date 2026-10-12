#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02084ca4(const void *src, void *dst, uint32_t n);
extern int32_t func_0206cdf0(int32_t a, uint16_t b);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c4230;

void func_ov007_021a4e34(uint8_t *self, uint8_t *p)
{
    if (*(int32_t *)(p + 0xc) == 5) {
        *(uint16_t *)(self + 0xe0) = *(uint16_t *)(p + 0x10);
        func_02084ca4(p + 0x12, self + 0xe4, 0x18);
        if (*(int32_t *)(self + 0xe4) != 2) {
            int32_t r = func_0206cdf0(*(int32_t *)(self + 0xc8), *(uint16_t *)(self + 0xe0));
            func_02056bc0(self + 0x14, (void *)r);
        } else {
            *(Pair *)(self + 0xb8) = data_ov007_021c4230;
        }
    }
}
