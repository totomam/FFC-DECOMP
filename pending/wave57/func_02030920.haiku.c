#include "ffc/types.h"

extern void func_02092878(uint8_t *p, uint8_t *q);
extern void *func_0202b414(void *p);
extern uint32_t func_0202e10c(void *p, uint8_t *q);
extern uint32_t func_02092864(const uint8_t *text);
extern int32_t func_02024928(void *p, uint8_t *q);
extern void func_0202b258(void *a, void *b, int32_t c);

void func_02030920(uint8_t *a, int b) {
    uint32_t flag = 0;
    uint8_t *node;
    int32_t r6;

    if (b == 2) {
        func_02092878(a + 0x459, a + 0x10a);
        func_02092878(a + 0x469, a + 0x13c);
    }

    node = *(uint8_t **)(a + 0x5c);
    while (node != 0) {
        if (func_0202e10c(func_0202b414(node), a + 0x10a) == 0) {
            r6 = -1;
            flag = (uint32_t)node;
            if (func_02092864(a + 0x13c) != 0) {
                r6 = func_02024928(*(void **)(node + 0x34), a + 0x13c);
            }
            func_0202b258(*(void **)(a + 0x8c), node, r6);
            break;
        }
        node = *(uint8_t **)(node + 4);
    }

    if (flag == 0) {
        uint8_t *q = *(uint8_t **)(a + 0x47c);
        if (q != 0) {
            node = *(uint8_t **)(q + 0x5c);
            while (node != 0) {
                if (func_0202e10c(func_0202b414(node), a + 0x10a) == 0) {
                    r6 = -1;
                    if (func_02092864(a + 0x13c) != 0) {
                        r6 = func_02024928(*(void **)(node + 0x34), a + 0x13c);
                    }
                    func_0202b258(*(void **)(a + 0x8c), node, r6);
                    return;
                }
                node = *(uint8_t **)(node + 4);
            }
        }
    }
}
