#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} S16;

extern void *func_0205681c(uint32_t size);
extern void func_02057378(void *obj, S16 s1, S16 s2);
extern uint8_t data_020b130c[];

void *func_02060cf0(uint32_t a, S16 s1, S16 s2, uint32_t j, uint32_t k)
{
    uint8_t *obj = (uint8_t *)func_0205681c(0x78);
    if (obj != 0) {
        uint32_t v;
        func_02057378(obj, s1, s2);
        *(uint8_t **)obj = data_020b130c;
        *(uint32_t *)(obj + 0x74) = a;
        *(uint32_t *)(obj + 0x24) = j;
        if (obj[0x15] != 0) {
            if (j == 0) {
                *(uint32_t *)(obj + 0x1c) = 1;
            } else {
                *(uint32_t *)(obj + 0x1c) = j << 4;
            }
        }
        *(uint32_t *)(obj + 0x30) = k;
    }
    return obj;
}
