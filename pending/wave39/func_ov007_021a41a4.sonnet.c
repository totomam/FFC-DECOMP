#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern void func_02056c9c(void *obj, uint32_t zero);
extern void func_02087620(void *object);
extern char data_020ae6d4[];
extern char data_ov007_021c3dc0[];
extern char data_ov007_021c3ddc[];
extern uint32_t data_ov007_021c41c8[];

void *func_ov007_021a41a4(void *p, uint32_t a, uint32_t b)
{
    uint8_t *base = (uint8_t *)p;
    uint32_t *w, *q;

    func_02056c9c(p, 0);

    w = (uint32_t *)(base + 0x80);
    *(void **)(base + 0x80) = data_020ae6d4;
    w[1] = 0;
    w[2] = 0;
    w[3] = 0;
    q = w + 4;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    func_02087620(w + 7);

    *(void **)base = data_ov007_021c3dc0;
    *(void **)(base + 0x80) = data_ov007_021c3ddc;
    *(uint32_t *)(base + 0xc0) = a;
    *(uint32_t *)(base + 0xc4) = b;
    *(S *)(base + 0xb8) = *(S *)data_ov007_021c41c8;

    return p;
}
