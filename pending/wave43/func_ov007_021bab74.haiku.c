#include "ffc/types.h"

typedef struct {
    uint32_t w;
    uint32_t h;
} Size;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    Size sz;
    uint32_t obj[3];
} Local;

extern void func_02084b2c(void *dst, int val, uint32_t size);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021bcf08(void *heap, void *a, void *b, void *c, void *d, void *e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *obj, void *arg);
extern uint32_t func_0201a3a0(void *object, const void *third);
extern void *func_0203bd50(Size sz, void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void *func_ov001_0218dde0(uint8_t *p, int n);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern uint8_t data_ov007_021c784c[];
extern Pair data_ov007_021c7844;

void func_ov007_021bab74(uint8_t *p)
{
    Local l;
    void *node;
    void *r;

    func_02084b2c(p + 0xd8, 0, 0x35a0);
    node = func_0205681c(0x2e4);
    if (node != 0) {
        node = func_ov007_021bcf08(node, p, p + 0xcc, p + 0xd8, p + 0x38bc, p + 0x38b7,
                                   *(uint32_t *)(p + 0xbc));
    }
    func_02056bc0(p + 0x14, node);

    r = func_020159c8(data_020b8e44, 0x152);
    func_02005988(l.obj, r);
    func_0201a3a0(l.obj, data_ov007_021c784c);

    l.sz.w = 0x80;
    l.sz.h = 0x60;
    node = func_0203bd50(l.sz, l.obj, 4, 2, 0);
    func_02056bc0(func_ov001_0218dde0(p, 3), node);

    *(Pair *)(p + 0xb0) = data_ov007_021c7844;

    func_020059cc(l.obj);
}
