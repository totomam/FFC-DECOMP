#include "ffc/types.h"

typedef struct {
    void (*fn)(void *);
    int32_t flags;
} Inner;

void func_ov009_021a02f0(uint8_t *self) {
    int32_t n = *(int32_t *)(self + 0x8c);
    uint8_t *base = self;
    *(int32_t *)(self + 0x8c) = n + 1;
    Inner *in = (Inner *)(base + 0x80);

    int32_t flags = in->flags;
    int32_t adj = flags >> 1;
    void (*fn)(void *);

    if (flags & 1) {
        uint8_t *obj = *(uint8_t **)(self + adj);
        fn = *(void (**)(void *))(obj + (int32_t)in->fn);
    } else {
        fn = in->fn;
    }
    fn(self + adj);
}
