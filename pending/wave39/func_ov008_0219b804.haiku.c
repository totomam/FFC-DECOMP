#include "ffc/types.h"

extern void func_02069694(void *a, void *b, int c);
extern void func_02069600(void *a, void *b);

void func_ov008_0219b804(void *self) {
    uint8_t *s = (uint8_t *)self;
    uint8_t i;
    func_02069694(self, *(void **)(s + 0xc4), 4);
    for (i = 0; i < *(uint32_t *)(s + 0xd0); i++) {
        func_02069600(self, ((void **)*(void **)(s + 0xcc))[i]);
        if (((void **)*(void **)(s + 0xcc))[i] != 0) {
            void **o = ((void **)*(void **)(s + 0xcc))[i];
            if (o != 0) {
                ((void (*)(void *))((void **)*o)[1])(o);
            }
            ((void **)*(void **)(s + 0xcc))[i] = 0;
        }
    }
}
