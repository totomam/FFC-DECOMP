#include "ffc/types.h"

extern uint8_t data_02144828[];
extern uint8_t data_02141510[];
extern uint32_t data_021447e0;
extern uint32_t data_02144804;

extern uint32_t func_020876c0(void *p);
extern void func_0208763c(void *p);
extern uint32_t func_0209bedc(void *p);
extern void func_02087678(void *p);

uint32_t func_0208f448(void *a)
{
    uint32_t r;
    if (func_020876c0(data_02144828) == 0) {
        data_021447e0 = *(uint32_t *)(*(uint32_t *)(data_02141510 + 4) + 0x6c);
        data_02144804 = 1;
    } else {
        if (data_021447e0 == *(uint32_t *)(*(uint32_t *)(data_02141510 + 4) + 0x6c)) {
            data_02144804 = data_02144804 + 1;
        } else {
            func_0208763c(data_02144828);
            data_021447e0 = *(uint32_t *)(*(uint32_t *)(data_02141510 + 4) + 0x6c);
            data_02144804 = 1;
        }
    }
    r = func_0209bedc(a);
    data_02144804 = data_02144804 - 1;
    if (data_02144804 == 0) {
        func_02087678(data_02144828);
    }
    return r;
}
