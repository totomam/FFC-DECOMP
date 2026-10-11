#include "ffc/types.h"

extern void *func_ov007_0219b904(void *p, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c2c0c[2];

typedef struct {
    uint8_t pad[0x12];
    uint8_t flag;
} Sub;

typedef struct {
    uint8_t pad[0x14];
    Sub sub;
} Outer;

void func_ov007_0219b8d4(Outer *p)
{
    uint32_t *d;
    void *node;

    p->sub.flag = (uint8_t)((p->sub.flag & ~0xffu) | 1u);

    d = data_ov007_021c2c0c;
    node = func_ov007_0219b904(p, d[0], d[1]);
    func_02056bc0(&p->sub, node);
}
