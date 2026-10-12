#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_ov006_021a6508(int *out_status, int *out_val);
extern void func_ov006_021aff14(void *p);
extern uint8_t func_ov006_021b5404(void *p, int n);
extern void func_ov006_021a9fc0(void);
extern void func_ov006_021a3e78(int v);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern void func_ov006_021a3bb0(int a);
extern uint32_t func_ov006_021b42f8(int a, int b);
extern uint32_t func_ov006_021b3e6c(int a, int b);
extern void func_ov006_021aa410(void);
extern void func_ov006_021aa380(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021aa040(void);
extern uint8_t data_ov006_021b85f8[];
extern uint32_t *data_ov006_021bc780;

void func_ov006_021a9f00(void)
{
    int status;
    int val;
    uint8_t buf[4];
    uint8_t *pb;
    uint32_t *r;
    uint16_t hw;

    buf[0] = data_ov006_021b85f8[0];
    buf[1] = data_ov006_021b85f8[1];

    data_ov006_021bc780 = func_ov006_021b49e4(0x2c, 4);
    func_ov006_021a6508(&status, &val);
    if (status == 0) {
        func_ov006_021aff14((uint8_t *)data_ov006_021bc780 + 8);
        *((uint8_t *)data_ov006_021bc780 + 0x29) =
            func_ov006_021b5404((uint8_t *)data_ov006_021bc780 + 8, 0x20);
    }
    func_ov006_021a9fc0();
    func_ov006_021a3e78(status + 9);
    if (val == 1) {
        func_ov006_021a3aa0(0x35, -1, 0);
    } else {
        func_ov006_021a3aa0(buf[status], -1, 0);
    }
    func_ov006_021a3bb0(2);
    data_ov006_021bc780[0] = func_ov006_021b42f8(0, 0);
    data_ov006_021bc780[1] = func_ov006_021b3e6c(0, 0x3e);
    r = (uint32_t *)data_ov006_021bc780[1];
    hw = *(uint16_t *)((uint8_t *)r + 4);
    *(uint16_t *)((uint8_t *)r + 4) = (uint16_t)(((uint32_t)hw & 0xfffff3ffu) | 0xc00u);
    func_ov006_021aa410();
    func_ov006_021aa380();
    func_ov006_021a64c8((void *)func_ov006_021aa040);
}
