#include "ffc/types.h"

extern void func_ov004_021522e8(void *bs, uint32_t n, uint32_t z);
extern uint32_t func_ov004_0214fb28(void *self);
extern void func_02065874(void *bs);

typedef struct {
    uint32_t *data;
    uint32_t count;
    uint32_t x;
} BitSet;

typedef struct {
    uint8_t pad0[0x28];
    uint32_t *list;
    uint32_t n;
    uint8_t pad1[4];
    uint8_t f34;
    uint8_t pad2[2];
    uint8_t f37;
} Obj;

typedef struct {
    uint8_t pad[0x10c];
    Obj *arr;
    uint32_t nbits;
} Self;

int func_ov004_021507f0(Self *self, uint32_t bit)
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
    func_ov004_021522e8(&a, self->nbits, 0);

    b.data = (uint32_t *)count;
    b.count = count;
    b.x = count;
    func_ov004_021522e8(&b, self->nbits, 0);

    b.data[bit >> 5] |= (uint32_t)1 << (bit & 31);

    do {
        found = 0;
        for (i = 0; i < b.count; i++) {
            if (!(a.data[i >> 5] & ((uint32_t)1 << (i & 31))) && (b.data[i >> 5] & ((uint32_t)1 << (i & 31)))) {
                if (self->arr[i].f37) {
                    count++;
                }
                for (j = 0; j < self->arr[i].n; j++) {
                    uint32_t k = self->arr[i].list[j];
                    if (!self->arr[k].f34) {
                        b.data[k >> 5] |= (uint32_t)1 << (k & 31);
                    }
                }
                a.data[i >> 5] |= (uint32_t)1 << (i & 31);
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
