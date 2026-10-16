#include "ffc/types.h"
extern int func_ov008_02199e40(void *p, uint8_t i);
extern void func_ov008_02199e4c(void *p, uint8_t i, int v);
extern void func_ov005_02196bcc(void *p, int v);
extern void func_ov008_02199e8c(void *p);
void func_ov008_02199d38(uint8_t *self, uint32_t key) {
    uint8_t i;
    uint32_t base = *(uint8_t *)(self + 0x140) * 8;
    for (i = 0; i < 8; i++) {
        uint8_t idx = (uint8_t)(i + base);
        if (key == (*(uint32_t **)(self + 0xcc))[i]) {
            int v;
            if (idx >= *(uint32_t *)(self + 0xf4)) return;
            v = func_ov008_02199e40(self, idx) == 0;
            func_ov008_02199e4c(self, idx, v);
            func_ov005_02196bcc((void *)(*(uint32_t **)(self + 0xcc))[i], v);
            func_ov008_02199e8c(self);
            return;
        }
    }
}
