#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern int func_0201f424(uint32_t a, int r, uint32_t *b);
extern void func_ov011_021c00d8(void *p, void *q, int r, uint32_t v);
extern void func_ov011_021c012c(void *p, int r, uint32_t v);

int func_ov011_021c2c20(void *p, int r)
{
    uint32_t v;
    if (func_0201f424(data_020b93b8, r, &v) != 0) {
        func_ov011_021c00d8(p, (uint8_t *)p + 0x2cc, r, v);
        func_ov011_021c012c(p, r, v);
        return 1;
    }
    return 0;
}
