#include "ffc/types.h"

extern int func_ov000_02167440(void *a, int8_t *s, int end, int *idx);
extern int func_ov000_02167944(int8_t *v, int *cnt);

int func_ov000_02167b14(void *a, int8_t *s, int end, int *idx, int *st)
{
    int8_t *v = 0;
    if (func_ov000_02167440(a, s, end, idx) == 0) {
        return 0;
    }
    if (s[*idx] != 0x3c) {
        v = s + *idx;
        st[0] = (int)v;
    }
    while (*idx < end) {
        if (s[*idx] == 0x3c) {
            return func_ov000_02167944(v, st + 1) ? 1 : 0;
        }
        *idx += 1;
        st[1] += 1;
    }
    return 0;
}
