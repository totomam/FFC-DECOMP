#include "ffc/types.h"

extern void func_02056c4c(void *obj);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t arg);
extern void func_02005988(void *obj, uint32_t arg);
extern void *func_02033094(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;

typedef struct {
    uint8_t pad[0xf8];
    void *f8;
    uint32_t cnt;
} FfcObj;

void func_ov013_021bcad4(FfcObj *self)
{
    uint32_t loc[3];
    uint32_t old;
    void *node = 0;
    int ran = 0;

    old = self->cnt;
    self->cnt = old + 1;
    if (old != 0) {
        return;
    }
    func_02056c4c(self->f8);
    node = func_0205681c(0xa4);
    if (node != 0) {
        uint32_t a = 0x80;
        uint32_t b = 0x60;
        func_02005988(loc, func_020159c8(data_020b8e44, 7 << 6));
        node = func_02033094(node, loc, 1, a, b, 4, 0);
        ran = 1;
    }
    func_02056bc0(self->f8, node);
    if (ran) {
        func_020059cc(loc);
    }
}
