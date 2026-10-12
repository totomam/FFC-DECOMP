#include "ffc/types.h"

extern void func_0200a630(void *obj, void *data);
extern void func_ov007_021a3d84(uint32_t a, uint32_t b, void *c);
extern void *func_0200a678(void *object);
extern uint32_t func_0206d3b4(void *obj);
extern void *func_0206cd68(void *obj);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov007_021c41c4[];

void func_ov007_021a3d24(uint8_t *p)
{
    uint8_t buf[12];
    uint32_t i;
    uint32_t off = 0x104;
    uint32_t r4;
    void *node;
    uint8_t *q;

    for (i = 0; i < 9; i++) {
        func_0200a630(buf, data_ov007_021c41c4);
        func_ov007_021a3d84(*(uint32_t *)(p + i * 4 + off), 0, buf);
        func_0200a678(buf);
    }

    r4 = func_0206d3b4(*(void **)(p + 0xf0));
    node = func_0206cd68(*(void **)(p + 0xf0));
    q = p + 0x14;
    func_02056bc0(q, node);
    func_02056bc0(q, (void *)r4);
}
