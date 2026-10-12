#include "ffc/types.h"

extern uint8_t data_0213e6a4[];
extern void *func_02077b70(void *a, void *b);
extern void func_02079df8(void *a, uint32_t b);

void func_020799bc(uint32_t idx, uint32_t arg)
{
    uint8_t *base = data_0213e6a4 + idx * 0x24;
    void *n = func_02077b70(base, 0);
    while (n != 0) {
        void *m = func_02077b70(base, n);
        func_02079df8(n, arg);
        n = m;
    }
}
