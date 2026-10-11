#include "ffc/types.h"

extern void func_ov006_021a8818(void);
extern void func_ov006_021a881c(void);
extern int32_t func_ov006_021b1420(void);
extern void func_ov006_021b0600(int32_t);
extern void func_ov006_021a6730(int32_t);
extern void func_ov006_021b13f8(void);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a8820(void);
extern uint8_t data_ov006_021bc764[];

void func_ov006_021a87d0(void)
{
    int32_t r;
    func_ov006_021a8818();
    func_ov006_021a881c();
    r = func_ov006_021b1420();
    switch (r) {
    case 0:
        data_ov006_021bc764[1] = 0;
        r = 7;
        break;
    case 1:
        data_ov006_021bc764[1] = 1;
        r = 14;
        break;
    default:
        return;
    }
    func_ov006_021b0600(r);
    func_ov006_021a6730(0);
    func_ov006_021b13f8();
    func_ov006_021a64c8(func_ov006_021a8820);
}
