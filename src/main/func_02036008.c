#include "ffc/types.h"

extern uint32_t func_02036044(void *object);
extern uint32_t func_02035ff4(void *object);
extern void *func_02036370(void *object, uint8_t idx);
extern uint8_t func_02035dac(const void *object);

uint32_t func_02036008(void *object) {
    uint32_t r = func_02036044(object);
    uint8_t i;
    if (r != 4) {
        if (r != 0) {
            return func_02035ff4(object);
        }
        for (i = 0; i < 4; i++) {
            void *p = func_02036370(object, i);
            if (func_02035dac(p) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
