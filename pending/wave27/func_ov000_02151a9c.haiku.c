#include "ffc/types.h"

extern int func_02087460(void *p);
extern int func_021d86fc(void *p, int v);
extern int func_021d872c(void *p, int v, void *buf);
extern uint8_t data_ov000_02169640[];

int func_ov000_02151a9c(void *p)
{
    uint8_t buf[4];

    if (func_02087460(p) != 0) {
        if (func_021d86fc(p, 0x30) == 0) {
            buf[0] = data_ov000_02169640[0];
            buf[1] = data_ov000_02169640[1];
            buf[2] = data_ov000_02169640[2];
            buf[3] = data_ov000_02169640[3];
            if (func_021d872c(p, 0xdd, buf) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
