#include "ffc/types.h"

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036d48(const void *object);
extern uint32_t func_02036d5c(const void *object);
extern uint32_t func_02036ce0(const void *object);
extern uint32_t func_02036d18(const void *object);

int func_0201c8bc(uint8_t *obj, uint32_t kind, uint32_t val)
{
    int count = 0;
    int i;

    kind -= 0x12;
    for (i = 0; i < 0x40; i++) {
        uint32_t off = i * 0x18;
        if (func_02036cd8(*(uint8_t **)(obj + 0x48) + off) == 0) {
            continue;
        }
        if (func_02036cfc(*(uint8_t **)(obj + 0x48) + off) != val) {
            continue;
        }
        switch (kind) {
        case 0:
            if (func_02036d48(*(uint8_t **)(obj + 0x48) + off) != 0) count++;
            break;
        case 1:
            if (func_02036d5c(*(uint8_t **)(obj + 0x48) + off) != 0) count++;
            break;
        case 2:
            if (func_02036ce0(*(uint8_t **)(obj + 0x48) + off) == 3) count++;
            break;
        case 3:
            if (func_02036ce0(*(uint8_t **)(obj + 0x48) + off) == 4) count++;
            break;
        case 4:
            if (func_02036d18(*(uint8_t **)(obj + 0x48) + off) >= 2) count++;
            break;
        case 5:
            if (func_02036d18(*(uint8_t **)(obj + 0x48) + off) == 1) count++;
            break;
        case 6:
            if (func_02036d18(*(uint8_t **)(obj + 0x48) + off) == 0 &&
                func_02036ce0(*(uint8_t **)(obj + 0x48) + off) == 1) count++;
            break;
        case 7:
            if (func_02036ce0(*(uint8_t **)(obj + 0x48) + off) == 1) count++;
            break;
        case 8:
            if (func_02036ce0(*(uint8_t **)(obj + 0x48) + off) == 2) count++;
            break;
        case 9:
        default:
            count++;
            break;
        }
    }
    return count;
}
