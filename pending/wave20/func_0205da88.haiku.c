#include "ffc/types.h"

extern void func_02052c94(void *obj, uint32_t idx);
extern void *func_02052d90(const void *mar, uint32_t index);

typedef struct {
    uint32_t pad[4];
    void *p10;
    uint32_t v14;
    uint8_t b18;
} Obj;

void func_0205da88(Obj *self) {
    if (self->p10 != 0 && self->b18 == 0) {
        self->b18 = 1;
        func_02052c94(self->p10, self->v14);
    }
    func_02052d90(self->p10, self->v14);
}
