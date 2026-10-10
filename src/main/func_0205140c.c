#include "ffc/types.h"

extern void func_020513c4(void *out, void *base, void *args);
extern uint8_t data_0213df44[];
extern uint8_t data_0213df48[];

int func_0205140c(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    void *out;
    int r;
    func_020513c4(&out, data_0213df44, &a);
    if (out == data_0213df48) r = 0; else r = 1;
    switch (r) {
    default: return 1;
    case 0: return 0;
    }
}
