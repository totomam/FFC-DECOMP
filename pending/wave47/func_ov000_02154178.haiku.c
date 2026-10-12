#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern uint8_t func_ov000_021544e8(void);
extern int func_ov000_0215426c(void *s, int v);
extern int func_ov000_0214f600(void *a, void *b, uint32_t c);
extern uint32_t data_ov000_02169604;
extern uint32_t data_ov000_02169658[];

typedef struct {
    uint8_t lo : 4;
    uint8_t hi : 4;
} Nib;

int func_ov000_02154178(uint8_t *s)
{
    uint64_t now;
    uint64_t q;
    uint8_t idx;
    int8_t state;

    now = func_020882cc();
    q = func_0209a6d4((now - *(uint64_t *)(s + 0x1460)) << 6, 0x82eaULL);
    if (q >= *(uint16_t *)(s + 0x14d4) ||
        ((Nib *)((s + s[0x14bf] * 0x24) + 0x900))->lo == 1) {
        idx = s[0x14bf];
        ((Nib *)((s + 0x900) + idx * 0x24))->lo = 0;
        s[0x14bf]++;
        if (s[0x14c0] <= s[0x14bf]) {
            s[0x14c5]++;
            s[0x14bf] = 0;
            s[0x14c1] = func_ov000_021544e8();
        }
        if ((int8_t)s[0x14c1] < 0) {
            s[0x14c5] = 0;
            return func_ov000_0215426c(s, 5);
        }
        *(uint64_t *)(s + 0x1460) = func_020882cc();
        idx = s[0x14bf];
        state = (int8_t)s[0x14c1];
        func_ov000_0214f600(&data_ov000_02169604, s + 0x904 + idx * 0x24,
                            0x300000 | data_ov000_02169658[state]);
    }
    return 5;
}
