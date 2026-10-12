#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t num, uint64_t den);
extern int8_t func_ov000_0215448c(int8_t v);
extern int func_ov000_0215426c(uint8_t *p, int n);
extern void func_ov000_0214f600(void *a, void *b, uint32_t c);
extern uint8_t data_ov000_02169604[];
extern uint8_t data_ov000_0216960c[];
extern uint32_t data_ov000_02169658[];

int func_ov000_02153fc0(uint8_t *a)
{
    uint64_t now = func_020882cc();
    uint64_t last = *(uint64_t *)(a + 0x1460);
    uint64_t q = func_0209a6d4((now - last) << 6, 0x82eaULL);
    uint16_t thr = *(uint16_t *)(a + 0x14d2);

    if (q >= thr) {
        *(int8_t *)(a + 0x14c1) = func_ov000_0215448c(*(int8_t *)(a + 0x14c1));

        if (*(int8_t *)(a + 0x14c1) == -1) {
            return func_ov000_0215426c(a, 3);
        }

        *(uint64_t *)(a + 0x1460) = func_020882cc();

        {
            int8_t idx = *(int8_t *)(a + 0x14c1);
            uint32_t v = data_ov000_02169658[idx] | (2u << 20);
            func_ov000_0214f600(data_ov000_02169604, data_ov000_0216960c, v);
        }
    }
    return 3;
}
