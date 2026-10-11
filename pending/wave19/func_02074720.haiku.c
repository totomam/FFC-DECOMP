#include "ffc/types.h"

extern uint32_t data_020b237c;
extern void func_02054218(void);
extern void func_02054380(void);

void *func_02074720(void *a) {
    uint8_t *p = (uint8_t *)a;
    *(uint32_t **)p = &data_020b237c;
    uint8_t *inner = *(uint8_t **)(p + 0x14);
    if (inner[0x16] != 0) {
        func_02054218();
        func_02054380();
        inner = *(uint8_t **)(p + 0x14);
        inner[0x16] = 0;
    }
    return p;
}
