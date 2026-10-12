#include "ffc/types.h"

typedef struct {
    uint32_t a[5];
    uint32_t b[6];
    uint32_t c;
} Elem;

typedef struct {
    Elem *lo;
    Elem *hi;
    uint32_t x;
    uint32_t y;
} Args;

void func_ov002_021d2620(Args args)
{
    Elem *cur;
    Elem *dst;
    Elem *src;
    Elem tmp;
    int32_t s1, s2;
    int i;

    if (args.lo == args.hi) {
        return;
    }
    for (cur = args.lo + 1; cur != args.hi; cur = cur + 1) {
        s1 = 0;
        for (i = 0; i < 6; i++) {
            s1 += cur->b[i];
        }
        s2 = 0;
        for (i = 0; i < 6; i++) {
            s2 += (cur - 1)->b[i];
        }
        if (s1 > s2) {
            tmp = *cur;
            *cur = *(cur - 1);
            dst = cur - 1;
            src = cur - 1;
            while (src != args.lo) {
                src = src - 1;
                s1 = 0;
                for (i = 0; i < 6; i++) {
                    s1 += tmp.b[i];
                }
                s2 = 0;
                for (i = 0; i < 6; i++) {
                    s2 += src->b[i];
                }
                if (s1 <= s2) {
                    break;
                }
                *dst = *src;
                dst = dst - 1;
            }
            *dst = tmp;
        }
    }
}
