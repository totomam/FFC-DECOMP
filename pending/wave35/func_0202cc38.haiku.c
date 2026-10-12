#include "ffc/types.h"

extern void func_02022eb8(uint32_t);
extern void func_0202ae9c(void *);
extern void func_02056844(void *);
extern uint8_t data_020ad9e8;

void *func_0202cc38(void *a)
{
    uint32_t *self = (uint32_t *)a;
    int i;

    *(uint32_t *)a = (uint32_t)&data_020ad9e8;
    for (i = 0; i < 45; i++) {
        if (self[0x175 + i] != 0) {
            func_02022eb8(self[12]);
            if (self[0x175 + i] != 0) {
                void **obj = (void **)self[0x175 + i];
                void (**vt)(void *) = (void (**)(void *))*obj;
                vt[1](obj);
            }
            self[0x175 + i] = 0;
        }
    }
    func_0202ae9c(a);
    func_02056844(a);
    return a;
}
