#include "ffc/types.h"

extern uint32_t func_02056aec(void *obj);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021ba680(uint8_t *obj, uint32_t v)
{
    int i;
    uint8_t *q;
    uint32_t a;
    uint32_t b;
    if (v == *(uint32_t *)(obj + 0xd8)) {
        **(uint32_t **)(obj + 0x12c) = 0x64;
        a = func_02056aec(obj);
        b = func_0203b708(0x1e);
        q = obj + 0x14;
        func_02056bc0(q, (void *)b);
        func_02056bc0(q, (void *)a);
        return;
    }
    for (i = 0; i < 6; i++) {
        if (v == *(uint32_t *)(obj + 0xc0 + i * 4)) {
            uint8_t idx = obj[0x144];
            **(uint32_t **)(obj + 0x12c) = (uint32_t)(i + 6 * idx);
            a = func_02056aec(obj);
            b = func_0203b708(0x1e);
            q = obj + 0x14;
            func_02056bc0(q, (void *)b);
            func_02056bc0(q, (void *)a);
            return;
        }
    }
}
