#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint32_t data_ov007_021c513c[];

void *func_ov007_021ac344(void *p)
{
    uint8_t *b = (uint8_t *)p;
    uint32_t *q;
    func_020694ac(p, 0, 0);
    *(uint32_t **)p = data_ov007_021c513c;
    q = (uint32_t *)(b + 0xe8);
    *q = 0;
    *(uint32_t *)(b + 0xf8) = 0;
    b[0xfc] = 0;
    q[1] = 0;
    q[2] = 0;
    b[0xfd] = 12;
    b[0xfe] = 60;
    b[0xff] = 0;
    return p;
}
