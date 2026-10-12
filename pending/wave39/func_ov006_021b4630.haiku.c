#include "ffc/types.h"

extern void *func_ov006_021b3bf8(void *a, int b);
extern void func_ov006_021b3c04(void *a, int b, int c, int d);
extern void func_ov006_021b3c84(void *a, int b, int c, int d);
extern void func_ov006_021b3d84(void *a, int b, int c);
extern int func_02079048(void *a, uint8_t b, uint8_t c, void *d, int e, int f, uint16_t g, int h);

void func_ov006_021b4630(uint8_t *p, void *q, int r, void *s, int t)
{
    void *res = func_ov006_021b3bf8(s, 0);
    func_ov006_021b3c04(s, -1, 0, 0);
    func_ov006_021b3c84(s, -1, 0, 15);
    func_ov006_021b3d84(s, -1, t);
    func_02079048(res, p[0x2e], p[0x2f], q, r, 0, *(uint16_t *)(p + 0x2c), 2);
}
