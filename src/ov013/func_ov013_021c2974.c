#include "ffc/types.h"

extern void func_02069434(void *obj, uint32_t v);
extern void func_02087620(void *object);
extern void func_020695e4(void *obj, uint32_t v);
extern char data_020ae6d4[];
extern char data_ov013_021c4db4[];
extern char data_ov013_021c4de8[];

void *func_ov013_021c2974(void *self, uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *q;
    uint8_t *r;

    func_02069434(self, 0);
    q = p + 0xb8;
    *(void **)q = data_020ae6d4;
    *(uint32_t *)(q + 4) = 0;
    *(uint32_t *)(q + 8) = 0;
    *(uint32_t *)(q + 0xc) = 0;
    r = q + 0x10;
    *(uint32_t *)(q + 0x10) = 0;
    *(uint32_t *)(r + 4) = 0;
    *(uint32_t *)(r + 8) = 0;
    func_02087620(q + 0x1c);
    *(void **)p = data_ov013_021c4db4;
    *(void **)q = data_ov013_021c4de8;
    *(uint32_t *)(p + 0xf0) = a;
    *(uint32_t *)(p + 0xf4) = b;
    *(uint32_t *)(p + 0xf8) = c;
    func_020695e4(self, 1);
    return self;
}
