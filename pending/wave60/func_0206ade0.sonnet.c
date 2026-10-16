#include "ffc/types.h"
extern void func_02054144(int a, void *b);
extern void func_020847b0(void *a);
typedef void (*Fn)(void*);
void func_0206ade0(uint8_t *p) {
    if (*(void**)(p + 0x20) != 0) {
        func_02054144(0, *(void**)(p + 0x20));
        func_020847b0(*(void**)(p + 0x24));
        void *o = *(void**)(p + 0x20);
        if (o != 0) {
            (*(Fn**)o)[1](o);
        }
        *(void**)(p + 0x20) = 0;
    }
}
