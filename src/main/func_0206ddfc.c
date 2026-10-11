#include "ffc/types.h"

extern int func_0206cb98(void *p);
extern int func_0208e2f0(uint32_t a, uint32_t b, uint8_t *c);
extern uint32_t data_0213e178;

void func_0206ddfc(uint8_t *p)
{
    int r;
    uint8_t v;
    if (func_0206cb98((void *)data_0213e178)) {
        return;
    }
    r = func_0208e2f0(*(uint32_t *)(data_0213e178 + 0x285c), *(uint32_t *)(p + 0x2c), p + 0x30);
    v = 1;
    if (r != 0) {
        v = 0;
    }
    p[0x24c] = v;
}
