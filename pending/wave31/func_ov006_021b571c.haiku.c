#include "ffc/types.h"

extern uint8_t *data_ov006_021bc884;
extern uint8_t *func_ov006_021b3f44(void *);
extern void *func_02086700(int);
extern void func_ov006_021b509c(uint8_t *, uint8_t *);
extern void func_020866dc(void *);

uint8_t *func_ov006_021b571c(uint32_t a0, void *p1, uint32_t p2, uint8_t p3, uint8_t p4)
{
    uint32_t off = a0 << 6;
    uint8_t *obj;
    void *r7;
    uint8_t *node;

    obj = func_ov006_021b3f44(*(void **)(data_ov006_021bc884 + off));
    *(void **)(obj + 8) = p1;
    *(uint32_t *)(obj + 0xc) = p2;
    obj[0x10] = p3;
    obj[0x11] = p4;

    r7 = func_02086700(1);

    node = *(uint8_t **)(data_ov006_021bc884 + off + 0x10);
    for (;;) {
        if (p3 < node[0x10]) {
            func_ov006_021b509c(node, obj);
            break;
        }
        node = *(uint8_t **)(node + 4);
    }

    func_020866dc(r7);
    return obj;
}
