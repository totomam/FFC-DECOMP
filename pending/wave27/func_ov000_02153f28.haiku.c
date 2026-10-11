#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint8_t func_ov000_02154424(int x);
extern void func_ov000_0214f600(void *a, void *b, uint32_t c);
extern char data_ov000_02169604[];
extern char data_ov000_0216960c[];
extern uint32_t data_ov000_02169658[];

int func_ov000_02153f28(uint8_t *self) {
    *(uint64_t *)(self + 0x1460) = func_020882cc();
    self[0x14c1] = func_ov000_02154424(0);
    *(uint64_t *)(self + 0x1460) = func_020882cc();
    func_ov000_0214f600(data_ov000_02169604, data_ov000_0216960c,
        (2 << 20) | data_ov000_02169658[(int8_t)self[0x14c1]]);
    return 3;
}
