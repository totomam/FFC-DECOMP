#include "ffc/types.h"

extern void *func_ov003_0214a204(void *p, uint32_t a, uint32_t b);
extern void *func_ov003_0214a1c4(void *p, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov003_0217986c[];
extern uint32_t data_ov003_02179874[];

void func_ov003_0214a180(uint8_t *obj, uint32_t p1, void *p2, uint32_t p3)
{
    if (p1 <= 1 && p3 == 0) {
        void *n;
        n = func_ov003_0214a204(*(void **)(obj + 384), data_ov003_0217986c[0], data_ov003_0217986c[1]);
        func_02056bc0(p2, n);
        n = func_ov003_0214a1c4(*(void **)(obj + 388), data_ov003_02179874[0], data_ov003_02179874[1]);
        func_02056bc0(p2, n);
    }
}
