#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b28a4[];
extern uint32_t data_020b28ac[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_02076adc(void *self) {
    uint8_t *p = (uint8_t *)self;
    uint32_t r;
    void *obj;
    void **vt;
    uint32_t (*fn)(void *, uint32_t, void *);

    if (*(uint32_t *)(p + 0x94) != 0) {
        if (*(uint32_t *)(p + 0x94) == 1) {
            vt = *(void ***)self;
            r = ((uint32_t (*)(void *, uint32_t))vt[5])(self, 7);

            obj = *(void **)(p + 0x84);
            vt = *(void ***)obj;
            fn = (uint32_t (*)(void *, uint32_t, void *))vt[2];
            r = fn(obj, r, p + 0x94);

            func_02056bc0(p + 0x14, (void *)r);

            *(Pair *)(p + 0x88) = *(Pair *)data_020b28a4;
        }
    } else {
        *(Pair *)(p + 0x88) = *(Pair *)data_020b28ac;
    }
}
