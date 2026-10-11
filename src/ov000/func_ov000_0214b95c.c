#include "ffc/types.h"

extern void func_02004eb0(void *p);
extern uint32_t data_02141510[];

void func_ov000_0214b95c(uint8_t v)
{
    uint8_t *obj;
    uint8_t *inner;

    func_02004eb0((void *)0x2005080);
    obj = (uint8_t *)data_02141510[1];
    inner = *(uint8_t **)(obj + 0xa4);
    if (inner != 0) {
        inner[9] = v;
    }
}
