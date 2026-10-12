#include "ffc/types.h"

extern void *func_0203b81c(uint32_t size);
extern void func_0205f818(void *p, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern void *func_0201af34(void *a);
extern void func_0201af7c(void *a, void *b, void *c);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_0201afbc(void *a, void *b);
extern void *func_0205681c(uint32_t size);
extern void func_020695ec(void *object, void *node);
extern void func_020697ac(void *object, void *node);
extern void func_020696f8(void *object);
extern void *data_020b93b8;
typedef struct {
    uint32_t f0, f1, f2, f3, f4;
    uint32_t flags;
    uint32_t f6;
    uint32_t f7, f8, f9, f10;
} Blob;
extern void *func_ov007_0219a2d4(void *a, void *b, uint32_t c, Blob d);


void *func_ov007_0219b9a0(uint8_t *self)
{
    Blob b;
    volatile uint32_t s[4];
    void *node;
    void *p;

    *(void **)(self + 0xb8) = func_0203b81c(0x28);
    func_0205f818(*(void **)(self + 0xb8), 7);
    func_02056bc0(self + 0x48, *(void **)(self + 0xb8));

    p = func_0201af34(data_020b93b8);
    func_0201af7c(data_020b93b8, p, &b);
    if (((b.flags << 0x1e) >> 0x1f) == 0) {
        func_02084b2c(&b, 0, 0x2c);
        func_0201afbc(data_020b93b8, &b);
        b.f7 = 0;
        b.f8 = 0;
        b.f9 = 0;
        b.f10 = 0;
        b.flags = (b.flags & 0x80007fff) | 0x748000;
        b.f6 = b.f6 & ~0x1c;
    }

    node = func_0205681c(0xb4);
    if (node != 0) {
        s[0] = 0x80;
        s[1] = 0x48;
        s[2] = 0x80;
        s[3] = 0x48;
        node = func_ov007_0219a2d4(node, *(void **)(self + 0xb8), 0, b);
    }
    func_020695ec(self, node);
    func_020697ac(self, node);
    func_020696f8(self);
    return 0;
}
