#include "ffc/types.h"

extern void func_02077a7c(void *p, uint32_t n);
extern void func_02077aa4(void *q, void *e);
extern uint8_t data_0213e258[];
extern uint8_t data_0213e24c[];
extern uint8_t data_0213e264[];
extern uint8_t data_0213e6a4[];

void func_02079b7c(void)
{
    int32_t i;
    int32_t k;
    uint8_t *e;
    uint8_t *p;

    func_02077a7c(data_0213e258, 0x14);
    func_02077a7c(data_0213e24c, 0x14);

    for (i = 0; i < 0x10; i++) {
        e = data_0213e264 + i * 0x44;
        *(e + 0x2c) = 0;
        *(e + 0x3c) = (uint8_t)i;
        func_02077aa4(data_0213e24c, e);
    }

    for (k = 0; k < 0x20; k++) {
        p = data_0213e6a4 + k * 0x24;
        func_02077a7c(p, 0xc);
        func_02077a7c(p + 0xc, 0);
        *(p + 0x20) = 0x7f;
        *(uint32_t *)(p + 0x18) = 1;
        *(uint32_t *)(p + 0x1c) = 0;
    }
}
