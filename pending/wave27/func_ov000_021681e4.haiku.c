#include "ffc/types.h"

extern int func_ov000_02168168(void *a, void *b, void *out_ptr, void *out_len);
extern void func_020928f0(uint8_t *dst, void *src, int n);

int func_ov000_021681e4(void *a, void *b, uint8_t *dst, int maxlen)
{
    void *src = 0;
    int len = 0;
    int n;
    int idx;

    if (func_ov000_02168168(a, b, &src, &len) == 0) {
        *dst = 0;
        return 0;
    }
    n = len;
    if (maxlen < len) {
        n = maxlen;
    }
    func_020928f0(dst, src, n);
    idx = maxlen - 1;
    if (idx >= len) {
        idx = len;
    }
    dst[idx] = 0;
    return 1;
}
