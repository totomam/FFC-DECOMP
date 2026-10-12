#include "ffc/types.h"

extern int func_ov002_02198768(void *p);
extern void *func_0203b708(uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern int func_ov002_021c980c(uint8_t *a, uint32_t b);
extern int func_ov002_021d2a7c(uint8_t *a, uint32_t b);
extern uint32_t data_0209dfdc;
extern uint32_t data_0209dfe0;

void func_ov002_021c97b0(uint8_t *a, uint32_t b)
{
    if (func_ov002_02198768(*(void **)(a + 0xbc)) != 0) {
        return;
    }
    {
        uint8_t *p = *(uint8_t **)(a + 0xd0);
        if (*(uint32_t *)(p + 0x308) == 0) {
            uint32_t v;
            if (b != 0) {
                v = data_0209dfdc;
            } else {
                v = data_0209dfe0;
            }
            func_02056bc0(a + 0x14, func_0203b708(v));
        }
    }
    if (func_ov002_021c980c(a, b) != 0) {
        return;
    }
    if (func_ov002_021d2a7c(a, b) != 0) {
        return;
    }
}
