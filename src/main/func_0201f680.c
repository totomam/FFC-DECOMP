#include "ffc/types.h"

extern void *func_020197b4(void *p);
extern void *data_020b8e44;

int func_0201f680(void)
{
    uint8_t *p = (uint8_t *)func_020197b4(data_020b8e44);
    if (p[9] == 4) {
        switch (p[8]) {
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        }
    }
    return 0;
}
