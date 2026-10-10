#include "ffc/types.h"

extern void func_020513c4(void *out, void *base, void *args);
extern uint8_t data_0213df5c[];
extern uint8_t data_0213df60[];

int func_02051388(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    void *out;
    func_020513c4(&out, data_0213df5c, &a);
    if (out == data_0213df60) {
        return 0;
    }
    return 1;
}
