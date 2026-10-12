#include "ffc/types.h"

extern int32_t func_02092864(const uint8_t *text);
extern int32_t func_ov000_02156d00(uint8_t *ctx, void *buf, int32_t n);
extern int32_t func_02086b04(int32_t pos, int32_t avail, const void *data, const uint8_t *text);
extern uint8_t data_ov000_02169ea0[];

typedef struct {
    int32_t unk0;
    int32_t pos;
    int32_t end;
} Buf;

int32_t func_ov000_02156c38(uint8_t *ctx, const uint8_t *text)
{
    int32_t n;
    Buf *b;
    int32_t avail;
    int32_t got;

    b = (Buf *)(ctx + 0x1a34);
    n = func_02092864(text);
    avail = b->end - b->pos;

    if (n > avail) {
        if (func_ov000_02156d00(ctx, b, n - avail + 1) == 0) {
            return 1;
        }
        avail = b->end - b->pos;
    }

    got = func_02086b04(b->pos, avail, data_ov000_02169ea0, text);
    if (got != n) {
        return 1;
    }
    b->pos = b->pos + got;
    return 0;
}
