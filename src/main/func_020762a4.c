#include "ffc/types.h"

extern void func_02076258(void *obj);
extern void *func_0206eb14(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_02075610(void *obj, void *a, void *b);

void func_020762a4(void *self) {
    uint8_t *p = (uint8_t *)self;
    void *n;

    if (*(void **)(p + 0x88) != 0) {
        func_02076258(self);
    }
    func_02056bc0(p + 0x14, func_0206eb14());
    n = func_0205681c(0x54);
    if (n != 0) {
        n = func_02075610(n, *(void **)(p + 0x80), *(void **)(p + 0x84));
    }
    *(void **)(p + 0x88) = n;
    func_02056bc0(*(void **)(p + 0x8c), n);
}
