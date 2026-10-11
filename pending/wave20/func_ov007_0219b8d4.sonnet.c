#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void *func_ov007_0219b904(void *p, S s);
extern void func_02056bc0(void *object, void *node);
extern S data_ov007_021c2c0c;

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
    void *node;
    p->sub.flag = (uint8_t)((p->sub.flag & ~0xffu) | 1u);
    node = func_ov007_0219b904(p, data_ov007_021c2c0c);
    func_02056bc0(&p->sub, node);
}
