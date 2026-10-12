#include "ffc/types.h"

typedef struct {
    uint8_t *data;
    int32_t len;
    int32_t cap;
} Buf;

extern uint32_t func_02092864(const uint8_t *text);
extern int func_ov000_02156d00(uint8_t *self, Buf *p, int need);
extern uint8_t *func_02092b00(uint8_t *data, const uint8_t *s);
extern void func_02090398(uint8_t *dst, const uint8_t *src, uint32_t n);
extern int func_02086b04(uint8_t *dst, int off, const uint8_t *fmt, const uint8_t *s1, const uint8_t *s2);
extern const uint8_t data_ov000_02169e88[];
extern const uint8_t data_ov000_02169de0[];

int func_ov000_02156aec(uint8_t *self, const uint8_t *a1, const uint8_t *a2)
{
    int n;
    Buf *p = (Buf *)(self + 0x1a34);

    n = func_02092864(a2) + (func_02092864(data_ov000_02169e88) - 4 + func_02092864(a1));

    if (n + 1 > p->cap - p->len) {
        if (func_ov000_02156d00(self, p, n - (p->cap - p->len) + 1) == 0) {
            return 1;
        }
    }

    {
        int8_t *base = (int8_t *)func_02092b00(p->data, data_ov000_02169de0);
        uint8_t *buf = (uint8_t *)base + 2;
        int8_t tail = base[2];
        func_02090398(buf + n, buf, func_02092864(buf) + 1);
        {
            int off = func_02086b04(buf, n + 1, data_ov000_02169e88, a1, a2);
            buf[off] = (uint8_t)tail;
        }
        p->len += n;
    }
    return 0;
}
