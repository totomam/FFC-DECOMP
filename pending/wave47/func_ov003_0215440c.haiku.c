#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_02019e78(uint32_t a, uint32_t b, uint32_t c);

void func_ov003_0215440c(uint32_t x)
{
    uint32_t v;
    switch (x) {
    case 0x3e3:
        v = func_0201c9ac(data_020b93b8, 0x4d);
        if (v < 1) v = 1;
        func_02019e78(data_020b8e44, v, 0);
        break;
    case 0x3e4:
        v = func_0201c9ac(data_020b93b8, 0x4d);
        if (v < 1) v = 1;
        func_02019e78(data_020b8e44, v, 1);
        break;
    case 0x3e5:
        v = func_0201c9ac(data_020b93b8, 0x4d);
        if (v < 1) v = 1;
        func_02019e78(data_020b8e44, v, 2);
        break;
    case 0x3e6:
        v = func_0201c9ac(data_020b93b8, 0x4d);
        if (v < 1) v = 1;
        func_02019e78(data_020b8e44, v, 3);
        break;
    }
}
