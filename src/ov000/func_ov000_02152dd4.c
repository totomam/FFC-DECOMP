#include "ffc/types.h"

extern int func_02087460(void);
extern int func_02088bbc(void);
extern uint32_t func_02088be0(void);
extern uint32_t func_02088bfc(void);

typedef struct {
    uint8_t pad[0x10];
    uint8_t *inner;
} Outer;

extern Outer data_ov000_0216e26c;

int func_ov000_02152dd4(void)
{
    uint32_t n;
    if (func_02087460() != 0) {
        if (data_ov000_0216e26c.inner[0x14cc] != 0) goto ok;
        if (func_02088bbc() != 0 && func_02088be0() != 0) {
            n = func_02088be0();
            if (n >= func_02088bfc()) {
ok:
                return 1;
            }
        }
        return 0;
    }
    return 1;
}
