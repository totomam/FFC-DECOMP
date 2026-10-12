#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern uint8_t data_02141510[];
extern uint8_t data_ov000_0216e01c[];

int32_t func_ov000_0214e2cc(int32_t a)
{
    int32_t n;
    int32_t lim;
    uint8_t *obj;
    uint16_t *p;
    int32_t r;

    obj = *(uint8_t **)(*(uint8_t **)(data_02141510 + 4) + 0xa4);
    func_02088978();

    if (obj != 0) {
        int32_t r3 = *(uint16_t *)(obj + 0x3a);
        if (r3 != 0) {
            int32_t r2 = *(uint16_t *)(obj + 0x38);
            if (r2 != 0) {
                lim = *(int32_t *)(data_ov000_0216e01c + 0x24);
                if (r3 > r2) {
                    r3 = r2;
                }
                if (r3 > lim) {
                    r3 = lim;
                }
                n = r3 << 1;
                goto L3c;
            }
        }
    }
    lim = *(int32_t *)(data_ov000_0216e01c + 0x24);
    n = lim << 1;

L3c:
    func_0208898c();
    if (n > 0) {
        r = func_0209a76c(a, n);
        if (r > 0) {
            return r * n;
        }
    }
    return a;
}
