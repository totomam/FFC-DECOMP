#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021af508(void *a, void *b, void *c, void *d);
extern void *func_ov001_0218dde0(void *obj, int flag);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c5b00[2];

void func_ov007_021b03dc(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *node = func_0205681c(0xe4);
    if (node != 0) {
        node = func_ov007_021af508(node, s, s + 0xc0, *(void **)(s + 0xb8));
    }
    {
        void *obj = func_ov001_0218dde0(self, 1);
        func_02056bc0(obj, node);
    }
    {
        uint32_t *d = data_ov007_021c5b00;
        uint32_t a = d[0];
        uint32_t b = d[1];
        *(uint32_t *)(s + 0xb0) = a;
        *(uint32_t *)(s + 0xb4) = b;
    }
}
