#include "ffc/types.h"

extern void func_ov000_02158848(void *a);
extern void func_02084050(uint8_t *p, uint32_t v);
extern int func_ov000_0215862c(uint8_t *p, int idx, uint32_t flag);
extern void func_02088f30(void);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern uint16_t func_02084118(uint8_t *dst, uint8_t *src, uint32_t n);
extern int func_ov000_02158660(uint8_t *p, int idx, uint8_t *q);
extern int func_ov000_02158844(void);
extern uint8_t data_ov000_0217000c[];

int func_ov000_021586b8(void *a, uint8_t *b)
{
    int i;
    uint8_t *p = b;

    func_ov000_02158848(a);
    func_02084050(p + 0x200, 0xa001);

    for (i = 0; i < 2; i++) {
        if (func_ov000_0215862c(p, i, 1) == 0) {
            func_02088f30();
            return 0;
        }
        func_02084ca4(data_ov000_0217000c, p + 0xf0, 0xe);
        *(uint16_t *)(p + 0xfe) = func_02084118(p + 0x200, p, 0xfe);
        while (func_ov000_02158660(p, i, p + 0x100) == 0) {
        }
    }

    if (func_ov000_02158844() != 0) {
        return 1;
    }
    return 0;
}
