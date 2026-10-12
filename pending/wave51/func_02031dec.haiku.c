#include "ffc/types.h"

extern uint32_t func_020696e8(const void *object);
extern int func_020320ac(void *obj, uint32_t a, uint32_t b, uint32_t c);

void func_02031dec(void *p) {
    uint8_t *b = (uint8_t *)p;
    uint32_t off = 1;
    off = off << 8;
    if (*(uint32_t *)(b + off) != 0) {
        uint32_t *o = (uint32_t *)func_020696e8(p);
        uint32_t t = o[1] & (o[2] ^ o[1]);
        if (t & 2) {
            if (func_020320ac(p, *(uint32_t *)(b + off), 0xbd, 0) != 0) {
                return;
            }
        }
    }
    {
        uint32_t k = 0x110;
        uint32_t n = *(uint32_t *)(b + k);
        if (n == 0) {
            return;
        }
        if ((*(uint32_t *)(b + k - 4))++ < n) {
            return;
        }
    }
    if (*(uint32_t *)(b + off) != 0) {
        func_020320ac(p, *(uint32_t *)(b + off), 0xbd, 1);
    } else {
        func_020320ac(p, *(uint32_t *)(b + 0x114), 0xbb, 1);
    }
}
