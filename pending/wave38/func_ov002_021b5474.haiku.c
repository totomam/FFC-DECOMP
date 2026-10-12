#include "ffc/types.h"

extern void func_02069434(void *p, uint32_t x);
extern uint32_t data_ov002_021d5b1c[];

void *func_ov002_021b5474(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t *arr, int n) {
    uint32_t *self = (uint32_t *)p;
    int i = 0;
    func_02069434(p, 0);
    self[0] = (uint32_t)data_ov002_021d5b1c;
    self[0x2e] = a;
    self[0x2f] = b;
    self[0x30] = c;
    self[0x34] = n;
    if (n > 0) {
        do {
            self[0x31 + i] = arr[i];
            i++;
        } while (i < (int)self[0x34]);
    }
    return p;
}
