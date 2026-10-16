#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
typedef void (*Fn)(void*);
extern uint8_t *func_02056dd4(void);
extern uint32_t func_0209a978(int32_t a, uint32_t b);
extern void func_02060564(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_0209e088;
extern Pair data_ov004_02159684;
void func_ov004_0214e41c(uint8_t *p) {
    if (*(uint8_t*)(p + 0x90) == 0) {
        uint8_t *q = func_02056dd4();
        uint32_t r = func_0209a978(*(int32_t*)(p + 0x8c) << 4, data_0209e088);
        func_02060564(*(uint32_t*)(q + 0x20), r, 0x10);
    }
    {
        int32_t n = *(int32_t*)(p + 0x8c) - 1;
        *(int32_t*)(p + 0x8c) = n;
        if (n > 0) return;
    }
    {
        void *o = *(void**)(p + 0x88);
        (*(Fn**)o)[11](o);
    }
    *(Pair*)(p + 0x80) = data_ov004_02159684;
}
