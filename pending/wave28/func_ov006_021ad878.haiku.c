#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *p;
} Global;

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_ov006_021ad8c0(void);
extern void func_ov006_021a3e78(uint32_t x);
extern void func_ov006_021a3aa0(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021a3bb0(uint32_t x);
extern void func_ov006_021ad970(void);
extern void func_ov006_021addb4(void);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021ada18(void);
extern Global data_ov006_021bc7ac;

void func_ov006_021ad878(void)
{
    uint8_t *p = (uint8_t *)func_ov006_021b49e4(0x20, 4);
    data_ov006_021bc7ac.p = p;
    p[0x1d] = 0;
    func_ov006_021ad8c0();
    func_ov006_021a3e78(1);
    func_ov006_021a3aa0(0x2f, (uint32_t)(0x2f - 0x30), 0);
    func_ov006_021a3bb0(0);
    func_ov006_021ad970();
    func_ov006_021addb4();
    func_ov006_021a64c8(func_ov006_021ada18);
}
