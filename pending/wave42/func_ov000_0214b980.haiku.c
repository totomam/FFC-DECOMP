#include "ffc/types.h"

extern int32_t func_02088978(void);
extern void func_0208898c(int32_t);
extern void func_020870a0(void *object);
extern uint8_t data_ov000_0216de9c[];
extern uint8_t data_02141510[];

void func_ov000_0214b980(int32_t a)
{
    int32_t t = func_02088978();
    int32_t i;
    for (i = 0; i < 4; i++) {
        uint8_t *e = data_ov000_0216de9c + i * 0x5c;
        if (e[0x5a] != 0) {
            if (a - *(int32_t *)(e + 0x50) > 0x3bd) {
                e[0x5a] = 0;
            }
        }
    }
    func_0208898c(t);

    uint8_t *node = *(uint8_t **)(data_02141510 + 8);
    while (node != 0) {
        uint8_t *p = *(uint8_t **)(node + 0xa4);
        if (p != 0 && *(void **)p != 0 && p[9] != 0 && p[8] == 4) {
            if (((uint8_t *)*(uint8_t **)(p + 0xc))[0x455] < 8) {
                if (a - *(int32_t *)(p + 0x10) > 0xef && *(int32_t *)(p + 4) == 2) {
                    p[8] = 0;
                    *(int32_t *)(p + 4) = 0;
                    func_020870a0(*(void **)p);
                }
            }
        }
        node = *(uint8_t **)(node + 0x68);
    }
}
