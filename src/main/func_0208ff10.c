#include "ffc/types.h"

extern int func_020876c0(void *p);
extern void func_0208763c(void *p);
extern int func_0208fec8(void *p);
extern void func_02087678(void *p);
extern uint32_t data_020b2bb0;
extern uint32_t data_020b2bfc;
extern uint32_t data_020b2c48;
typedef struct { uint32_t w[6]; } S;
extern S data_02144828[];
typedef struct { uint8_t pad[0x6c]; uint32_t v; } U;
typedef struct { uint32_t x; U *p; } T;
extern T data_02141510;
extern uint32_t data_021447e0[];
extern uint32_t data_02144804[];

int func_0208ff10(uint32_t a)
{
    uint32_t idx;
    int ret;

    if (a == (uint32_t)&data_020b2bb0) {
        idx = 2;
    } else if (a == (uint32_t)&data_020b2bfc) {
        idx = 3;
    } else {
        idx = 4;
        if (a != (uint32_t)&data_020b2c48) idx = 5;
    }

    if (func_020876c0(&data_02144828[idx]) == 0) {
        data_021447e0[idx] = data_02141510.p->v;
        data_02144804[idx] = 1;
    } else {
        uint32_t cur = data_021447e0[idx];
        if (cur == data_02141510.p->v) {
            data_02144804[idx] += 1;
        } else {
            func_0208763c(&data_02144828[idx]);
            data_021447e0[idx] = data_02141510.p->v;
            data_02144804[idx] = 1;
        }
    }

    ret = func_0208fec8((void *)a);
    data_02144804[idx] -= 1;
    if (data_02144804[idx] == 0) {
        func_02087678(&data_02144828[idx]);
    }
    return ret;
}
