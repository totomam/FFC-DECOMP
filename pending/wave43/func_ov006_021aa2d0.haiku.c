#include "ffc/types.h"

extern void func_ov006_021a3b28(void);
extern void func_ov006_021b51a8(void *p);
extern void func_ov006_021b4488(uint32_t x);
extern void func_ov006_021a3b88(void *a, void (*b)(void));
extern void func_ov006_021b4734(uint32_t a, uint32_t b);
extern void func_ov006_021a6508(uint32_t *a, uint32_t *b);
extern void func_ov006_021a64d4(uint32_t a, uint32_t b);
extern void func_ov006_021a64fc(uint32_t a, uint32_t b);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021b49fc(void *p);
extern void *data_ov006_021bc780;
extern uint8_t data_ov006_021b951c[];
extern void func_0208243c(void);
extern void func_ov006_021ab254(void);
extern void func_ov006_021a9134(void);
extern void func_ov006_021aea94(void);

void func_ov006_021aa2d0(void)
{
    uint32_t tmp[2];
    void (*fp)(void);

    func_ov006_021a3b28();
    func_ov006_021b51a8(((void **)data_ov006_021bc780)[1]);
    func_ov006_021b4488(0);
    func_ov006_021a3b88(data_ov006_021b951c, func_0208243c);
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x15);
    func_ov006_021a6508(&tmp[1], &tmp[0]);

    if (tmp[0] == 0) {
        func_ov006_021a64d4(2, 1);
        func_ov006_021a64fc(0, tmp[1]);
        fp = func_ov006_021ab254;
    } else if (((uint8_t *)data_ov006_021bc780)[0x2a] == 0) {
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64fc(1, 0);
        fp = func_ov006_021a9134;
    } else {
        func_ov006_021a64d4(0, 0);
        func_ov006_021a64fc(0, 1);
        fp = func_ov006_021aea94;
    }

    func_ov006_021a64c8(fp);
    func_ov006_021b49fc(&data_ov006_021bc780);
}
