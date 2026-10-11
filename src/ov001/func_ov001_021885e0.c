#include "ffc/types.h"

extern void func_ov001_02188d14(uint32_t a, uint32_t b);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_ov001_02195780[];
extern uint8_t data_ov001_02195764[];

void func_ov001_021885e0(uint32_t p, uint32_t a, uint32_t b)
{
    if (a != 0) {
        func_ov001_02188d14(a, b);
    }
    func_0208763c(data_ov001_02195780);
    *(uint32_t *)(data_ov001_02195764 + 0x14) = 3;
    *(uint32_t *)(data_ov001_02195764 + 0x10) = p;
    *(uint32_t *)(data_ov001_02195764 + 0xc) = a;
    *(uint32_t *)(data_ov001_02195764 + 8) = b;
    if (a != 0) {
        *(uint32_t *)(data_ov001_02195764 + 0x14) = 4;
    }
    func_02087678(data_ov001_02195780);
}
