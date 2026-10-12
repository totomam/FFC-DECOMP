#include "ffc/types.h"

extern void func_0207be0c(void);
extern void func_0207be70(void *a, void *b);
extern void func_0207bac8(void *p);
extern uint8_t data_02140750[];
extern uint32_t data_0213ecd0[];

void func_0207bd98(uint8_t *p) {
    int32_t f = (int32_t)(*(uint32_t *)(p + 0x118) << 31) >> 31;
    if (f != 0) {
        func_0207be0c();
        (*(void (**)(void *))(p + 0x170))(p);
        func_0207be70(data_02140750, p);
        if (data_0213ecd0[1] != 0) {
            func_0207be70((void *)(data_0213ecd0[1] + 0x10e0), p);
        }
        func_0207bac8(p);
    }
}
