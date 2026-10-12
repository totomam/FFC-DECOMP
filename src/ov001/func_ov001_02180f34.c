#include "ffc/types.h"

typedef struct Hdr {
    uint8_t pad[0x40];
    uint32_t mode;
    uint32_t len;
} Hdr;

typedef struct Self {
    uint8_t pad[8];
    Hdr *hdr;
    uint8_t pad2[0x66 - 12];
    uint16_t field66;
} Self;

extern int func_ov001_021808cc(Self *s);
extern uint32_t func_ov001_02180844(uint8_t *p, int n);
extern int func_ov001_021808f4(Self *s, uint32_t x);
extern void func_ov001_02180f14(Self *s);
extern int func_ov001_02180cb4(Self *s, int flag, uint8_t *buf, int32_t avail);
extern int func_ov001_02180ec4(Self *s);
extern int func_ov001_02180868(uint32_t a, uint16_t b);
extern int func_ov001_02180d58(Self *s, int flag, uint32_t a, uint8_t *buf, int32_t avail, uint32_t *out);
extern int func_ov001_021808d8(Self *s);

int func_ov001_02180f34(Self *s, int flag, uint8_t *buf, int32_t avail)
{
    uint32_t len = s->hdr->len;
    uint32_t need = len + 7;
    uint32_t a;
    uint32_t out;
    Hdr *h;

    if (avail < (int32_t)need) {
        if (func_ov001_021808cc(s)) {
            return 1;
        }
        return 0;
    }

    a = func_ov001_02180844(buf + len, 3);
    len = func_ov001_02180844(buf + s->hdr->len, 5);

    h = s->hdr;
    if (h->mode == 2 && flag == 0) {
        buf[h->len + 5] = buf[0];
        buf[s->hdr->len + 6] = buf[1];
        buf += need - s->hdr->len;
        avail -= need - s->hdr->len;
    } else {
        buf += need;
        avail -= need;
    }

    if (!func_ov001_021808f4(s, len)) {
        return 0;
    }

    if (a == s->field66) {
        func_ov001_02180f14(s);
        if (!func_ov001_02180cb4(s, flag, buf, avail)) {
            return 0;
        }
        if (func_ov001_02180ec4(s)) {
            return 1;
        }
        return 0;
    }

    if (func_ov001_02180868(a, s->field66) < 0) {
        func_ov001_02180f14(s);
        return 1;
    }

    if (!func_ov001_02180d58(s, flag, a, buf, avail, &out)) {
        return 0;
    }
    if (out != 0) {
        if (!func_ov001_021808d8(s)) {
            return 0;
        }
    }
    return 1;
}
