#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_02090380(void *destination, const void *source, uint32_t length);

typedef struct {
    uint8_t *base;
    uint32_t pad;
    uint32_t off;
} S;

void func_ov001_0217fe28(S *s, const uint8_t *text, uint32_t len)
{
    if (text == 0) {
        return;
    }
    if (len == 0) {
        return;
    }
    if (len == 0xFFFFFFFFu) {
        len = func_02092864(text);
    }
    func_02090380(s->base + s->off, text, len);
    s->off += len;
}
