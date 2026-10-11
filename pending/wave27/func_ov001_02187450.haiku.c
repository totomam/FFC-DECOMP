#include "ffc/types.h"

extern void func_ov001_02186e00(void *a, uint32_t b);

void func_ov001_02187450(uint8_t *p) {
    int32_t i = 0;
    int32_t *cnt;

    if (*(int32_t *)(p + 0x480) > 0) {
        cnt = (int32_t *)(p + 0x480);
        do {
            func_ov001_02186e00(p, *(uint32_t *)(p + 0x84 + i * 4));
            i++;
        } while (i < *cnt);
    }
    *(int32_t *)(p + 0x480) = 0;
}
