#include "ffc/types.h"

extern void func_0200a5dc(void *a, void *b);
extern void func_0200cdd8(void *buf, uint16_t ch);
extern void *func_0200a678(void *object);

#define HDR_BIT(s) (((*(uint32_t *)(s)) << 31) >> 31)
#define STR_END(s) (HDR_BIT(s) \
    ? (uint16_t *)(*(uint8_t **)((s) + 8) + (*(uint32_t *)((s) + 4) << 1)) \
    : (uint16_t *)((s) + 2 + ((((s)[0]) << 24) >> 25) * 2))

void func_020392ac(void *a0, void *r1, uint32_t flags)
{
    uint8_t *s = (uint8_t *)r1;
    uint32_t buf[3];
    uint16_t *p;
    uint32_t f1, f2, f4;
    uint32_t i;

    if (flags == 0) {
        func_0200a5dc(a0, r1);
        return;
    }

    for (i = 0; i < 3; i++) {
        buf[i] = i;
    }

    if (HDR_BIT(s) == 0) {
        p = (uint16_t *)(s + 2);
    } else {
        p = *(uint16_t **)(s + 8);
    }

    f1 = flags & 1;
    f2 = flags & 2;
    f4 = flags & 4;

    while (p != STR_END(s)) {
        if (*p == '$') {
            if (p[1] == 'r' && p[2] == 's' && f1) {
                p += 3;
                for (;;) {
                    do {
                        p++;
                    } while (*p != '$');
                    p++;
                    if (*p != 'r') {
                        continue;
                    }
                    p++;
                    if (*p != 'e') {
                        continue;
                    }
                    p++;
                    break;
                }
            } else if (p[1] == 't' && p[2] == 'c' && f2) {
                p += 4;
            } else if (p[1] == 'c' && f4) {
                p += 3;
            }
        }
        if (p == STR_END(s)) {
            break;
        }
        func_0200cdd8(buf, *p);
        p++;
    }

    func_0200a5dc(a0, buf);
    func_0200a678(buf);
}
