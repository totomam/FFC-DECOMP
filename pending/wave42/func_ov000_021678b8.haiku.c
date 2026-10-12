#include "ffc/types.h"

typedef struct {
    int8_t *ptr;
    int32_t len;
} QStr;

extern int32_t func_ov000_02167440(void *ctx);
extern int32_t func_ov000_02167944(int8_t *start, int32_t *len);

int32_t func_ov000_021678b8(void *ctx, int8_t *s, int32_t n, int32_t *pos, QStr *out)
{
    int8_t q;
    int8_t *start;

    if (!func_ov000_02167440(ctx)) {
        return 0;
    }
    q = s[*pos];
    if (q != 0x22 && q != 0x27) {
        return 0;
    }
    (*pos)++;
    start = s + *pos;
    out->len = 0;
    if (*pos >= n) {
        return 0;
    }
    if (s[*pos] == q) {
        out->ptr = start;
        (*pos)++;
        return 1;
    }
    while (s[*pos] != q) {
        if (*pos >= n) {
            return 0;
        }
        (*pos)++;
        out->len++;
    }
    (*pos)++;
    if (!func_ov000_02167944(start, &out->len)) {
        return 0;
    }
    out->ptr = start;
    return 1;
}
