#include "ffc/types.h"

extern void func_02069288(void *object);
extern int func_0201bd84(void *obj, int arg);
extern void func_ov010_021cac24(void *obj);
extern void *data_020b93b8;

void func_ov010_021ca800(uint8_t *p)
{
    uint8_t i;

    for (i = 0; i < 5; i++) {
        func_02069288(((void **)(p + 0xd8))[i]);
    }
    for (i = 0; i < 10; i++) {
        func_02069288(((void **)(p + 0xec))[i]);
    }
    for (i = 0; i < 2; i++) {
        func_02069288(((void **)(p + 0x150))[i]);
    }
    if (func_0201bd84(data_020b93b8, 0x27) != 0) {
        for (i = 0; i < 2; i++) {
            func_02069288(((void **)(p + 0x158))[i]);
        }
    }
    for (i = 0; i < 5; i++) {
        func_02069288(((void **)(p + 0x13c))[i]);
    }
    for (i = 0; i < 4; i++) {
        func_02069288(((void **)(p + 0x29c))[i]);
    }
    func_02069288(*(void **)(p + 0x294));
    func_02069288(*(void **)(p + 0x298));
    func_02069288(*(void **)(p + 0x2b0));
    func_02069288(*(void **)(p + 0x160));
    func_ov010_021cac24(p);
}
