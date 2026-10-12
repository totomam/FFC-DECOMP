#include "ffc/types.h"

extern void *func_020548b4(void *object, uint32_t first, uint32_t second);
extern void *func_02056830(uint32_t size);
extern void func_02084ca4(uint32_t a, void *b, uint32_t c);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern void func_0206dda8(void *obj);
extern void func_02054714(void *obj);
extern char data_020b1ec8[];
extern char data_020b1edc[];
extern uint8_t *data_0213e178;

void *func_0206dc44(void *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *s = (uint8_t *)p;
    uint32_t i;

    func_020548b4(p, 0, 1);
    *(void **)(s + 0x00) = (void *)data_020b1ec8;
    *(uint32_t *)(s + 0x28) = c;
    *(void **)(s + 0x14) = (void *)data_020b1edc;
    *(uint32_t *)(s + 0x20) = a;
    s[0x24c] = 0;
    *(uint16_t *)(s + 0x23c) = *(uint16_t *)(data_0213e178 + 0xf90);
    *(uint32_t *)(s + 0x240) = *(uint32_t *)(data_0213e178 + 0x30ac);
    *(uint32_t *)(s + 0x244) = *(uint32_t *)(data_0213e178 + 0x44);
    *(void **)(s + 0x24) = func_02056830(a);
    func_02084ca4(b, *(void **)(s + 0x24), *(uint32_t *)(s + 0x20));
    *(void **)(s + 0x2c) = func_02056830(0x10);
    *(uint32_t *)(s + 0x248) = func_0209a978(*(uint32_t *)(s + 0x20) + 0xe, 0xf) - 1;
    s[0x230] = 0;
    *(uint32_t *)(s + 0x234) = 0;
    *(void **)(s + 0x238) = func_02056830(*(uint32_t *)(s + 0x240) << 3);

    for (i = 0; i < *(uint32_t *)(s + 0x240); i++) {
        ((uint8_t *)*(void **)(s + 0x238))[i * 8] = 0;
        *(uint32_t *)((uint8_t *)*(void **)(s + 0x238) + i * 8 + 4) = 0;
    }

    func_0206dda8(p);
    func_02054714(s + 0x14);
    return p;
}
