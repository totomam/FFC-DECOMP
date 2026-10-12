#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t zero);
extern void func_02087620(void *object);
extern char data_020ae6d4[];
extern char data_ov007_021c3dc0[];
extern char data_ov007_021c3ddc[];
extern uint32_t data_ov007_021c41c8[];

void *func_ov007_021a41a4(void *p, uint32_t a, uint32_t b)
{
    uint8_t *base = (uint8_t *)p;
    uint32_t *w;

    func_02056c9c(p, 0);

    *(void **)(base + 0x80) = data_020ae6d4;
    w = (uint32_t *)(base + 0x80);
    w[1] = 0;
    w[2] = 0;
    w[3] = 0;
    w[4] = 0;
    func_02087620(base + 0x9c);
    w[5] = 0;
    w[6] = 0;

    *(void **)base = data_ov007_021c3dc0;
    *(void **)(base + 0x80) = data_ov007_021c3ddc;
    *(uint32_t *)(base + 0xc0) = a;
    *(uint32_t *)(base + 0xc4) = b;
    *(uint32_t *)(base + 0xb8) = data_ov007_021c41c8[0];
    *(uint32_t *)(base + 0xbc) = data_ov007_021c41c8[1];

    return p;
}
