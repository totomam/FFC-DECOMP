#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t arg);
extern void *func_02056aec(void);
extern uint8_t data_ov003_0217b4cc[];

void func_ov003_02171ab8(void *p)
{
    uint8_t *self = (uint8_t *)p;

    if (*(uint32_t *)(self + 0x84) != 1) {
        void **obj = *(void ***)(self + 0x88);
        void *r = ((void *(*)(void *, uint32_t, void *))((void **)*obj)[2])(
            obj, *(uint32_t *)(self + 0x80), self + 0x84);
        if (r != 0) {
            func_02056bc0(self + 0x14, r);
            (*(uint32_t *)(self + 0x80))++;
            return;
        }
        {
            void **n = (void **)func_0205681c(0x80);
            if (n != 0) {
                func_02056c9c(n, 0);
                *n = data_ov003_0217b4cc;
            }
            func_02056bc0(self + 0x14, n);
        }
    } else {
        void *n = func_02056aec();
        func_02056bc0(self + 0x14, n);
    }
}
