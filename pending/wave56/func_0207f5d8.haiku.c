#include "ffc/types.h"

extern int func_0207f4bc(void *s, int a, int b);
extern void func_02084ca4(void *dst, void *src);
extern int func_0207ef1c(void *ctx, void *out, uint32_t n);
extern int func_0207fc28(void *a, uint32_t b);

struct Frame {
    int ret;
    void *cp;
    uint8_t *cq;
    uint32_t o0c;
    uint32_t o10;
    uint32_t f0, f1, f2, f3, f4, f5;
    uint8_t pad[0x7c];
};

int func_0207f5d8(void *a, void *b, void *c)
{
    struct Frame F;
    uint8_t *cb = (uint8_t *)c;
    uint8_t *bb = (uint8_t *)b;

    *(void **)(bb + 0x30) = &F.f0;
    *(uint32_t *)(bb + 0x34) = 0;
    F.ret = func_0207f4bc(b, 3, 1);
    if (F.ret != 0) {
        return F.ret;
    }
    *(uint32_t *)(cb + 0x10) = 0;
    *(uint32_t *)(cb + 0x118) = F.f4;
    func_02084ca4(&F.f5, cb + 0x14);
    *(cb + *(uint32_t *)(cb + 0x118) + 0x14) = 0;
    if (F.f3 != 0) {
        *(uint32_t *)(cb + 0x11c) = 0x100;
        {
            uint8_t *cx = (uint8_t *)&F.cp;
            uint16_t *hp = (uint16_t *)(cx + 0x14);
            *(uint32_t *)(cb + 0x16c) = (hp[0] | ((uint32_t)hp[1] << 16));
        }
        *(uint32_t *)(cb + 0x168) = 0;
    } else {
        *(uint32_t *)(cb + 0x11c) = 0;
        *(uint32_t *)(cb + 0x16c) = F.f1;
        *(uint32_t *)(cb + 0x168) = 0;
        {
            uint32_t *p20 = *(uint32_t **)(((uint8_t *)a) + 0x20);
            uint32_t off = F.f1 << 3;
            if (off < p20[2]) {
                F.cp = a;
                F.cq = (uint8_t *)(p20[1] + off);
                if (func_0207ef1c(&F.cp, &F.o0c, 8) == 0) {
                    *(uint32_t *)(cb + 0x168) = F.o10 - F.o0c;
                    if (func_0207fc28(a, F.o0c) != 0) {
                        *(uint32_t *)(cb + 0x11c) |= 0x400;
                    }
                }
            }
        }
    }
    *(uint32_t *)(cb + 0x138) = 0;
    *(uint32_t *)(cb + 0x13c) = 0;
    *(uint32_t *)(cb + 0x140) = 0;
    *(uint32_t *)(cb + 0x144) = 0;
    *(uint32_t *)(cb + 0x148) = 0;
    *(uint32_t *)(cb + 0x14c) = 0;
    return F.ret;
}
