#include "ffc/types.h"

extern int32_t func_ov000_02152ae4(int32_t a);
extern int32_t func_ov000_02152b98(void);
extern int32_t func_ov000_02153448(void);
extern int32_t func_ov000_0215347c(void);
extern int32_t func_ov000_02153484(int32_t a);
extern int32_t func_ov000_0215349c(int32_t a);

int32_t func_ov000_021533fc(void)
{
    int32_t r4;
    int32_t r0;

    r4 = func_ov000_02152ae4(1);
    r0 = func_ov000_02152b98();
    if (r0 < 4) {
        return func_ov000_02153448();
    }
    if (r0 < 5) {
        return func_ov000_0215347c();
    }
    if (r0 == 5) {
        return func_ov000_02153484(r4);
    }
    if (r0 == 7) {
        return (int32_t)0xffff3a59;
    }
    if (r0 == 8) {
        return (int32_t)0xffff39f5;
    }
    return func_ov000_0215349c(r4);
}
