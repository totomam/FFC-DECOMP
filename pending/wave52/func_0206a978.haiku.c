#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02087024(void *p);
extern void func_02023570(void *a, void *b, void *c);
extern void func_0206ab74(void *p);

void func_0206a978(uint8_t *p) {
    uint8_t *obj;
    uint8_t *r5;
    uint32_t tmp;
    uint16_t old;
    for (;;) {
        func_0208763c(p + 0xe4);
        if (*(uint32_t *)(p + 0xc) == 0) {
            func_02087678(p + 0xe4);
            func_02087024(p + 0xd8);
            continue;
        }
        obj = *(uint8_t **)(p + 0x14);
        r5 = *(uint8_t **)(obj + 8);
        func_02023570(&tmp, p + 0xc, &obj);
        func_0208763c(r5 + 0x18);
        func_02087678(p + 0xe4);
        func_0206ab74(r5);
        old = *(volatile uint16_t *)0x4000208;
        *(volatile uint16_t *)0x4000208 = 0;
        *(int32_t *)(p + 0xfc) -= 1;
        (void)*(volatile uint16_t *)0x4000208;
        *(volatile uint16_t *)0x4000208 = old ? 1 : 0;
        func_02087678(r5 + 0x18);
    }
}
