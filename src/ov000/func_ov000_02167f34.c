#include "ffc/types.h"

typedef struct {
    uint8_t *buf;
    uint32_t pos;
    uint32_t cap;
} FfcBuf;

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_02168088(FfcBuf *s);
extern void func_02092878(uint8_t *dst, const uint8_t *src);

uint32_t func_ov000_02167f34(FfcBuf *s, const uint8_t *text)
{
    int32_t len = func_02092864(text);
    if (len == 0) {
        return 1;
    }
    while ((int32_t)(s->cap - s->pos) <= len) {
        if (func_ov000_02168088(s) == 0) {
            return 0;
        }
    }
    func_02092878(s->buf + s->pos, text);
    s->pos += len;
    return 1;
}
