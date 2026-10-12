#include "ffc/types.h"

extern int func_0204b4b4(void *ctx, int i, int32_t *a, int32_t *b);
extern int func_0204b4f0(void *ctx, int32_t *a, int32_t *b);

#define LOW(x) (((x) >= 'A' && (x) <= 'Z') ? (x) + 0x20 : (x))

int func_0204b640(void *ctx, int i, int end, const int8_t *s, int term)
{
    int32_t a, b;
    int last = end - 1;
    int c;

    if (i < end) {
        func_0204b4b4(ctx, i, &a, &b);
        c = func_0204b4f0(ctx, &a, &b);
        while (LOW(*s) == LOW(c)) {
            if (*s == 0 || *s == 0x20 || *s == term || i == last) return 0;
            c = func_0204b4f0(ctx, &a, &b);
            i++;
            s++;
        }
    }
    return -1;
}
