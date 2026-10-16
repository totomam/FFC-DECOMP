#include "ffc/types.h"
extern void func_0206bf5c(void *p);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void *func_0206c030(void *object);
void func_ov007_021bba68(uint8_t *self)
{
    uint32_t rng[2];
    uint32_t i;
    func_0206bf5c(rng);
    for (i = 0; i < *(volatile uint32_t *)(self + 0xf4); i++) {
        uint32_t j = func_0206c184((uint32_t)rng, *(volatile uint32_t *)(self + 0xf4));
        uint32_t *a = *(uint32_t **)(self + 0xf0);
        uint32_t t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    func_0206c030(rng);
}
