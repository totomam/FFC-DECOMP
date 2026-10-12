#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern int func_ov000_02167b80(void *a, void *b, void *c);
extern int func_ov000_02167fd4(void *a, const uint8_t *text);
extern int func_ov000_02167bcc(void *a, void *b, void *c);

int func_ov000_02167c24(void *a, void *b, void *c, const uint8_t *s)
{
    int32_t len = (int32_t)func_02092864(s);
    int32_t i;

    for (i = 0; i < len; i++) {
        uint8_t ch = s[i];
        if (ch >= 0x20) {
            continue;
        }
        if (ch == 9 || ch == 10 || ch == 13) {
            continue;
        }
        return 0;
    }

    if (func_ov000_02167b80(a, b, c) && func_ov000_02167fd4(a, s) && func_ov000_02167bcc(a, b, c)) {
        return 1;
    }
    return 0;
}
