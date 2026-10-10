#include "ffc/types.h"

uint8_t *func_0206975c(uint8_t *p)
{
    uint8_t *obj = *(uint8_t **)(*(uint8_t **)(p + 0x90) + 0x14);
    if (obj != 0) {
        do {
            if (*(obj + 0x84) != 0 && *(obj + 0x86) != 0) {
                return obj;
            }
            obj = *(uint8_t **)(obj + 4);
        } while (obj != 0);
    }
    return 0;
}
