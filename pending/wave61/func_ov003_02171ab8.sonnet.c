#include "ffc/types.h"
typedef void *(*Fn)(void*, uint32_t, void*);
typedef struct S { uint8_t pad[0x14]; uint8_t list[0x6c]; uint32_t idx; uint32_t st; void **obj; } S;
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t n);
extern void func_02056c9c(void *p, int a);
extern void *func_02056aec(void);
extern uint32_t data_ov003_0217b4cc;
void func_ov003_02171ab8(S *self) {
    void *o = self->obj;
    if (self->st != 1) {
        void *r = (*(Fn**)o)[2](o, self->idx, &self->st);
        if (r != 0) {
            func_02056bc0(self->list, r);
            self->idx = self->idx + 1;
            return;
        }
        {
            uint32_t *p = (uint32_t*)func_0205681c(0x80);
            if (p != 0) {
                func_02056c9c(p, 0);
                *p = (uint32_t)&data_ov003_0217b4cc;
            }
            func_02056bc0(self->list, p);
            return;
        }
    }
    func_02056bc0(self->list, func_02056aec());
}
