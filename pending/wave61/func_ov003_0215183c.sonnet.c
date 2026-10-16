#include "ffc/types.h"
typedef void (*Fn)(void*);
extern void *data_020b93b8;
extern void *func_0201c9ac(void *a, int b);
extern void func_02056bf4(void *a);
extern void func_ov003_021516d4(void *a, uint32_t b);
void func_ov003_0215183c(uint8_t *p) {
    void *r = func_0201c9ac(data_020b93b8, 0x48);
    if (*(void **)(p + 0xa0) != r) {
        void *t = *(void **)(p + 0x84);
        if (t != 0) {
            void *o;
            func_02056bf4(p + 0x48);
            o = *(void **)(p + 0x84);
            if (o != 0) { if (o != 0) (*(Fn **)o)[1](o); *(void **)(p + 0x84) = 0; }
        }
        func_ov003_021516d4(p, *(uint32_t *)(p + 0x9c));
    }
}
