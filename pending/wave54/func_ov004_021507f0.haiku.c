#include "ffc/types.h"

extern void func_ov004_021522e8(void *bs, uint32_t n, uint32_t z);
extern uint32_t func_ov004_0214fb28(void *self);
extern void func_02065874(void *bs);

typedef struct {
    uint32_t *data;
    uint32_t count;
    uint32_t x;
} BitSet;

int func_ov004_021507f0(uint8_t *self, uint32_t bit)
{
    BitSet a;
    BitSet b;
    uint32_t count;
    uint32_t i;
    uint32_t j;
    uint32_t found;

    count = 0;
    a.data = 0;
    a.count = 0;
    a.x = 0;
    func_ov004_021522e8(&a, *(uint32_t *)(self + 0x110), 0);

    b.data = (uint32_t *)count;
    b.count = count;
    b.x = count;
    func_ov004_021522e8(&b, *(uint32_t *)(self + 0x110), 0);

    b.data[bit >> 5] |= (uint32_t)1 << (bit & 31);

    do {
        found = 0;
        for (i = 0; i < b.count; i++) {
            uint32_t mask = (uint32_t)1 << (i & 31);
            if (!(a.data[i >> 5] & mask) && (b.data[i >> 5] & mask)) {
                uint8_t *obj = *(uint8_t **)(self + 0x10c) + i * 0x38;
                if (obj[0x37]) {
                    count++;
                }
                for (j = 0; j < *(uint32_t *)(obj + 0x2c); j++) {
                    uint32_t k = ((uint32_t *)(*(uint32_t *)(obj + 0x28)))[j];
                    uint8_t *sub = *(uint8_t **)(self + 0x10c) + k * 0x38;
                    if (!sub[0x34]) {
                        b.data[k >> 5] |= (uint32_t)1 << (k & 31);
                    }
                }
                a.data[i >> 5] |= mask;
                found = 1;
            }
        }
    } while (found);

    if (count < func_ov004_0214fb28(self)) {
        found = 0;
    } else {
        found = 1;
    }
    func_02065874(&b);
    func_02065874(&a);
    return found;
}
