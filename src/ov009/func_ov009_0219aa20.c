#include "ffc/types.h"

extern void func_02056c9c(void *self, void *a, uint32_t b);
extern void func_02009130(void *out, void *src, uint32_t b);
extern void func_020095b8(void *dst, void *src);
extern void *func_020059cc(void *object);
extern void func_02087620(void *object);
extern char data_ov009_021afd1c[];
extern char data_ov009_021afea0[];
extern char data_ov009_021afea4[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void *func_ov009_0219aa20(uint8_t *self, void *a, uint32_t b)
{
    uint32_t tmp[3];
    Pair p;

    func_02056c9c(self, a, b);
    *(char **)self = data_ov009_021afd1c;
    func_02009130(tmp, data_ov009_021afea0, b);
    func_020095b8(self + 0x88, tmp);
    func_020059cc(tmp);
    func_02087620(self + 0xa0);
    *(uint32_t *)(self + 0xb8) = 0;
    p = *(Pair *)data_ov009_021afea4;
    *(Pair *)(self + 0x80) = p;
    return self;
}
