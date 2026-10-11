#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);
extern int func_ov000_02150908(void);
extern int func_02087460(void);
extern int func_021db0d8(void);

int func_ov000_0214fa18(void) {
    uint8_t *p = func_ov000_0214fa54();
    uint32_t idx = 0x12de;
    uint8_t v = p[idx];
    if (v >= 3 && v <= 10) {
        uint8_t s = p[idx + 1];
        switch (s) {
        case 1:
            return func_ov000_02150908();
        case 2:
            if (func_02087460() != 0) {
                return func_021db0d8();
            }
            break;
        }
    }
    return 0;
}
