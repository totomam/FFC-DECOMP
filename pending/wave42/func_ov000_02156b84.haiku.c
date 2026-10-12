#include "ffc/types.h"

extern const uint8_t data_ov000_02169e94[];
extern const uint8_t data_ov000_02169e98[];
extern int func_ov000_02158d6c(const void *a, const void *b, uint8_t *buf, int size);
extern uint32_t func_02092864(const uint8_t *text);
extern int func_ov000_02156d00(void *p, void *buf, int n);
extern int func_02086b04(uint8_t *dst, int avail, const uint8_t *s1, const uint8_t *s2);

typedef struct {
    uint32_t unk;
    uint8_t *cur;
    uint8_t *end;
} Buf;

typedef struct {
    uint8_t pad[0x1a30];
    uint32_t cnt;
    Buf buf;
} Ctx;

int func_ov000_02156b84(Ctx *p, const uint8_t *s1, uint32_t x2, uint32_t x3)
{
    Buf *b = &p->buf;
    const uint8_t *s;
    int r6, len0, len1, need, avail;
    uint8_t *t;

    s = data_ov000_02169e94;
    if (p->cnt) {
        s = data_ov000_02169e98;
    }
    p->cnt++;
    r6 = func_ov000_02158d6c(x2, x3, 0, 0);
    len1 = func_02092864(s);
    len0 = func_02092864(s1);
    need = r6 + (len1 - 2 + len0);
    avail = b->end - b->cur;
    if (need > avail) {
        if (func_ov000_02156d00(p, b, need - avail + 1) == 0) {
            return 1;
        }
        avail = b->end - b->cur;
    }
    b->cur += func_02086b04(b->cur, avail, s, s1);
    if (func_ov000_02158d6c(x2, x3, b->cur, (int)(b->end - b->cur) - 1) < 0) {
        return 1;
    }
    t = b->cur;
    b->cur = t + r6;
    t[r6] = 0;
    return 0;
}
