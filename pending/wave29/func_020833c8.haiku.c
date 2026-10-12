#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint8_t pad[0x12];
    uint16_t b;
} Blk;

extern Blk data_02141390;
extern void func_02082d4c(uint16_t v);

void func_020833c8(uint16_t x)
{
    volatile uint8_t *addr;
    uint8_t val;
    data_02141390.a = (uint16_t)((data_02141390.a | data_02141390.b) & ~x);
    data_02141390.b = x;
    if (x != 0) {
        switch (x) {
        case 8:
            val = 0x84;
            addr = (volatile uint8_t *)0x04000243;
            break;
        case 0x100:
            addr = (volatile uint8_t *)0x04000249;
            val = 0x82;
            break;
        default:
            goto end;
        }
        *addr = val;
    }
end:
    func_02082d4c(data_02141390.a);
}
