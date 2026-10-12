#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_020424e0(void *p);
extern void *func_ov003_021639a0(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;
extern Pair data_020afbd8;

void func_020455c4(void *obj)
{
    uint8_t *o = (uint8_t *)obj;
    if (*(uint32_t *)(o + 0x8c) == 0) {
        void *node = func_0205681c(0x94);
        if (node != 0) {
            void *arg = func_020424e0(*(void **)(o + 0x88));
            node = func_ov003_021639a0(node, arg);
        }
        func_02056bc0(o + 0x14, node);
    }
    *(Pair *)(o + 0x80) = data_020afbd8;
}
