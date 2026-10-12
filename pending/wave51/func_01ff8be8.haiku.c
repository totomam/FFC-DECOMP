/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_0213df20;
extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef void (*VFn)(void *);
typedef struct VT {
    void *f0;
    void *f1;
    VFn f2;
    VFn f3;
} VT;

typedef struct Sub {
    VT *vt;
} Sub;

typedef struct Obj {
    VT *vt;
    uint8_t pad04[0x0c];
    uint8_t b10[0x10];
    int8_t s20;
    uint8_t b21[5];
    uint8_t b26;
    uint8_t b27;
    uint32_t w28;
    uint8_t b2c[4];
    uint8_t sub30[0x18];
    uint8_t sub48[0xc];
    int8_t s54;
    uint8_t b55[0x27];
    uint32_t w7c;
} Obj;

void func_01ff8be8(Obj *self)
{
    uint32_t *g = &data_0213df20;
    uint32_t saved = *g;
    uint8_t r6;
    int r7;

    *g = self->w7c;

    r6 = self->b26;
    if (r6 != 0) {
        func_0208763c(self->sub30);
    }

    r7 = (self->w28 == 0);

    if (r6 != 0) {
        func_02087678(self->sub30);
    }

    if (r7 != 0) {
        self->vt->f3(self);
    }

    if (self->s20 == 0) {
        ((Sub *)((uint8_t *)self + 0x14))->vt->f2((uint8_t *)self + 0x14);
    }

    if (self->s54 == 0) {
        ((Sub *)((uint8_t *)self + 0x48))->vt->f2((uint8_t *)self + 0x48);
    }

    *g = saved;
}
