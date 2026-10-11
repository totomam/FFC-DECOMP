#include "ffc/types.h"

extern void func_02086b04(uint8_t *buf, int n, const uint8_t *data, int a0, int a1, int a2, int a3);
extern void func_ov006_021b541c(uint8_t *dst, uint8_t *src, int n);
extern void func_ov006_021b453c(void *obj, int id, int x, int y, int a, uint8_t *p, int b);
extern uint8_t data_ov006_021b965c[];
extern uint8_t data_ov006_021bc78c[];

void func_ov006_021ac078(const uint8_t *p, int b)
{
    uint8_t buf2[32];
    uint8_t buf[16];

    func_02086b04(buf, 0x10, data_ov006_021b965c, p[0], p[1], p[2], p[3]);
    func_ov006_021b541c(buf2, buf, 0x10);
    func_ov006_021b453c(*(void **)(*(uint8_t **)(data_ov006_021bc78c + 8) + 0x14),
                        0x5f, b * 0x1d + 8, 2, 7, buf2, 1);
}
