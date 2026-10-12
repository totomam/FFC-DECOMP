#include "ffc/types.h"

extern int func_ov001_0217ec8c(void *p, int x, int y);
extern int func_ov001_0217ed8c(void *a, const void *b, void *c, int d);
extern int func_ov001_0217ef50(void *p, int a, const void *b);
extern int func_ov001_021788f0(void *p, int a, int b);
extern uint32_t func_02093b18(void *buf);
extern const uint8_t data_ov001_02190a08[];
extern const uint8_t data_ov001_02190a88[];
extern const uint8_t data_ov001_021909c4[];

int func_ov001_02179c7c(void *p, int x)
{
    uint8_t buf[0x200];
    uint8_t *r5;

    r5 = *(uint8_t **)p;
    if (func_ov001_0217ec8c(p, x, 1) != 0) {
        return 4;
    }
    if (func_ov001_0217ed8c(*(void **)(r5 + 0x208), data_ov001_02190a08, buf, 0x200) == 0) {
        func_ov001_0217ef50(p, 1, data_ov001_02190a88);
        func_ov001_021788f0(p, 3, 1);
        return 3;
    }
    *(uint32_t *)(r5 + 0x610) = func_02093b18(buf);
    if (func_ov001_0217ed8c(*(void **)(r5 + 0x208), data_ov001_021909c4, buf, 0x200) == 0) {
        func_ov001_0217ef50(p, 1, data_ov001_02190a88);
        func_ov001_021788f0(p, 3, 1);
        return 3;
    }
    *(uint32_t *)(r5 + 0x1A4) = func_02093b18(buf);
    return 0;
}
