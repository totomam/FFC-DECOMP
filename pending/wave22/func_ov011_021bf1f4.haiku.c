#include "ffc/types.h"

extern uint8_t data_ov011_021cb00c[];
extern uint8_t *data_0213df20;
extern void func_0206047c(uint32_t);
extern void func_020367a8(void *);
extern void func_021a4360(void *);

void *func_ov011_021bf1f4(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    *(uint8_t **)obj = data_ov011_021cb00c;
    func_0206047c(*(uint32_t *)(data_0213df20 + 0x20));
    func_020367a8(obj + 0x2cc);
    func_021a4360(obj);
    return obj;
}
