#include "ffc/types.h"

extern void func_02093bc8(void *a, void *b);
extern void *func_0205681c(uint32_t n);
extern void *func_ov007_021bc148(void *obj, void *a, void *b, int c, void *d);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov007_021c6da8[];
extern uint8_t data_ov007_021c6db4[];
extern uint32_t data_ov007_021c6da0[];

typedef struct { uint32_t a; uint32_t b; } Pair2;

void func_ov007_021b6db8(uint8_t *p) {
    void *obj;
    void *node;
    int i;

    if (*(int8_t *)(p + 0x328)) {
        func_02093bc8(p + 0xd8, data_ov007_021c6da8);
    }
    if (*(int8_t *)(p + 0x329)) {
        func_02093bc8(p + 0xf4, data_ov007_021c6db4);
    }
    for (i = 0; i < 5; i++) {
        if (*(int8_t *)(p + 0x32a + i)) {
            func_02093bc8(p + 0x160 + i * 0x22, data_ov007_021c6da8);
        }
    }
    *(uint8_t *)(p + 0x304) = 0;
    obj = func_0205681c(0xbc);
    node = obj;
    if (obj) {
        node = func_ov007_021bc148(obj, p, p + 0xc8, 1, p + 0x304);
    }
    func_02056bc0(p + 0x14, node);
    {
        Pair2 tmp = *(Pair2 *)data_ov007_021c6da0;
        *(Pair2 *)(p + 0xb0) = tmp;
    }
}
