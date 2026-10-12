#include "ffc/types.h"

extern uint32_t data_ov014_02155aa8;
extern void func_02056858(void *p);
extern void func_02052d3c(void *p, uint32_t x);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void func_02056844(void *object);

typedef struct {
    void *vtbl;      /* 0x00 */
    uint32_t f4;     /* 0x04 embedded object */
    void *f8;        /* 0x08 */
    uint32_t fc;     /* 0x0c */
    uint8_t f10;     /* 0x10 */
    uint8_t pad11[3];
    void *f14;       /* 0x14 */
    void *f18;       /* 0x18 */
    void *f1c;       /* 0x1c */
} func_ov014_obj;

void *func_ov014_02147d90(void *object) {
    func_ov014_obj *self = (func_ov014_obj *)object;

    self->vtbl = &data_ov014_02155aa8;
    if (self->f14 != 0) {
        func_02056858(self->f14);
        self->f14 = 0;
    }
    if (self->f18 != 0) {
        func_02056858(self->f18);
        self->f18 = 0;
    }
    if (self->f1c != 0) {
        func_02056858(self->f1c);
        self->f1c = 0;
    }
    if (self->f8 != 0) {
        if (self->f10 != 0) {
            func_02052d3c(self->f8, self->fc);
        }
        func_02052c04(self->f8);
    }
    func_02053290(&self->f4);
    func_02056844(self);
    return self;
}
