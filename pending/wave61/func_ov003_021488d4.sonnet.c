#include "ffc/types.h"
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0214ed00(void *obj, void *p, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
typedef struct S { uint8_t pad0[0x178]; uint32_t f178; uint8_t pad1[0x218-0x17c]; void *arr[20]; void *f268; } S;
void func_ov003_021488d4(S *self, uint32_t idx) {
    void *o = func_0205681c(0xa8);
    if (o != 0) {
        o = func_ov003_0214ed00(o, self, self->f178, idx);
    }
    void **p = self->arr; p += idx; *p = o;
    func_02056bc0(self->f268, o);
}
