#include "ffc/types.h"

extern int32_t func_02051448(int32_t fixed_index);
extern uint32_t func_020514a0(uint32_t value);
extern void func_0200cdd8(uint32_t *p, uint32_t value);

void func_020511e8(uint32_t *p, uint32_t *s) {
    uint32_t i;
    uint8_t *str;
    uint32_t c;
    uint32_t flag;

    for (i = 0; i < 3; i++) {
        p[i] = 0;
    }

    flag = (s[0] << 31) >> 31;
    if (!flag) {
        str = (uint8_t *)s + 1;
    } else {
        str = (uint8_t *)s[2];
    }

    c = *str;
    while (c != 0) {
        int32_t n;
        int32_t j;
        uint32_t code;

        n = func_02051448(c & 0xff);
        code = c;
        for (j = 1; j <= n; j++) {
            code = (code << 8) | str[j];
        }
        str += n + 1;
        func_0200cdd8(p, func_020514a0(code));
        c = *str;
    }
}
