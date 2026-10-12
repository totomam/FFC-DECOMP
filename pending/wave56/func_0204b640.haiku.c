#include "ffc/types.h"

extern int func_0204b4b4(void *ctx, int i, int32_t *a, int32_t *b);
extern int func_0204b4f0(void *ctx, int32_t *a, int32_t *b);

int func_0204b640(void *ctx, int i, int end, const int8_t *s, int term)
{
    int32_t a, b;
    int c;
    int last;

    if (i >= end) {
        return -1;
    }
    last = end - 1;
    func_0204b4b4(ctx, i, &a, &b);
    c = func_0204b4f0(ctx, &a, &b);
    while (1) {
        int lh = *s;
        if (*s >= 'A' && *s <= 'Z') {
            lh = *s + 0x20;
        }
        if (c >= 'A' && c <= 'Z') {
            c += 0x20;
        }
        if (c != lh) {
            break;
        }
        if (*s == 0 || *s == 0x20 || *s == term) {
            return 0;
        }
        if (i == last) {
            return 0;
        }
        c = func_0204b4f0(ctx, &a, &b);
        i++;
        s++;
    }
    return -1;
}
