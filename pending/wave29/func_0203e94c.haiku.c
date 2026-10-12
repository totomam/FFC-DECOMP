#include "ffc/types.h"

extern uint16_t *func_ov003_02155b40(void *p);
extern void *func_0203dd5c(void *obj, int n);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020aef30[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_0203e94c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *q = *(void **)(p + 0xe0);
    if (q != 0) {
        uint16_t *x = func_ov003_02155b40(q);
        *x = 0;
    }
    *(uint32_t *)(p + 0xe4) = 1;
    {
        void *r = func_0203dd5c(self, 15);
        func_02056bc0(p + 0x14, r);
    }
    *(Pair *)(p + 0x80) = *(Pair *)data_020aef30;
}
