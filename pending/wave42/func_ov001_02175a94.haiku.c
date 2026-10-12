#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x108];
    uint32_t f108;
    uint8_t pad2[0xe8];
    uint32_t f1f4;
} Inner;

typedef struct Outer {
    Inner *inner;
} Outer;

extern void func_ov001_0217ef6c(void *obj, const char *msg);
extern int func_ov001_0217af68(void *p, void *a, uint32_t b, uint32_t c, void *cb, uint32_t d);
extern char data_ov001_021900ec[];
extern char data_ov001_02190100[];

int func_ov001_02175a94(Outer *p, void *a, uint32_t b, uint32_t c, int (*cb)(void *, void *, uint32_t), uint32_t d)
{
    uint32_t buf[129];
    Outer *s = p;
    uint32_t *w;
    Inner *q;
    int i;

    if (s == 0 || (q = s->inner) == 0 || a == 0) return 2;
    if (cb == 0) {
        func_ov001_0217ef6c(s, data_ov001_021900ec);
        return 2;
    }
    if (q->f108 != 0) {
        w = buf;
        for (i = 16; i > 0; i--) {
            w[0] = 0; w[1] = 0; w[2] = 0; w[3] = 0;
            w[4] = 0; w[5] = 0; w[6] = 0; w[7] = 0;
            w += 8;
        }
        buf[128] = 0;
        cb(s, buf, d);
        return 0;
    }
    if (q->f1f4 == 4) {
        func_ov001_0217ef6c(s, data_ov001_02190100);
        return 2;
    }
    return func_ov001_0217af68(s, a, b, c, cb, d);
}
