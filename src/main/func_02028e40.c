#include "ffc/types.h"

extern uint8_t data_020ad8ac[];
extern void func_02028b14(void *p);
extern void func_02056858(void *p);
extern void func_02056844(void *p);

void *func_02028e40(void *p) {
    uint8_t *s = (uint8_t *)p;
    *(uint8_t **)s = data_020ad8ac;
    func_02028b14(data_020ad8ac);
    if (*(void **)(s + 0x14) != 0) {
        func_02056858(*(void **)(s + 0x14));
    }
    func_02056844(s);
    return s;
}
