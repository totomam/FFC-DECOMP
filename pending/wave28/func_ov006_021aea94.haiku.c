#include "ffc/types.h"

extern void func_ov006_021afa00(void);
extern void func_ov006_021a6508(int32_t, int32_t *);
extern void func_ov006_021aead4(void);
extern void func_ov006_021a3aa0(int32_t, int32_t, int32_t);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021b00bc(void);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021aeb1c(void);

void func_ov006_021aea94(void)
{
    int32_t x;

    func_ov006_021afa00();
    func_ov006_021a6508(0, &x);
    func_ov006_021aead4();
    func_ov006_021a3aa0(0x31, -1, 0);
    if (x != 2) {
        func_ov006_021a3eb8();
    }
    if (x == 1) {
        func_ov006_021b00bc();
    }
    func_ov006_021a64c8(func_ov006_021aeb1c);
}
