#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t);
extern void *func_02039120(void *object);
extern void *data_02139d24;

void *func_020494c4(void) {
    if (data_02139d24 == 0) {
        void *p = (void *)func_0205681c(0x48);
        if (p != 0) {
            p = func_02039120(p);
        }
        data_02139d24 = p;
    }
    return data_02139d24;
}
