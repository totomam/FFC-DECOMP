#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0203919c(void *dst, uint32_t v);
extern uint32_t func_0204f7ec(const void *object);
extern void func_02056bc0(void *object, void *node);
extern void func_020059cc(void *object);
extern void *func_02041d68(void *a, uint32_t b, uint32_t c);
extern void *data_0213df18;
extern uint32_t data_020afcd0[2];

typedef struct { uint32_t x; uint32_t y; } Pair;
extern void *func_02032d7c(void *a, uint32_t b, Pair c, void *e, uint32_t f, uint32_t g);

typedef struct {
    Pair ab;
    uint32_t buf[3];
} Loc;

void func_02048214(uint8_t *self)
{
    Loc loc;
    void *r6;
    void *node;
    int flag = 0;
    uint32_t *q;

    r6 = func_0205681c(0xb0);
    if (r6 != 0) {
        func_0203919c(loc.buf, 0x7595);
        loc.ab.x = 0x80;
        loc.ab.y = 0x60;
        flag = 1;
        r6 = func_02032d7c(r6, func_0204f7ec(data_0213df18), loc.ab, loc.buf, 4, 0);
    }
    func_02056bc0(self + 0x14, r6);
    if (flag) {
        func_020059cc(loc.buf);
    }
    node = func_0205681c(0x94);
    if (node != 0) {
        node = func_02041d68(node, *(uint32_t *)(self + 0x80), 5);
    }
    func_02056bc0(self + 0x14, node);
    *(Pair *)(self + 0x84) = *(Pair *)data_020afcd0;
}
