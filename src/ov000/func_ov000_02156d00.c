#include "ffc/types.h"

extern void func_02084ca4(void *a, void *b, uint32_t n);

typedef struct {
    uint8_t *base;
    uint32_t count;
    uint8_t *end;
    uint32_t off;
} Buf;

uint32_t func_ov000_02156d00(uint8_t *heap, Buf *buf, int32_t size) {
    void *(*alloc)(void *, uint32_t) = *(void *(**)(void *, uint32_t))(heap + 0x1010);
    void (*freefn)(void *, void *, uint32_t) = *(void (**)(void *, void *, uint32_t))(heap + 0x1014);
    uint8_t *p;

    if (size <= 0) {
        return 0;
    }
    p = alloc(0, buf->off + size);
    if (p == 0) {
        return 0;
    }
    func_02084ca4(buf->base, p, buf->off);
    freefn(0, buf->base, 0);
    if (p == 0) {
        return 0;
    }
    buf->count += p - buf->base;
    buf->off += size;
    buf->base = p;
    buf->end = p + buf->off;
    return 1;
}
