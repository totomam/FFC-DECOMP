#include "ffc/types.h"

extern uint8_t data_ov006_021bc7bc;
extern void func_ov006_021ae678(void);
extern void func_ov006_021a6508(int a, int *out);
extern void func_ov006_021a3aa0(int a, int b, int c);
extern void func_ov006_021a3bb0(int a);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3bfc(int a);
extern void func_ov006_021a354c(int a);
extern void func_ov006_021ae6e8(void);
extern void func_ov006_021a3f08(int a);
extern void func_ov006_021b0600(int a);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021ae754(void);

void func_ov006_021ae610(void)
{
    int val;

    data_ov006_021bc7bc = 0;
    func_ov006_021ae678();
    func_ov006_021a6508(0, &val);
    if (val == 0) {
        func_ov006_021a3aa0(0x31, -1, 0);
    }
    func_ov006_021a3bb0(2);
    if (val == 0) {
        func_ov006_021a3eb8();
    }
    func_ov006_021a3bfc(0x2c);
    func_ov006_021a354c(0);
    func_ov006_021ae6e8();
    func_ov006_021a3f08(0);
    func_ov006_021b0600(0xc);
    func_ov006_021a64c8(func_ov006_021ae754);
}
