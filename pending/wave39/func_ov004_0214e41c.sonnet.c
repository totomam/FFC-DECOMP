#include "ffc/types.h"

extern void *func_02056dd4(void);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern void func_02060564(void *a, uint32_t b, uint32_t c);
extern uint32_t data_0209e088;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov004_02159684;
typedef struct { uint8_t pad[0x80]; Pair pos; void **obj; int32_t cnt; uint8_t flag; } S;

void func_ov004_0214e41c(S *self) {
    if (self->flag == 0) {
        void *r4 = func_02056dd4();
        uint32_t r1 = func_0209a978(self->cnt << 4, data_0209e088);
        func_02060564(*(void **)((uint8_t *)r4 + 0x20), r1, 0x10);
    }
    self->cnt = self->cnt - 1;
    if (self->cnt <= 0) {
        void **obj = self->obj;
        ((void (*)(void *))(*(void ***)obj)[11])(obj);
        self->pos = data_ov004_02159684;
    }
}
