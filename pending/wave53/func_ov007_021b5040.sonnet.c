#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, void *val);
extern void func_020059cc(void *object);
extern void *func_02033094(void *a, void *b, uint32_t c, Pair d, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02056aec(void *node);
extern void *func_02008ce8(void *a, void *b, uint32_t c, void *d);
extern uint32_t func_ov007_0219b460(void *a, Pair p, uint32_t c);
extern void *data_020b8e44;
extern void *data_020b93b8;
extern Pair data_ov007_021c695c;
extern Pair data_ov007_021c6964;

void func_ov007_021b5040(uint8_t *self)
{
    uint32_t f = 0;
    void *a = 0;
    void *obj;
    void *d;
    uint32_t c;
    uint32_t buf[2];

    obj = func_0205681c(0xa4);
    if (obj != 0) {
        Pair wh;
        wh.a = 0x80; wh.b = 0x60;
        func_02005988(buf, func_020159c8(data_020b8e44, 0x36));
        obj = func_02033094(obj, buf, f, wh, 4, f);
        a = (void *)1;
    }
    if (a != 0) {
        func_020059cc(buf);
    }
    func_02056bc0(self + 0x48, obj);
    c = func_02056aec(obj);
    a = func_0205681c(0x94);
    if (a != 0) {
        a = func_02008ce8(a, obj, 0, *(void **)(self + 0x98));
    }
    f = func_ov007_0219b460(data_020b93b8, data_ov007_021c695c, 1);
    d = func_0205681c(0x94);
    if (d != 0) {
        d = func_02008ce8(d, obj, 0, *(void **)(self + 0x98));
    }
    func_02056bc0(self + 0x14, d);
    func_02056bc0(self + 0x14, (void *)f);
    func_02056bc0(self + 0x14, a);
    func_02056bc0(self + 0x14, (void *)c);
    *(Pair *)(self + 0xb0) = data_ov007_021c6964;
}
