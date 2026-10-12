#include "ffc/types.h"

extern void *func_02056dd4(void);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern void func_02060564(void *a, uint32_t b, uint32_t c);
extern uint32_t data_0209e088;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov004_02159684;

void func_ov004_0214e41c(void *self) {
    uint8_t *p = (uint8_t *)self;
    if (*(p + 0x90) == 0) {
        void *r4 = func_02056dd4();
        uint32_t r1 = func_0209a978(*(uint32_t *)(p + 0x8c) << 4, data_0209e088);
        func_02060564(*(void **)((uint8_t *)r4 + 0x20), r1, 0x10);
    }
    {
        int32_t n = (int32_t)*(uint32_t *)(p + 0x8c) - 1;
        *(int32_t *)(p + 0x8c) = n;
        if (n <= 0) {
            void **obj = *(void ***)(p + 0x88);
            void **vtbl = (void **)*obj;
            ((void (*)(void *))vtbl[11])(obj);
            *(Pair *)(p + 0x80) = data_ov004_02159684;
        }
    }
}
