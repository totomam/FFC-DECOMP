#include "ffc/types.h"

typedef struct { uint32_t w, h; } WH;
extern void func_02056c4c(void *obj);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t arg);
extern void func_02005988(void *obj, uint32_t arg);
extern void *func_02033094(void *a, void *b, uint32_t c, WH d, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;

typedef struct {
    uint8_t pad[0xf8];
    void *f8;
    volatile uint32_t cnt;
} FfcObj;

void func_ov013_021bcad4(FfcObj *self)
{
    uint32_t old = self->cnt;
    self->cnt = self->cnt + 1;
    if (old == 0) {
        uint32_t loc[3];
        void *node;
        func_02056c4c(self->f8);
        uint32_t z = 0;
        int ran = 0;
        node = func_0205681c(0xa4);
        if (node != 0) {
            WH d;
            d.w = 0x80;
            d.h = 0x60;
            func_02005988(loc, func_020159c8(data_020b8e44, 7 << 6));
            node = func_02033094(node, loc, 1, d, 4, z);
            ran = 1;
        }
        func_02056bc0(self->f8, node);
        if (ran) {
            func_020059cc(loc);
        }
    }
}
