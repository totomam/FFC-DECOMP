#include "ffc/types.h"

extern int32_t func_0202eba4(void *p);
extern int32_t func_0202b2dc(void *p);

int32_t func_0202ec24(void *p) {
    if (func_0202eba4(p) != 0) {
        return 1;
    }
    {
        void *q = *(void **)((uint8_t *)p + 0x84);
        if (q != 0) {
            return func_0202b2dc(q);
        }
    }
    return 1;
}
