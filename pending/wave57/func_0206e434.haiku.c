#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_0206cbc8(uint32_t v);
extern void func_0206f3cc(void *self, void *lst, uint32_t w, uint8_t b);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_0206f37c(void *p);
extern void func_02056844(void *p);
extern void func_0206f204(void *self, void *data, void *end, uint32_t w);
extern uint32_t data_0213e178;

void func_0206e434(uint8_t *r5)
{
    uint32_t w;
    uint16_t buf[2];
    uint32_t sz;
    uint32_t n;
    struct { void *p; volatile uint8_t f; } loc;
    uint8_t *r6;
    uint32_t *c;

    loc.p = r5 + 0x284;
    loc.f = 1;
    if (loc.f != 0) {
        func_0208763c(loc.p);
    }
    if (*(uint32_t *)(r5 + 0x274) != *(uint32_t *)(r5 + 0x270)) {
        if (loc.f != 0) {
            func_02087678(loc.p);
        }
        return;
    }
    r6 = *(uint8_t **)(r5 + 0x268);
    n = func_0206cbc8(data_0213e178);
    if (n >= 4) {
        do {
            if (*(uint32_t *)(r5 + 0x58) == 0) {
                if (*(uint32_t *)(r5 + 0x50) == 0) {
                    break;
                }
                c = *(uint32_t **)(r5 + 0x4c);
                *(uint32_t *)(r5 + 0x58) = c[0];
                *(uint8_t *)&w = 0;
                func_0206f3cc(r5 + 0x4c, c, w, 0);
                c = *(uint32_t **)(r5 + 0x58);
                buf[0] = (uint16_t)c[1];
                buf[1] = ((uint16_t *)c)[2];
                func_02084ca4(buf, r6, 4);
                n -= 4;
                r6 += 4;
            } else {
                c = *(uint32_t **)(r5 + 0x58);
                sz = c[1];
                if (sz >= n) {
                    sz = n;
                }
                {
                    uint8_t *src = (uint8_t *)c[0];
                    uint8_t *end = src + sz;
                    while (src != end) {
                        *r6++ = *src++;
                    }
                }
                n -= sz;
                c = *(uint32_t **)(r5 + 0x58);
                if (c[1] == sz) {
                    if (c != 0) {
                        func_0206f37c(c);
                        func_02056844(c);
                    }
                    *(uint32_t *)(r5 + 0x58) = 0;
                    if (r5[0x281] == 0) {
                        break;
                    }
                } else {
                    *(uint8_t *)&w = 0;
                    func_0206f204(c, (void *)c[0], (uint8_t *)c[0] + sz, w);
                }
            }
        } while (n >= 4);
    }
    if (n != 0) {
        *(uint16_t *)r6 = 0;
    }
    if (loc.f != 0) {
        func_02087678(loc.p);
    }
}
