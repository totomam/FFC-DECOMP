#include "ffc/types.h"

extern uint32_t func_020338cc(void *p);
extern uint32_t func_020655b8(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *p);

void func_02033b8c(uint8_t *self, void *node) {
    void *a = (void *)func_020655b8(func_020338cc(node));
    func_02056bc0(self + 0x14, a);
    int *p = *(int **)(self + 0xd0);
    if (p != 0) {
        *p = (node == *(void **)(self + 0xc0)) ? 1 : 0;
        void *b = func_02056aec(self);
        func_02056bc0(self + 0x14, b);
    }
}
