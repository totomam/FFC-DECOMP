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

static inline void del(void *p) {
    if (p != 0) {
        func_0205d620(p);
        func_02056844(p);
    }
}

Obj *func_ov003_021779b8(Obj *self) {
    uint32_t i;
    self->vtbl = &data_ov003_0217bcf8;
    if (self->f88 != 0) {
        del(self->f88);
        self->f88 = 0;
    }
    for (i = 0; i < 5; i++) {
        uint32_t off = i * 8;
        if (*(void **)((uint8_t *)self + off + 0xf4) != 0) {
            void *p = *(void **)((uint8_t *)self + off + 0xf8);
            if (p != 0) {
                del(p);
                *(void **)((uint8_t *)self + off + 0xf8) = 0;
            }
        }
    }
    func_02056db0(self);
    func_02056844(self);
    return self;
}
