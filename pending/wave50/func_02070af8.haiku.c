#include "ffc/types.h"

extern uint32_t func_0209a978(uint32_t a, uint32_t b);
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
    uint32_t ac = a + c;
    uint32_t i;
    uint32_t first;
    uint32_t last;
    uint32_t lim;

    first = func_0209a978(a, n);
    last = func_0209a978(ac + n - 1, n);
    lim = last - 1;

    for (i = first; i != last; i++) {
        uint32_t startOff = 0;
        uint32_t endOff = n;
        uint32_t len;

        if (i == first) {
            startOff = a % n;
        }
        if (i == lim) {
            endOff = ((ac + n - 1) % n) + 1;
        }
        len = endOff - startOff;

        if (this->vtbl->f18(this, i * n, this->base, n) == 0) {
            return 0;
        }
        if (func_02090410(b, this->base + startOff, len) != 0) {
            func_02084ca4(b, this->base + startOff, len);
            if (this->vtbl->f1c(this, n * i, this->base, n) == 0) {
                return 0;
            }
        }
        b += len;
    }
    return 1;
}
