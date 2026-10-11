#include "ffc/types.h"

extern void func_02068bbc(void *dst, void *src, void *p, uint16_t n);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} FlagWord;

void func_02068b70(uint8_t *p, uint32_t n) {
    uint32_t buf[2];
    void *q;
    FlagWord *fw = (FlagWord *)(p + 0x4c);
    if (fw->flag) {
        q = *(void **)(p + 0x54);
    } else {
        q = p + 0x4c + 2;
    }
    func_02068bbc(&buf[1], p + 0x4c, q, (uint16_t)n);
}
