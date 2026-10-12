#include "ffc/types.h"

extern uint8_t *func_ov000_021459ac(uint32_t *out);
extern void func_ov000_02147588(uint8_t *p, uint32_t n);
extern void func_ov000_02146460(uint8_t *p, uint32_t n);
extern void func_ov000_02145a20(void);

void func_ov000_021476bc(void)
{
    uint32_t n;
    uint8_t *p;
    uint16_t v;

    while (1) {
        p = func_ov000_021459ac(&n);
        if (n > 0x22) {
            v = *(uint16_t *)(p + 0xc);
            v = (uint16_t)((v >> 8) | (v << 8));
            switch (v) {
            case 0x800:
                func_ov000_02147588(p + 0xe, n - 0xe);
                break;
            case 0x806:
                func_ov000_02146460(p + 0xe, n - 0xe);
                break;
            }
        }
        func_ov000_02145a20();
    }
}
