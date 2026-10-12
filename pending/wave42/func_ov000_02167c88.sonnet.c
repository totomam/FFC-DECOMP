#include "ffc/types.h"

extern int32_t func_ov000_0216714c(uint16_t *s);
extern int32_t func_ov000_02167b80(void *p, uint32_t a, uint32_t b);
extern int32_t func_ov000_02167f80(void *p, uint16_t *s);
extern int32_t func_ov000_02167bcc(void *p, uint32_t a, uint32_t b);

int32_t func_ov000_02167c88(void *p, uint32_t a, uint32_t b, uint16_t *s)
{
    int32_t i;
    int32_t n;

    n = func_ov000_0216714c(s);
    for (i = 0; i < n; i++) {
        uint16_t c = s[i];
        if (c < 0x20) {
            if (c != 9 && c != 10 && c != 13) {
                return 0;
            }
        } else if (c > 0xd7ff && c < 0xe000) {
            return 0;
        } else if (c > 0xfffd) {
            return 0;
        }
    }

    if (!func_ov000_02167b80(p, a, b) || !func_ov000_02167f80(p, s) || !func_ov000_02167bcc(p, a, b)) {
        return 0;
    }
    return 1;
}
