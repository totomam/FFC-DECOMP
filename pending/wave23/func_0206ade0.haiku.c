#include "ffc/types.h"

extern void func_02054144(uint32_t arg);
extern void func_020847b0(void *p);

void func_0206ade0(uint8_t *r4)
{
    if (*(void **)(r4 + 0x20) != 0) {
        func_02054144(0);
        func_020847b0(*(void **)(r4 + 0x24));
        void *o = *(void **)(r4 + 0x20);
        if (o != 0) {
            void **vt = *(void ***)o;
            ((void (*)(void *))vt[1])(o);
        }
        *(void **)(r4 + 0x20) = 0;
    }
}
