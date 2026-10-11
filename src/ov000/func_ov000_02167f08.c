#include "ffc/types.h"

extern int32_t func_ov000_02168088(void *p);

typedef struct {
    uint8_t *buf;
    int32_t idx;
    int32_t cap;
} Buf;

int32_t func_ov000_02167f08(Buf *p, uint8_t val)
{
    if (p->idx >= p->cap) {
        if (func_ov000_02168088(p) == 0) {
            return 0;
        }
    }
    p->buf[p->idx] = val;
    p->idx = p->idx + 1;
    return 1;
}
