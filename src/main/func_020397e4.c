#include "ffc/types.h"

extern void func_02039778(void *p);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    void *w[7];
    int32_t count;
} Self;

void func_020397e4(void *self0, void *val)
{
    Self *self = (Self *)self0;

    *(void **)((char *)self + (self->count << 2) + 4) = val;
    if (self->count > 0) {
        func_02039778(*(void **)((char *)self + (self->count << 2)));
        func_02056bc0((char *)*(void **)((char *)self + (self->count << 2)) + 0x14, val);
    } else {
        func_02056bc0((char *)self->w[0] + 0x14, val);
    }
    self->count = self->count + 1;
}
