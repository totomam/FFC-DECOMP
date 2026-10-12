#include "ffc/types.h"

extern void func_02069288(void *object);
extern void func_020692a4(void *object);
extern int func_0201bd84(uint32_t a, uint32_t b);
extern uint32_t data_020b93b8;

void func_ov010_021ca718(uint8_t *self)
{
    uint8_t i;

    for (i = 0; i < 5; i++) {
        func_02069288(*(void **)(self + 0xd8 + i * 4));
    }

    func_020692a4(*(void **)(self + 0xd8 + self[0x279] * 4));

    for (i = 0; i < 10; i++) {
        func_020692a4(*(void **)(self + 0xec + i * 4));
    }

    for (i = 0; i < 2; i++) {
        func_020692a4(*(void **)(self + 0x150 + i * 4));
    }

    if (func_0201bd84(data_020b93b8, 0x27) != 0) {
        for (i = 0; i < 2; i++) {
            func_020692a4(*(void **)(self + 0x158 + i * 4));
        }
    }

    for (i = 0; i < 5; i++) {
        func_020692a4(*(void **)(self + 0x13c + i * 4));
    }

    for (i = 0; i < 4; i++) {
        func_020692a4(*(void **)(self + 0x29c + i * 4));
    }

    func_020692a4(*(void **)(self + 0x294));
    func_020692a4(*(void **)(self + 0x298));
    func_020692a4(*(void **)(self + 0x2b0));
    func_020692a4(*(void **)(self + 0x160));
}
