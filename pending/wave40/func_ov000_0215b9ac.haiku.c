#include "ffc/types.h"

extern void func_ov000_0215b7a4(uint32_t x);
extern void func_ov000_0215dc60(void);
extern uint8_t *data_ov000_02170064[];

typedef void (*fn_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_ov000_0215b9ac(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint8_t *p;
    fn_t fn;

    if (a == 0 && b != 0) {
        p = data_ov000_02170064[1];
        if (*(uint32_t *)(p + 0x96c) == 0) {
            func_ov000_0215b7a4(3);
            func_ov000_0215dc60();
        }
    } else if (a == 0) {
        func_ov000_0215b7a4(5);
    }

    p = data_ov000_02170064[1];
    if (p[0xb05] == 0) {
        fn = *(fn_t *)(p + 0x80);
        fn(a, b, c, d, e, *(uint32_t *)(p + 0x84));
    }

    if (a != 0) {
        p = data_ov000_02170064[1];
        if (p != 0) {
            uint32_t t = *(uint32_t *)(p + 0x24) - 4;
            if (t <= 1) {
                func_ov000_0215b7a4(3);
            }
        }
    }
}
