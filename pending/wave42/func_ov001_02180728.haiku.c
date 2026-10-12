#include "ffc/types.h"

extern void func_ov001_021822f8(void *a, void *b);
extern int func_ov000_02168768(void *p);
extern int func_ov001_021800a4(void *self, int x, void *a, uint32_t b, int c);
extern int func_ov001_02181bec(void *self, void *a, uint32_t b, int c);

int func_ov001_02180728(void *self, uint8_t *p, uint32_t v, int flag)
{
    uint16_t tmp;
    uint8_t *d;
    uint8_t *sub;

    if (*(uint32_t *)((uint8_t *)self + 0xc) != 5) {
        return 8;
    }
    func_ov001_021822f8(&p, &v);
    if (flag != 0) {
        sub = *(uint8_t **)((uint8_t *)self + 8);
        if (*(uint32_t *)(sub + 0x40) == 2) {
            d = (uint8_t *)&tmp;
            d[0] = p[0];
            d[1] = p[1];
            if (v != tmp + *(uint32_t *)(sub + 0x44)) {
                return 9;
            }
        }
    }
    if (func_ov000_02168768(*(void **)((uint8_t *)self + 0x98))) {
        func_ov001_021800a4(self, 0, p, v, flag);
        return 0;
    }
    if (func_ov001_02181bec(self, p, v, flag)) {
        return 0;
    }
    return 10;
}
