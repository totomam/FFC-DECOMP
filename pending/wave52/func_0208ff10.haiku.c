#include "ffc/types.h"

extern int func_020876c0(void *p);
extern void func_0208763c(void *p);
extern int func_0208fec8(void *p);
extern void func_02087678(void *p);
extern uint32_t data_020b2bb0;
extern uint32_t data_020b2bfc;
extern uint32_t data_020b2c48;
extern uint8_t data_02144828[];
extern uint32_t data_02141510;
extern uint32_t data_021447e0[];
extern uint32_t data_02144804[];

int func_0208ff10(uint32_t a)
{
    uint32_t idx;
    uint32_t off;
    int ret;

    idx = 5;
    if (a == (uint32_t)&data_020b2bb0) {
        idx = 2;
    } else if (a == (uint32_t)&data_020b2bfc) {
        idx = 3;
    } else if (a == (uint32_t)&data_020b2c48) {
        idx = 4;
    }

    off = idx * 0x18;
    if (func_020876c0(&data_02144828[off]) == 0) {
        data_021447e0[idx] = *(uint32_t *)(*(uint32_t *)(data_02141510 + 4) + 0x6c);
        data_02144804[idx] = 1;
    } else {
        if (data_021447e0[idx] == *(uint32_t *)(*(uint32_t *)(data_02141510 + 4) + 0x6c)) {
            data_02144804[idx] += 1;
        } else {
            func_0208763c(&data_02144828[off]);
            data_021447e0[idx] = *(uint32_t *)(*(uint32_t *)(data_02141510 + 4) + 0x6c);
            data_02144804[idx] = 1;
        }
    }

    ret = func_0208fec8((void *)a);
    data_02144804[idx] -= 1;
    if (data_02144804[idx] == 0) {
        func_02087678(&data_02144828[off]);
    }
    return ret;
}
