#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_02084ca4(uint8_t *dst, const uint8_t *src, uint32_t length);

typedef struct Obj Obj;

typedef struct VT {
    int32_t f0[6];
    int32_t (*f18)(Obj *self, uint32_t offset, uint8_t *base, uint32_t stride);
    int32_t (*f1c)(Obj *self, uint32_t offset, uint8_t *base, uint32_t stride);
} VT;

struct Obj {
    VT *vtbl;
    int32_t unk4;
    uint32_t n;
    int32_t unk0c;
    uint8_t *base;
};

int32_t func_02070af8(Obj *this, uint32_t a, uint8_t *b, uint32_t c)
{
    uint32_t n = this->n;
    uint32_t ac;
    uint32_t i;
    uint32_t first;
    uint32_t last;
    uint32_t lim;

    first = (uint32_t)func_0209a978(a, n);
    ac = a + c;
    last = (uint32_t)func_0209a978(n + ac - 1, n);
    i = first;
    if (i != last) {
    lim = last - 1;
    do {
        uint32_t startOff;
        uint32_t nn;
        uint32_t endOff;
        uint32_t len;

        if (i == first) {
            startOff = (uint32_t)(func_0209a978(a, this->n) >> 32);
        } else {
            startOff = 0;
        }
        nn = this->n;
        if (i == lim) {
            endOff = (uint32_t)(func_0209a978(nn + ac - 1, nn) >> 32) + 1;
        } else {
            endOff = nn;
        }
        len = endOff - startOff;

        if (this->vtbl->f18(this, i * nn, this->base, nn) == 0) {
            return 0;
        }
        if (func_02090410(b, this->base + startOff, len) != 0) {
            func_02084ca4(b, this->base + startOff, len);
            if (this->vtbl->f1c(this, i * nn, this->base, nn) == 0) {
                return 0;
            }
        }
        b += len;
        i++;
    } while (i != last);
    }
    return 1;
}
