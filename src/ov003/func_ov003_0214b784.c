#include "ffc/types.h"
extern void func_02056858(void *p);
void func_ov003_0214b784(uint8_t *self, uint32_t idx) {
    uint32_t off = idx * 4;
    uint8_t *base = self + 0x400;
    if (*(uint32_t *)(base + off) != 0) {
        func_02056858((void *)*(uint32_t *)(base + off));
        *(uint32_t *)(base + off) = 0;
    }
}
