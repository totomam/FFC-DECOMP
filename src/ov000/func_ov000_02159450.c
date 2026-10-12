#include "ffc/types.h"

extern int func_ov000_02159ec8(void *a, void *b);
extern int func_ov000_021592ac(void *fmt, void *src, void *dst, int n);
extern uint8_t func_02093748(void *s, int end, int base);
extern void func_02092878(void *a, void *b);
extern int func_ov000_02163aa4(void *p);
extern uint8_t data_ov000_0216af7c[];
extern uint8_t data_ov000_0216af80[];

uint8_t func_ov000_02159450(void *a, uint8_t *o1, uint8_t *o2, void *o3)
{
    uint8_t frame[0x218];
    uint8_t res;

    if (func_ov000_02159ec8(a, frame + 4) != 0) {
        if (*(uint32_t *)(frame + 8) == 6) {
            if (o1 != 0) {
                if (func_ov000_021592ac(data_ov000_0216af7c, frame, frame + 0xc, 0x2f) > 0) {
                    *o1 = func_02093748(frame, 0, 10);
                } else {
                    *o1 = 0;
                }
            }
            if (o2 != 0) {
                if (func_ov000_021592ac(data_ov000_0216af80, frame, frame + 0xc, 0x2f) > 0) {
                    *o2 = func_02093748(frame, 0, 10);
                } else {
                    *o2 = 0;
                }
            }
        } else {
            if (o1 != 0) {
                *o1 = 0;
            }
            if (o2 != 0) {
                *o2 = 0;
            }
        }
        if (o3 != 0) {
            func_02092878(o3, frame + 0x10c);
        }
        res = (uint8_t)*(uint32_t *)(frame + 8);
        if (func_ov000_02163aa4(frame + 4) != 0) {
            res = 2;
        }
        return res;
    }

    if (o1 != 0) {
        *o1 = 0;
    }
    if (o2 != 0) {
        *o2 = 0;
    }
    return 0;
}
