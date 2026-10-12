#include "ffc/types.h"

typedef struct {
    uint32_t *data;
    int32_t size;
} Buf;

extern void func_020224fc(Buf *p, int32_t n, uint32_t v);
extern void func_02090398(uint32_t *dst, uint32_t *src, uint32_t bytes);

void func_ov003_0216a4a8(Buf *p, uint32_t *start, uint32_t *end) {
    int32_t d = (int32_t)((uint8_t *)end - (uint8_t *)start);
    uint32_t w;
    uint8_t *b = (uint8_t *)&w;
    if (d / 4 == 0) return;
    b[1] = 0;
    func_020224fc(p, d / 4, *(uint32_t *)b);
    func_02090398(p->data + p->size, start, (uint32_t)((d / 4) * 4));
    p->size += d / 4;
}
