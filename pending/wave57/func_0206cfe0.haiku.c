#include "ffc/types.h"

extern void func_0206cb44(uint8_t *self);
extern void func_0206d118(uint8_t *p);
extern int func_0208e0d8(uint8_t *buf, uint32_t id, uint16_t mask, uint16_t n, uint32_t flag);
extern uint32_t func_0206cbc8(uint32_t v);
extern uint8_t data_020b2010[];
extern uint32_t data_0213e178;

#define ALIGN32(s, off) ((uint8_t *)((((uintptr_t)(s) + (off) + 0x1f)) & ~(uintptr_t)0x1f))

void func_0206cfe0(uint8_t *a0, uint16_t *msg)
{
    uint32_t shift;
    uint8_t *ptr;
    uint16_t mask;

    switch (msg[2]) {
    case 0xa:
        if (msg[1] != 0) {
            func_0206cb44(a0);
            return;
        }
        func_0206d118(data_020b2010);
        *(uint32_t *)(a0 + 0x30b0) = 7;
        a0[0x30b4] = 1;
        ptr = *(uint8_t **)(a0 + 0x3220);
        ptr[6] = 1;
        *(uint8_t **)(a0 + 0x17d4) = ALIGN32(a0, 0xf94);
        shift = 1u << *(uint32_t *)(a0 + 0x44);
        mask = (uint16_t)(shift - 1);
        if (func_0208e0d8(*(uint8_t **)(a0 + 0x17d4), 0xc, mask, 6, 1) != 0) {
            func_0206cb44(a0);
            return;
        }
        *(uint8_t **)(a0 + 0x2018) = ALIGN32(a0, 0x17d8);
        shift = 1u << *(uint32_t *)(a0 + 0x44);
        mask = (uint16_t)(shift - 1);
        if (func_0208e0d8(*(uint8_t **)(a0 + 0x2018), 0xd, mask, 2, 1) != 0) {
            func_0206cb44(a0);
            return;
        }
        *(uint8_t **)(a0 + 0x285c) = ALIGN32(a0, 0x201c);
        shift = 1u << *(uint32_t *)(a0 + 0x44);
        mask = (uint16_t)(shift - 1);
        if (func_0208e0d8(*(uint8_t **)(a0 + 0x285c), 0xe, mask, 0x10, 1) != 0) {
            func_0206cb44(a0);
            return;
        }
        *(uint8_t **)(a0 + 0x30a0) = ALIGN32(a0, 0x2860);
        {
            uint16_t n = (uint16_t)func_0206cbc8(data_0213e178);
            shift = 1u << *(uint32_t *)(a0 + 0x44);
            mask = (uint16_t)(shift - 1);
            if (func_0208e0d8(*(uint8_t **)(a0 + 0x30a0), 0xf, mask, n, 1) != 0) {
                func_0206cb44(a0);
            }
        }
        break;
    case 0xc:
        if (msg[1] == 0xe) {
            func_0206cb44(a0);
        }
        break;
    default:
        break;
    }
}
