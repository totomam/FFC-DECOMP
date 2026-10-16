#include "ffc/types.h"
typedef uint64_t QR;
extern QR func_0209a978(uint32_t a, uint32_t b);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_02084ca4(uint8_t *d, const uint8_t *s, uint32_t n);
typedef struct O { int a; int b; uint32_t size; int c; uint8_t *buf; } O;
typedef int (*Fn)(O*, uint32_t, uint8_t*, uint32_t);
int func_02070af8(O *self, uint32_t pos, uint8_t *src, uint32_t n)
{
    uint8_t *buf;
    uint32_t last, first, end, len, end0, i, s, e, sz;
    sz = self->size;
    first = (uint32_t)func_0209a978(pos, sz);
    end0 = pos + n;
    end = (uint32_t)func_0209a978(sz + end0 - 1, sz);
    i = first;
    if (i != end) {
        last = end - 1;
        do {
            if (i == first) s = (uint32_t)(func_0209a978(pos, self->size)>>32); else s = 0;
            sz = self->size;
            if (i == last) e = (uint32_t)(func_0209a978(sz + end0 - 1, sz)>>32) + 1; else e = sz;
            buf = self->buf;
            len = e - s;
            if (!(*(Fn**)self)[6](self, i * sz, buf, sz)) return 0;
            if (func_02090410(src, buf + s, len)) {
                func_02084ca4(src, buf + s, len);
                if (!(*(Fn**)self)[7](self, i * self->size, self->buf, self->size)) return 0;
            }
            src += len;
        } while (++i != end);
    }
    return 1;
}
