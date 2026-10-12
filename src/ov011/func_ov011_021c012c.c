#include "ffc/types.h"

extern void func_02036750(void *p);
extern void func_0201f1f0(void *obj, int v, void *p);
extern void func_ov011_021c00d8(void *a, void *p, void *b, uint32_t c);
extern void func_0201f1a8(void *obj, int v, void *p);
extern void func_020367a8(void *p);
extern void *data_020b93b8;

void func_ov011_021c012c(void *a, void *b, uint32_t c)
{
    uint8_t i;
    uint32_t buf[22];

    for (i = 1; i < 4; i++) {
        func_02036750(buf);
        func_0201f1f0(data_020b93b8, i, buf);
        func_ov011_021c00d8(a, buf, b, c);
        func_0201f1a8(data_020b93b8, i, buf);
        func_020367a8(buf);
    }
}
