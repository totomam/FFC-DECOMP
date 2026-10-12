#include "ffc/types.h"

typedef void *(*AllocFn)(void *heap, uint32_t size);

typedef struct Arg {
    AllocFn alloc;
    uint32_t x;
    uint32_t y;
} Arg;

struct Glob {
    void *p0;
    uint8_t *buf;
    uint32_t pad[3];
    uint32_t cnt;
};

extern struct Glob data_ov000_0216ff6c;
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_02087620(void *object);
extern void func_ov000_0215734c(void);

int func_ov000_021571b8(Arg *a)
{
    AllocFn alloc = a->alloc;
    struct Glob *g = &data_ov000_0216ff6c;
    uint32_t sz;

    if (g->buf != 0) {
        return 4;
    }
    sz = 0x11f4;
    g->buf = alloc(0, sz);
    if (g->buf == 0) {
        return 4;
    }
    func_02084b2c(g->buf, 0, sz);
    *(uint32_t *)(g->buf + 0x1004) = 0xfffe7961;
    *(Arg *)(g->buf + (sz - 0xec)) = *a;
    if (g->p0 != 0) {
        return 4;
    }
    g->p0 = alloc(0, 0x1c50);
    if (g->p0 == 0) {
        return 4;
    }
    g->cnt = 0;
    func_02087620(g->buf + (sz - 0x18));
    func_ov000_0215734c();
    return 0;
}
