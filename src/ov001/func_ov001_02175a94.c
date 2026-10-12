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
    Inner *q;
    if (p == 0 || (q = p->inner) == 0 || a == 0) return 2;
    if (cb == 0) {
        func_ov001_0217ef6c(p, data_ov001_021900ec);
        return 2;
    }
    if (*(uint32_t *)((char *)q + 0x108) != 0) {
        uint32_t buf[129] = {0};
        cb(p, buf, d);
        return 0;
    }
    if (*(uint32_t *)((char *)q + 0x1f4) == 4) {
        func_ov001_0217ef6c(p, data_ov001_02190100);
        return 2;
    }
    return func_ov001_0217af68(p, a, b, c, cb, d);
}
