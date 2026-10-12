#include "ffc/types.h"

extern char data_020ad958[];
extern void func_02022eb8(uint32_t x);
extern void func_0202ae9c(void *p);

void *func_0202bf18(void *a) {
    uint8_t *p = (uint8_t *)a;
    uint32_t i;
    uint32_t koff = 0x19C;
    uint32_t cofs = 0xB20;

    *(void **)p = data_020ad958;
    for (i = 0; i < *(uint32_t *)(p + cofs); i++) {
        if (*(void **)(p + i * 4 + koff)) {
            func_02022eb8(*(uint32_t *)(p + 0x30));
            if (*(void **)(p + i * 4 + koff)) {
                void *o = *(void **)(p + i * 4 + koff);
                void **vt = *(void ***)o;
                ((void (*)(void *))vt[1])(o);
            }
            *(void **)(p + i * 4 + koff) = 0;
        }
    }
    func_0202ae9c(a);
    return a;
}
