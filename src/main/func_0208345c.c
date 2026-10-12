#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint8_t pad[0x16];
    uint16_t b;
} S;

extern S data_02141390;
extern void func_02082d4c(uint16_t v);

void func_0208345c(uint32_t x)
{
    data_02141390.a = (data_02141390.a | data_02141390.b) & ~x;
    data_02141390.b = x;
    if (x != 0) {
        if (x == 0x100) {
            *(volatile uint32_t *)0x4001000 |= 0x80000000;
            *(volatile uint8_t *)0x4000249 = 0x83;
        }
    } else {
        *(volatile uint32_t *)0x4001000 &= 0x7fffffff;
    }
    func_02082d4c(data_02141390.a);
}
