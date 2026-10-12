#include "ffc/types.h"

extern uint8_t data_ov006_021bc7cc;
extern void func_ov006_021af098(void);
extern void func_ov006_021a3e78(int x);
extern void func_ov006_021a3bb0(int x);
extern void func_02088b50(void *p);
extern void func_020849ac(int a, void *b, uint32_t c);
extern void func_020849c4(void *a, void *b, uint32_t c);
extern void func_ov006_021a3c44(void *p, int n);
extern void func_ov006_021a354c(int x);
extern void func_ov006_021b0d40(void (*f)(void));
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021af2d8(void);
extern void func_ov006_021af108(void);

void func_ov006_021af028(void)
{
    uint8_t buf[0x6c];

    data_ov006_021bc7cc = 0;
    func_ov006_021af098();
    func_ov006_021a3e78(8);
    func_ov006_021a3bb0(2);
    func_02088b50(buf + 0x16);
    func_020849ac(0, buf, 0x16);
    func_020849c4(buf + 0x1a, buf, (uint32_t)(*(uint16_t *)(buf + 0x30)) << 1);
    func_ov006_021a3c44(buf, 0x28);
    func_ov006_021a354c(0);
    func_ov006_021b0d40(func_ov006_021af2d8);
    func_ov006_021b0600(0xb);
    func_ov006_021a64c8(func_ov006_021af108);
}
