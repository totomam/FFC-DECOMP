#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad0[0x455];
    uint8_t b455;
    uint8_t b456;
    uint8_t pad1[0x824 - 0x457];
    void *p824;
    uint32_t v828;
    uint32_t v82c;
} Inner;

typedef struct Outer {
    uint8_t p0[0xc];
    Inner *in;
    uint8_t p1[0x50 - 0x10];
    uint32_t f50;
} Outer;

extern void *(*data_ov000_0216bc74)(uint32_t);
extern uint8_t *func_ov000_02147a14(uint32_t *out, Outer *a);
extern void func_ov000_02147ab0(uint32_t n, Outer *a);
extern void func_ov000_0214ac94(Inner *r4, void *p);
extern void func_02084ca4(const void *src, void *dst, uint32_t n);

void func_ov000_0214b6dc(Outer *a)
{
    Inner *r4 = a->in;
    uint32_t len;
    uint8_t *p;
    uint32_t r7;
    uint32_t avail;

    if (r4->p824 == 0) {
        if (a->f50 < 5) {
            return;
        }
        p = func_ov000_02147a14(&len, a);
        len = ((uint32_t)p[3] << 8) + p[4] + 5;
        if (len > 0x4805) {
            r4->b455 = 9;
            return;
        }
        r4->p824 = data_ov000_0216bc74(len);
        if (r4->p824 == 0) {
            r4->b455 = 9;
            return;
        }
        r4->v828 = len;
        r4->v82c = 0;
        r4->b456 = 0;
    } else if (a->f50 == 0) {
        return;
    }

    p = func_ov000_02147a14(&len, a);
    avail = r4->v828 - r4->v82c;
    if (len >= avail) {
        len = avail;
        r7 = 1;
    } else {
        r7 = 0;
    }
    func_02084ca4(p, (uint8_t *)r4->p824 + r4->v82c, len);
    func_ov000_02147ab0(len, a);
    if (r7) {
        func_ov000_0214ac94(r4, r4->p824);
        if (r4->b456 != 0) {
            return;
        }
        r4->p824 = 0;
    } else {
        r4->v82c = r4->v82c + len;
    }
}
