#include "ffc/types.h"

extern void func_0200a5dc(void *a, void *b);
extern void func_0200cdd8(void *buf, uint16_t ch);
extern void *func_0200a678(void *object);

typedef struct { uint32_t ext : 1; uint32_t pad : 31; uint32_t len; uint8_t *data; } SW;
typedef struct { uint8_t ext : 1; uint8_t len : 7; } SB;

#define EXT(s) (((SW *)(s))->ext)
#define END(s, e) ((e) ? (uint16_t *)(((SW *)(s))->data + (((SW *)(s))->len << 1)) \
    : (uint16_t *)((uint8_t *)(s) + 2 + (((SB *)(s))->len << 1)))

void func_020392ac(void *a0, void *r1, uint32_t flags)
{
    uint8_t *s = (uint8_t *)r1;
    uint32_t buf[3];
    uint16_t *p, *e;
    uint32_t f1, f2, f4;
    uint32_t k, ext, i;

    if (flags == 0) {
        func_0200a5dc(a0, r1);
        return;
    }

    i = 0;
    do {
        k = i;
        i++;
        buf[k] = k;
    } while (i < 3);

    if (EXT(s) == 0) {
        p = (uint16_t *)(s + 2);
    } else {
        p = (uint16_t *)((SW *)s)->data;
    }

    f1 = flags & 1;
    f2 = flags & 2;
    f4 = flags & 4;

    while (ext = EXT(s) ? 1 : 0, e = END(s, ext), p != e) {
        if (*p == '$') {
            if (p[1] == 'r' && p[2] == 's' && f1) {
                p += 3;
                for (;;) {
                    do { p++; } while (*p != '$');
                    p++;
                    if (*p != 'r') continue;
                    p++;
                    if (*p != 'e') continue;
                    p++;
                    break;
                }
            } else if (p[1] == 't' && p[2] == 'c' && f2) {
                p += 4;
            } else if (p[1] == 'c' && f4) {
                p += 3;
            }
        }
        e = END(s, ext);
        if (p == e) break;
        func_0200cdd8(buf, *p);
        p++;
    }

    func_0200a5dc(a0, buf);
    func_0200a678(buf);
}
