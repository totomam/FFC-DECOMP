#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern uint8_t data_02141510[];
extern uint8_t data_ov000_0216e01c[];

int32_t func_ov000_0214e2cc(int32_t a)
{
    int32_t n;
    uint8_t *obj;

    obj = *(uint8_t **)(*(uint8_t **)(data_02141510 + 4) + 0xa4);
    func_02088978();

    if (obj != 0) {
        uint16_t x = *(uint16_t *)(obj + 0x3a);
        if (x != 0) {
            uint16_t y = *(uint16_t *)(obj + 0x38);
            if (y != 0) {
                int32_t lim = *(int32_t *)(data_ov000_0216e01c + 0x24);
                int32_t m = (x > y) ? y : x;
                n = ((m > lim) ? lim : m) << 1;
                goto done;
            }
        }
    }
    n = *(int32_t *)(data_ov000_0216e01c + 0x24) << 1;
done:
    func_0208898c();
    if (n > 0) {
        int32_t r = func_0209a76c(a, n);
        if (r > 0) {
            return r * n;
        }
    }
    return a;
}
