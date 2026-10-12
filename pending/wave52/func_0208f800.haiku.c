#include "ffc/types.h"

typedef struct {
    uint8_t raw[0x18];
} Ent;

extern uint8_t data_020b2bb0[];
extern Ent data_02144828[];
extern uint32_t data_02141510[];
extern uint32_t data_021447e0[];
extern uint32_t data_02144804[];

extern int func_020876c0(Ent *p);
extern void func_0208763c(Ent *p);
extern uint32_t func_0208f8a4(void *a, void *b);
extern void func_02087678(Ent *p);

uint32_t func_0208f800(void *a, void *b) {
    uint32_t idx;
    uint32_t res;

    idx = 2;
    if (b != (void *)data_020b2bb0) {
        idx = 5;
    }
    if (func_020876c0(&data_02144828[idx]) == 0) {
        data_021447e0[idx] = *(uint32_t *)((uint8_t *)data_02141510[1] + 0x6c);
        data_02144804[idx] = 1;
    } else {
        if (data_021447e0[idx] == *(uint32_t *)((uint8_t *)data_02141510[1] + 0x6c)) {
            data_02144804[idx]++;
        } else {
            func_0208763c(&data_02144828[idx]);
            data_021447e0[idx] = *(uint32_t *)((uint8_t *)data_02141510[1] + 0x6c);
            data_02144804[idx] = 1;
        }
    }
    res = func_0208f8a4(a, b);
    data_02144804[idx]--;
    if (data_02144804[idx] == 0) {
        func_02087678(&data_02144828[idx]);
    }
    return res;
}
