#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020af210[];
extern Pair data_020af300;
extern Pair data_020af308;

void func_02040dc0(void *obj)
{
    uint8_t *p = (uint8_t *)obj;

    if (*(uint32_t *)(p + 0x8c) == 0xFFFFFFFFu) {
        uint32_t *n = func_0205681c(0x88);
        if (n != 0) {
            uint32_t v = *(uint32_t *)(p + 0x88);
            uint32_t zero = 0;
            func_02056c9c(n, 0);
            n[0] = (uint32_t)data_020af210;
            *(uint32_t *)((uint8_t *)n + 0x80) = v;
            *(uint32_t *)((uint8_t *)n + 0x84) = zero;
        }
        func_02056bc0(p + 0x14, n);
        *(Pair *)(p + 0x80) = data_020af300;
        return;
    }
    *(Pair *)(p + 0x80) = data_020af308;
}
