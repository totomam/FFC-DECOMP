#include "ffc/types.h"

extern int32_t func_02084ca4(void *dst, void *src, int32_t n);

typedef struct {
    uint8_t pad[0x1c];
    void **obj;
    volatile int32_t f20;
    int32_t f24;
    int32_t f28;
} S;

typedef void (*VFn)(void *self, int32_t a, void *b);

void func_02065f10(S *self, int32_t a1, void *a2) {
    uint8_t buf[0x100];

    ((VFn)(*(void ***)self->obj)[20])(self->obj, a1 - self->f24, buf);
    func_02084ca4(a2, buf + self->f20, self->f28 - self->f20);
    ((VFn)(*(void ***)self->obj)[21])(self->obj, a1 - self->f24, buf);
}
