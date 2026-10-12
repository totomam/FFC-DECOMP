#include "ffc/types.h"

extern uint32_t data_020ad89c;
extern uint32_t data_020ad8f0;
extern void func_02053234(void *object);
extern void func_0201a02c(void *object);
extern void func_02028e68(void *out);
extern void func_02035c18(void *out);
extern void func_02005988(void *dst, const void *src);

void *func_02028e70(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t tmp;

    *(uint32_t *)(s + 0) = (uint32_t)&data_020ad89c;
    func_02053234(s + 4);
    *(uint32_t *)(s + 8) = 0;
    *(uint8_t *)(s + 0x10) = 0;
    func_0201a02c(s + 0x14);
    *(uint8_t *)(s + 0x44) = 0;
    *(uint8_t *)(s + 0x50) = 0;
    *(uint8_t *)(s + 0x5c) = 0;
    *(uint8_t *)(s + 0x68) = 0;
    *(uint32_t *)(s + 0x80) = 0;
    *(uint32_t *)(s + 0x84) = 0;
    *(uint32_t *)(s + 0x88) = 0;
    *(uint32_t *)(s + 0x8c) = 0;
    *(uint32_t *)(s + 0x90) = 0;
    *(uint32_t *)(s + 0x3c) = 0;
    *(uint32_t *)(s + 0x48) = 0;
    *(uint32_t *)(s + 0x54) = 0;
    *(uint32_t *)(s + 0x60) = 0;
    *(uint32_t *)(s + 0x6c) = 0;
    *(uint32_t *)(s + 0x70) = 0;
    *(uint32_t *)(s + 0x74) = 0;
    *(uint32_t *)(s + 0x78) = 0;
    *(uint32_t *)(s + 0x7c) = 0;
    func_02028e68(&tmp);
    *(uint32_t *)(s + 0x94) = tmp;
    func_02035c18(&tmp);
    func_02005988(s + 0x98, &data_020ad8f0);
    *(uint8_t *)(s + 0xa4) = 0;
    return self;
}
