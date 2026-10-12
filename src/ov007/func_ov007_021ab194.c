#include "ffc/types.h"

extern uint8_t data_ov007_021c4ea4[];
extern uint8_t data_ov007_021c4eb0[];
extern uint32_t data_ov007_021c4e9c[2];
extern void *data_020b8e44;
extern void *data_020b93b8;

extern void func_02076248(void *s, uint32_t v);
extern void func_020762a4(void *a);
extern void func_0201cf34(void *a, void *b);
extern void func_02093bc8(void *a, void *b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b0dbc(void *a, void *b, uint32_t c, void *d, void *e, uint32_t f, void *g);
extern void *func_ov001_0218dde0(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *func_0200d13c(void *a);

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov007_021ab194(uint8_t *p)
{
    uint8_t buf[0x98];
    void *node;
    void **gp;

    func_02076248(data_ov007_021c4ea4, 0x56444545);
    gp = &data_020b8e44;
    func_020762a4(*(void **)*gp);
    func_0201cf34(data_020b93b8, buf);
    func_02093bc8(p + 0xc0, buf);

    node = func_0205681c(0xbc);
    if (node) {
        node = func_ov007_021b0dbc(node, *(void **)*gp, *(uint32_t *)(p + 0xbc),
                                   p + 0xd4, p + 0xc0, 0x30b9, data_ov007_021c4eb0);
    }
    func_02056bc0(func_ov001_0218dde0(p, 0), node);

    node = func_0205681c(0x80);
    if (node) {
        node = func_0200d13c(node);
    }
    func_02056bc0(*(void **)(p + 0xdc), node);

    {
        Pair pr = *(Pair *)data_ov007_021c4e9c;
        *(Pair *)(p + 0xb0) = pr;
    }
}
