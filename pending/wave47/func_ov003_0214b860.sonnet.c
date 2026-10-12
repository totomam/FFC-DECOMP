#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov003_0214b758(void *self, uint32_t v);
extern uint32_t func_ov003_0214b958(void *self, Pair pr, uint32_t c);
extern uint32_t func_0203b720(void);
extern uint32_t func_ov003_0214b9a0(void *self, Pair pr, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_021798e4;
extern Pair data_ov003_021798ec;
extern Pair data_ov003_021798f4;
extern Pair data_ov003_021798fc;

void func_ov003_0214b860(uint8_t *self, uint32_t mode, uint32_t a, uint32_t b, uint8_t c, uint8_t d)
{
    uint32_t v1, v2, v3, v4;
    uint8_t *node;
    if (mode <= 1) {
        func_ov003_0214b758(self, 0);
        if (*(uint32_t *)(self + 0x400)) {
            v1 = func_ov003_0214b958(self, data_ov003_021798e4, 0);
            v2 = func_0203b720();
            v3 = func_ov003_0214b9a0(self, data_ov003_021798ec, 1, a, b, a, b, *(uint32_t *)(self + 0x400), 0, 0);
            node = self + 0x14;
            func_02056bc0(node, (void *)v3);
            func_02056bc0(node, (void *)v2);
            func_02056bc0(node, (void *)v1);
        }
    }
    if (mode == 0 || mode == 2) {
        func_ov003_0214b758(self, 1);
        if (*(uint32_t *)(self + 0x404)) {
            v4 = func_ov003_0214b958(self, data_ov003_021798f4, 1);
            v2 = func_0203b720();
            uint32_t t1 = c;
            uint32_t t2 = d;
            v3 = func_ov003_0214b9a0(self, data_ov003_021798fc, 2, t1, t2, t1, t2, *(uint32_t *)(self + 0x404), 0, 0);
            node = self + 0x14;
            func_02056bc0(node, (void *)v3);
            func_02056bc0(node, (void *)v2);
            func_02056bc0(node, (void *)v4);
        }
    }
}
