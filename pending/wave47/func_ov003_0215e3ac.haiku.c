#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
} S3;

extern void func_02056c4c(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov003_0217a314[];

void func_ov003_0215e3ac(uint8_t *a, uint32_t b, uint32_t c, uint32_t d)
{
    uint8_t *node;
    uint32_t irq;
    uint16_t old;
    uint8_t *anchor;
    struct { uint32_t pad; S3 v; } frame;

    func_02056c4c(*(void **)(a + 0xb8));
    node = (uint8_t *)func_0205681c(0x54);
    if (node != 0) {
        frame.v = *(S3 *)(a + 0xe8);
        *(uint32_t *)(node + 0xc) &= ~0xffu;
        node[0x13] = 0;
        node[0x14] = 0;
        node[0x15] = 0;
        *(int32_t *)(node + 0x1c) = -1;
        *(int32_t *)(node + 0x24) = -1;
        *(uint32_t *)(node + 0x2c) = 1;
        *(uint32_t *)(node + 0x30) = 0;
        *(void **)node = data_ov003_0217a314;
        *(S3 *)(node + 0x34) = frame.v;
        *(uint32_t *)(node + 0x40) = b;
        *(uint32_t *)(node + 0x44) = 0;
        *(uint32_t *)(node + 0x48) = 0;
        *(uint32_t *)(node + 0x4c) = 0;
        node[0x50] = 0;

        irq = 1;
        if (a != 0) {
            old = *(volatile uint16_t *)0x4000208;
            *(volatile uint16_t *)0x4000208 = 0;
            if (old == 0) {
                irq = 0;
            }
            anchor = a;
            if (a != 0) {
                anchor = a + 0x98;
            }
            if (*(void **)anchor != 0) {
                *(void **)(*(uint8_t **)anchor + 4) = node + 0x44;
            }
            *(void **)(node + 0x44) = *(void **)anchor;
            *(void **)(node + 0x48) = anchor;
            *(void **)anchor = node + 0x44;
            *(void **)(node + 0x4c) = *(void **)(anchor + 8);
            (void)*(volatile uint16_t *)0x4000208;
            *(volatile uint16_t *)0x4000208 = (uint16_t)irq;
        }

        *(uint32_t *)(node + 0x1c) = 1u << 12;
        *(uint32_t *)(node + 0x24) = c << 1;
        if (node[0x15] != 0) {
            if ((c << 1) == 0) {
                *(uint32_t *)(node + 0x1c) = 1;
            } else {
                *(uint32_t *)(node + 0x1c) = c << 5;
            }
        }
        *(uint32_t *)(node + 0x30) = d;
    }
    func_02056bc0(*(void **)(a + 0xb8), node);
}
