#include "ffc/types.h"

extern void *func_020367bc(void *p, uint32_t idx);
extern int func_020368fc(void *a, void *b, uint32_t c);

uint32_t func_02036958(void *p, void *q, uint32_t c) {
    uint32_t count = 0;
    uint32_t i;
    for (i = 0; i < 5; i++) {
        if (((uint8_t *)p)[0x34 + i * 4] != 0) {
            void *r = func_020367bc(p, i);
            if (func_020368fc(q, r, c) != 0) {
                count++;
            }
        }
    }
    return count;
}
