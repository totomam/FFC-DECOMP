#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t x);
extern int32_t func_ov000_02150660(uint8_t x);
extern int32_t func_02087460(uint8_t x);
extern int32_t func_021dade4(int32_t x);

typedef struct {
    uint32_t pad;
    uint8_t *base;
} Glob;

extern Glob data_ov000_0216e214;

int32_t func_ov000_0214f588(void)
{
    uint32_t v = func_02088978();
    uint8_t *b = data_ov000_0216e214.base;
    int32_t r5;
    uint8_t t;
    int32_t u;

    if (b == 0) {
        func_0208898c(v);
        return 1;
    }
    switch (b[0x12de]) {
    case 4:
        func_0208898c(v);
        return 2;
    case 1:
        func_0208898c(v);
        return 0;
    default:
        func_0208898c(v);
        return 1;
    case 3:
        t = b[0x12df];
        if (t == 1) {
            r5 = func_ov000_02150660(t);
        } else if (t == 2) {
            u = func_02087460(t);
            if (u == 0) {
                r5 = 7;
            } else {
                r5 = func_021dade4(u);
            }
        } else {
            r5 = 7;
        }
        func_0208898c(v);
        return r5;
    }
}
