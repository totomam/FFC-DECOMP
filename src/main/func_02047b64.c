#include "ffc/types.h"

extern uint32_t func_02056c9c(void *object, uint32_t arg);
extern uint32_t func_02005f1c(void *object, uint32_t third);
extern char data_020af9cc[];

void *func_02047b64(uint8_t *self, uint32_t a1, uint32_t a2, uint32_t a3,
                    uint8_t a4, uint8_t a5, uint32_t a6, uint32_t a7)
{
    uint32_t i;

    func_02056c9c(self, 0);
    *(void **)self = data_020af9cc;
    *(uint32_t *)(self + 0x80) = a1;
    *(uint32_t *)(self + 0x84) = a2;
    *(uint32_t *)(self + 0x88) = a3;
    *(uint32_t *)(self + 0x8c) = 0;
    *(uint8_t *)(self + 0x94) = a4;
    *(uint8_t *)(self + 0x95) = a5;
    *(uint32_t *)(self + 0x98) = a6;
    *(uint8_t *)(self + 0x9c) = 0;
    uint32_t *arr = (uint32_t *)(self + 0xa0);
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    if (a7 != 0) {
        *(uint8_t *)(self + 0x9c) = 1;
        func_02005f1c(self + 0xa0, a7);
    }
    return self;
}
