#include "ffc/types.h"

extern uint32_t data_ov006_021ba1dc[];
extern uint8_t data_ov006_021b8b8c[];

extern void func_ov006_0219ef6c(void *p, int v, uint32_t n);
extern void func_ov006_0219ef5c(void *dst, void *src, uint32_t n);
extern uint32_t func_ov006_0219f090(void *p);
extern void func_ov006_0219ed94(void *dst, uint32_t n, void *src, uint32_t x);
extern void func_ov006_0219ea68(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, void *f);
extern void func_ov006_0219eac0(void *obj, uint32_t a, uint32_t b, uint32_t c);

int func_ov006_0219e91c(void *unused, uint8_t *p, uint32_t v)
{
    uint8_t local[8];
    void *obj = (void *)data_ov006_021ba1dc[5];

    func_ov006_0219ef6c(obj, 0, 0x5dc);
    p += 0x10;
    func_ov006_0219ef5c(local, p, 8);
    func_ov006_0219ed94(local, 8, data_ov006_021b8b8c, func_ov006_0219f090(data_ov006_021b8b8c));
    func_ov006_0219ea68(obj, 3 << 12, 0, 0, 0, 0x11, local);
    func_ov006_0219eac0(obj, 0x18, 0, v);
    return 0;
}
