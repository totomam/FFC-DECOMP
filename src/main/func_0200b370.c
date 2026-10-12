#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void func_0200c664(uint32_t);
extern uint32_t func_0205681c(uint32_t);
extern uint32_t func_02031624(uint32_t, uint32_t, S, void *, uint32_t, uint32_t);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020aaffc[];
extern uint32_t data_020ab004[];

void func_0200b370(uint8_t *self)
{
    uint32_t *w = (uint32_t *)self;
    uint32_t r4;
    uint32_t res;

    func_0200c664(w[0x22]);
    if (w[0x54] != 0) {
        r4 = w[0x53];
    } else {
        r4 = 0;
    }
    res = func_0205681c(0x118);
    if (res != 0) {
        res = func_02031624(res, w[0x2a], *(S *)(self + 0xac), self + 0xb4 + 12 * r4,
                            w[0x4b], 0);
    }
    func_02056bc0(self + 0x14, (void *)res);
    if (w[0x54] != 0) {
        *(S *)(self + 0x80) = *(S *)data_020aaffc;
        return;
    }
    *(S *)(self + 0x80) = *(S *)data_020ab004;
}
