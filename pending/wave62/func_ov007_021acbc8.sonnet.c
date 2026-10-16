#include "ffc/types.h"
typedef void (*Fn)(void*);
extern void func_02069600(void *p);
void func_ov007_021acbc8(uint8_t *self) {
    int i;
    for (i = 0; i < 5; i++) {
        void **slot = (void**)(self + i * 4 + 0xc0);
        if (*slot != 0) {
            void *o;
            func_02069600(self);
            o = *(void**)(self + i * 4 + 0xc0);
            if (o != 0) {
                if (o != 0) (*(Fn**)o)[1](o);
                *(void**)(self + i * 4 + 0xc0) = 0;
            }
        }
    }
}
