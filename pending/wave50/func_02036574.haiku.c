#include "ffc/types.h"

extern void func_02035be0(void *object);
extern void func_02036460(void *destination, const void *source);
extern void func_02035c18(void *p);
extern void func_02015aa4(void *dst, void *src, uint8_t val);
extern void func_02036468(void *object, void *src);
extern void *data_020b8e44;

void func_02036574(void *obj, uint32_t val, uint32_t flag)
{
    uint8_t buf[0x1c];
    uint32_t v;
    uint16_t *s;
    uint16_t *d;

    v = (*(uint32_t *)((uint8_t *)obj + 0x58) & 0x8fffffff) | ((val << 29) >> 1);
    *(uint32_t *)((uint8_t *)obj + 0x58) = v;

    if (flag != 0) {
        if (((v << 1) >> 29) == 0) {
            func_02035be0(buf);
            func_02036460(obj, buf);
            func_02035c18(buf);
        } else {
            func_02015aa4(buf + 4, data_020b8e44, (uint8_t)v);
            s = (uint16_t *)(buf + 4);
            d = (uint16_t *)(buf + 0x10);
            d[0] = s[0];
            d[1] = s[1];
            d[2] = s[2];
            d[3] = s[3];
            d[4] = s[4];
            d[5] = s[5];
            func_02036468(obj, buf + 0x10);
        }
    }
}
