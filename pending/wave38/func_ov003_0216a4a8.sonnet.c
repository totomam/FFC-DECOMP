/* cflags: -lang c++ */
#include "ffc/types.h"
typedef struct { uint32_t *data; int32_t size; } Buf;
struct W { uint8_t a; uint8_t b; W() {} W(const W &o) : b(o.b) {} };
extern "C" {
void func_020224fc(Buf *p, int32_t n, W v);
void func_02090398(uint32_t *dst, uint32_t *src, uint32_t bytes);
void func_ov003_0216a4a8(Buf *p, uint32_t *start, uint32_t *end);
}
void func_ov003_0216a4a8(Buf *p, uint32_t *start, uint32_t *end) {
    int32_t d = (int32_t)((uint8_t *)end - (uint8_t *)start);
    if (d / 4 == 0) return;
    W w;
    w.b = 0;
    func_020224fc(p, d / 4, w);
    func_02090398(p->data + p->size, start, (uint32_t)((d / 4) * 4));
    p->size += d / 4;
}
