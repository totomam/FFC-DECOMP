#include "ffc/types.h"

extern uint8_t data_0213e258[];
extern void *func_02077b70(void *list, void *prev);

int func_02079a40(uint32_t a, uint32_t b)
{
    int n = 0;
    uint8_t *p = (uint8_t *)func_02077b70(data_0213e258, 0);
    while (p != 0) {
        if (*(uint16_t *)(p + 0x34) == 2 &&
            *(uint16_t *)(p + 0x38) == a &&
            *(uint16_t *)(p + 0x3a) == b) {
            n++;
        }
        p = (uint8_t *)func_02077b70(data_0213e258, p);
    }
    return n;
}
