#include "ffc/types.h"

extern uint32_t func_ov000_021652a8(int a, int b, int c, const void *d);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_ov001_02185d2c(uint8_t *obj, uint8_t v);
extern int func_ov001_02187288(uint8_t *obj, uint8_t *buf, int a, int b, int c);
extern void func_ov000_02165938(int v);
extern int func_ov001_021867cc(uint8_t *obj);
extern const uint8_t data_ov001_021942b8[];
extern const uint32_t data_ov001_02193d6c[];
extern const uint8_t data_ov001_021942f4[];

int func_ov001_02186658(uint8_t *obj, int flag, int a2, const uint8_t *ids, int count, int a5, int a6, int a7)
{
    uint8_t buf[256] = {0};
    uint32_t k;
    uint8_t *p;
    int n, j, len, r;
    uint32_t tbl;

    n = 0;
    if (count > 0x28) {
        func_ov000_021652a8(4, 4, 2, data_ov001_021942b8);
        return 6;
    }
    *(int *)(obj + 0x83c) = a2;
    *(int *)(obj + 0x54) = 0;
    {
        for (j = 0; j < count; j++) {
            tbl = data_ov001_02193d6c[ids[j]];
            len = func_02092864((const uint8_t *)tbl);
            if (n + len + 1 >= 256) {
                break;
            }
            n += func_02086ad4(buf + n, (uint32_t)data_ov001_021942f4, tbl);
            func_ov001_02185d2c(obj, ids[j]);
        }
    }
    r = func_ov001_02187288(obj + 0x60, buf, a5, a6, a7);
    if (r != 0 || flag != 0) {
        return r;
    }
    while (*(int *)(obj + 0x60) == 3 || (*(int *)(obj + 0x10) > 0 && r == 0)) {
        func_ov000_02165938(10);
        r = func_ov001_021867cc(obj);
    }
    return r;
}
