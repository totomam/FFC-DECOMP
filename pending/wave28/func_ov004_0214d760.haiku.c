#include "ffc/types.h"

extern uint8_t data_ov004_02159438[];
extern void func_02056858(void *p);
extern void func_02056db0(void *p);

void *func_ov004_0214d760(void *self)
{
    uint8_t *this = (uint8_t *)self;
    int i;
    uint32_t off;

    *(uint8_t **)this = data_ov004_02159438;
    for (i = 0; i < 2; i++) {
        off = i * 4;
        if (*(void **)(this + off + 0x98) != 0) {
            func_02056858(*(void **)(this + off + 0x98));
            *(void **)(this + off + 0x98) = 0;
        }
    }
    func_02056db0(this);
    return this;
}
