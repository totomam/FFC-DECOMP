#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_ov000_0214e4a0(uint8_t *);
extern uint8_t *data_ov000_0216e080;
extern uint8_t *data_ov000_0216e018;
extern uint32_t data_ov000_0216e084;

int func_ov000_0214e7d8(void) {
    uint8_t *p;
    uint32_t st;

    for (;;) {
        st = func_02088978();
        p = data_ov000_0216e080;
        while (p != 0) {
            if (p != data_ov000_0216e018) {
                if ((*(int16_t *)(p + 0xac) & 0x10) == 0) {
                    break;
                }
            }
            p = *(uint8_t **)(p + 0xb8);
        }
        func_0208898c(st);
        if (p == 0) {
            break;
        }
        func_ov000_0214e4a0(p);
    }

    if (data_ov000_0216e080 == 0) {
        goto check84;
    }
    if (data_ov000_0216e080 != data_ov000_0216e018) {
        goto bad;
    }
    if (*(uint8_t **)(data_ov000_0216e080 + 0xb8) != 0) {
        goto bad;
    }
check84:
    if (data_ov000_0216e084 != 0) {
        goto bad;
    }
    return 0;
bad:
    return -26;
}
