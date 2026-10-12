#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
extern void func_ov007_021ac7cc(void *p);

void func_ov007_021ac758(void *p0, uint32_t x)
{
    uint8_t *p = (uint8_t *)p0;
    uint8_t flag;
    uint8_t i;

    if (x == 0) {
        return;
    }
    flag = p[0xff];
    if (flag) {
        p[0xff] = 0;
        return;
    }
    if (x == *(uint32_t *)(p + 0xbc)) {
        if (!flag) {
            func_02021338(0xba);
        }
        return;
    }
    for (i = 0; i < 5; i++) {
        if (x == *(uint32_t *)(p + 0xc0 + i * 4)) {
            if (!flag) {
                func_02021338(0xba);
            }
            p[0xf4] = (*(uint8_t **)(p + 0xe8))[i + p[0xfc] * 5];
            func_ov007_021ac7cc(p);
            return;
        }
    }
}
