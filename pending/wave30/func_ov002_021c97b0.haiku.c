#include "ffc/types.h"

extern int func_ov002_02198768(void *p);
extern void *func_0203b708(uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern int func_ov002_021c980c(uint8_t *a, uint32_t b);
extern int func_ov002_021d2a7c(uint8_t *a, uint32_t b);
extern uint32_t data_0209dfdc;
extern uint32_t data_0209dfe0;

int func_ov002_021c97b0(uint8_t *a, uint32_t b)
{
    int r;
    r = func_ov002_02198768(*(void **)(a + 0xbc));
    if (r != 0) {
        return r;
    }
    {
        uint8_t *p = *(uint8_t **)(a + 0xd0);
        if (*(uint32_t *)(p + 0x308) == 0) {
            uint32_t *q;
            if (b == 0) {
                q = &data_0209dfe0;
            } else {
                q = &data_0209dfdc;
            }
            func_02056bc0(a + 0x14, func_0203b708(*q));
        }
    }
    r = func_ov002_021c980c(a, b);
    if (r != 0) {
        return r;
    }
    return func_ov002_021d2a7c(a, b);
}
