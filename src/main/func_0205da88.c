#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x10];
    void *a;
    uint32_t b;
    uint8_t flag;
} Obj;

extern void func_02052c94(void *p, uint32_t idx);
extern void *func_02052d90(const void *mar, uint32_t index);

void *func_0205da88(Obj *self)
{
    if (self->a != 0) {
        if (self->flag == 0) {
            self->flag = 1;
            func_02052c94(self->a, self->b);
        }
    }
    return func_02052d90(self->a, self->b);
}
