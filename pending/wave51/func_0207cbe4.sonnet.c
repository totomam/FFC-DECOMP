#include "ffc/types.h"

extern uint16_t func_02088a2c(void *object);
extern int func_02087460(uint16_t v);
extern uintptr_t func_0207cab4(void);

typedef struct { uint32_t pad[0x6d]; uint32_t b0:1, b1:1, b2:1, b3:1, b4:1, b5:1, b6:1, b7:1, b8:1, pad2:6, b15:1, b16:1, rest:15; } S;
/* big-endian-less: lsb first -> bit8 = b8, bit5 = b5, bit15, bit16 */
uint32_t func_0207cbe4(void *object) {
    uint32_t r4 = 0;
    uint32_t cond;
    S *s;
    uint16_t v = func_02088a2c(object);
    if (v == 1) {
        r4 = 7;
    } else if (func_02087460(v) == 0) {
        r4 = 3;
    } else {
        s = (S *)func_0207cab4();
        cond = r4;
        if (s->b8) {
            r4 |= 4;
            cond = 1;
        } else if (s->b5) {
            cond = 1;
        }
        if (cond != 0) {
            if (s->b15) r4 |= 1;
            if (s->b16) r4 |= 2;
        }
    }
    return r4;
}
