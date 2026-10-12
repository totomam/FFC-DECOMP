#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t arg);
extern void func_02084ca4(void *src, void *dst, uint32_t n);
extern void *func_0206ce28(void *src, void *dst);
extern void func_02056bc0(void *object, void *node);
extern char data_020b1d20[];
extern void *data_0213e178;

void *func_0206d120(void *a0, void *a1, uint32_t a2, uint16_t a3, uint32_t a4)
{
    uint8_t *r4 = func_0205681c(0xfc);
    if (r4 != 0) {
        func_02056c9c(r4, 0);
        *(void **)r4 = data_020b1d20;
        *(uint32_t *)(r4 + 0xf8) = a4;
        if (a1 != 0) {
            func_02084ca4(a1, r4 + 0x80, a2);
        }
        *(uint32_t *)(r4 + 0xf0) = a2;
        if (a3 != 0) {
            *(uint16_t *)(r4 + 0xf4) = a3;
        } else {
            void *v = func_0206ce28(data_0213e178, r4 + 0xf4);
            func_02056bc0(r4 + 0x14, v);
        }
    }
    return r4;
}
