#include "ffc/types.h"

extern int data_ov003_0217bcf8;
extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_02056db0(void *p);

typedef struct Obj {
    void *vtbl;
    char pad[0x88 - 4];
    void *f88;
} Obj;

Obj *func_ov003_021779b8(Obj *self) {
    int i;
    void *p;

    self->vtbl = &data_ov003_0217bcf8;
    p = self->f88;
    if (p == 0) {
        goto L28;
    }
    if (p != 0) {
        func_0205d620(p);
        func_02056844(p);
        self->f88 = 0;
    }
L28:
    for (i = 0; i < 5; i++) {
        int off = i * 8;
        if (*(void **)((uint8_t *)self + off + 0xf4) != 0) {
            p = *(void **)((uint8_t *)self + off + 0xf8);
            if (p != 0) {
                func_0205d620(p);
                func_02056844(p);
                *(void **)((uint8_t *)self + off + 0xf8) = 0;
            }
        }
    }
    func_02056db0(self);
    func_02056844(self);
    return self;
}
