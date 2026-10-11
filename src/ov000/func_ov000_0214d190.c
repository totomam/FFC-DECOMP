#include "ffc/types.h"

extern uint32_t data_ov000_0216e04c[];
extern void *data_ov000_02169a34;

int func_ov000_0214d190(void) {
    int32_t *p = data_ov000_0216e04c;
    if (p[8] < p[6]) {
        return -1;
    }
    {
        void (*fn)(uint32_t);
        fn = *(void (**)(uint32_t))((uint8_t *)(*(void **)&data_ov000_02169a34) + 0x1c);
        fn(p[0]);
    }
    p[0] = 0;
    return 0;
}
