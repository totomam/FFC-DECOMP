#include "ffc/types.h"

extern uint32_t func_ov006_021a023c(void);
extern void func_020871d8(uint32_t x);
extern uint32_t func_ov006_021a0460(void);
extern uint32_t data_ov006_021bb170[];

uint32_t func_ov006_021a0578(void)
{
    uint32_t r5 = 1;
    uint32_t r4 = 0;
    uint32_t r6 = 0;
    uint32_t r0;
    uint32_t *p;

    if (func_ov006_021a023c() == 0) {
        goto tail;
    }
    do {
        func_020871d8(10);
        r0 = func_ov006_021a0460();
        if (r0 == 0) {
            goto check;
        }
        do {
            switch (r0) {
            case 4:
            case 5:
                break;
            case 0x14:
                r5 = r4;
                break;
            default:
                r5 = r6;
                break;
            }
            r0 = func_ov006_021a0460();
        } while (r0 != 0);
check:
        ;
    } while (r5 != 0);

tail:
    p = data_ov006_021bb170;
    if (p[0x54 / 4] != 0) {
        void (*fn)(void) = (void (*)(void))p[0xc / 4];
        fn();
        p = data_ov006_021bb170;
        p[0x54 / 4] = 0;
    }
    return 1;
}
