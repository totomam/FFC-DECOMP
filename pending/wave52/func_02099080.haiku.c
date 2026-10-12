#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);

struct S {
    int (**vt)(struct S *);
    uint32_t pad;
    uint8_t *cur;
    uint8_t *end;
};

int func_02099080(struct S *s, uint8_t *dst, int n) {
    int count;
    int avail = (int)s->end - (int)s->cur;
    int *p;
    if (avail < n) {
        p = &avail;
    } else {
        p = &n;
    }
    count = *p;
    if (count > 0) {
        func_02090380(dst, s->cur, count);
        s->cur += count;
        dst += count;
        n -= count;
    }
    while (n > 0) {
        int c;
        if (s->cur < s->end) {
            c = *s->cur++;
        } else {
            c = (*(int (**)(struct S *))((char *)s->vt + 0x24))(s);
        }
        if (c == -1) {
            break;
        }
        *dst = (uint8_t)c;
        dst++;
        n--;
        count++;
    }
    return count;
}
