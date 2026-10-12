#include "ffc/types.h"

extern void func_0206bf5c(void *ctx);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void *func_0206c030(void *object);

void func_ov011_021c7a5c(uint8_t *o)
{
    uint8_t local[8];
    uint32_t i;
    uint32_t *cp = (uint32_t *)(o + 0x128);

    func_0206bf5c(local);
    i = 0;
    if (*cp != 0) {
        do {
            uint32_t j = func_0206c184((uint32_t)local, *cp);
            uint32_t *arr = *(uint32_t **)(o + 0x124);
            uint32_t a = arr[i];
            arr[i] = arr[j];
            arr[j] = a;
            i++;
        } while (i < *(uint32_t *)(o + 0x128));
    }
    func_0206c030(local);
}
