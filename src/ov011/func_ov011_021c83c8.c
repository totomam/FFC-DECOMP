#include "ffc/types.h"

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct Obj {
    uint8_t pad0[0xc4];
    uint32_t a[5];
    uint32_t b[2];
    uint8_t pad1[0xfc - 0xe0];
    uint32_t c[5];
    uint8_t pad2[0x3a8 - 0x110];
    uint32_t last;
    uint32_t state;
    uint8_t pad3[0x3b5 - 0x3b0];
    uint8_t flag;
} Obj;

extern void func_ov011_021c94bc(void *self, uint8_t idx);
extern void func_ov011_021c7df4(void *self, uint8_t idx);
extern int func_ov011_021c84b8(void *self, uint8_t idx);
extern void func_ov011_021c8684(void *self, uint8_t idx);
extern void *func_ov011_021c8478(void *self, Pair p);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov011_021cbd6c[];

void func_ov011_021c83c8(void *p0, uint32_t arg) {
    Obj *self = (Obj *)p0;
    uint8_t i;
    for (i = 0; i < 5; i++) {
        if (arg == self->a[i]) {
            func_ov011_021c94bc(self, i);
        }
    }
    for (i = 0; i < 2; i++) {
        if (arg == self->b[i]) {
            func_ov011_021c7df4(self, i);
        }
    }
    for (i = 0; i < 5; i++) {
        if (arg == self->c[i]) {
            if (func_ov011_021c84b8(self, i) != 0) {
                return;
            }
            if (self->state == 1) {
                if (i == self->last) {
                    return;
                }
                func_ov011_021c8684(self, i);
                return;
            }
            if (self->flag == 0) {
                return;
            }
            self->last = i;
            {
                void *n = func_ov011_021c8478(self, *(Pair *)data_ov011_021cbd6c);
                func_02056bc0((char *)self + 0x14, n);
            }
            return;
        }
    }
}
