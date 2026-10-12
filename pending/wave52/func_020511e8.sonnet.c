#include "ffc/types.h"

extern int32_t func_02051448(int32_t fixed_index);
extern uint32_t func_020514a0(uint32_t value);
extern void func_0200cdd8(uint32_t *p, uint32_t value);

typedef struct { uint32_t a : 1; uint32_t b : 31; } B;
static inline int f(uint32_t *s) { return ((B *)s)->a; }
void func_020511e8(uint32_t *p, uint32_t *s) {
    uint32_t i;
    uint32_t c;
    uint8_t *str;

    for (i = 0; i < 3; i++) {
        p[i] = 0;
    }
    if (!f(s)) {
        str = (uint8_t *)s + 1;
    } else {
        str = (uint8_t *)s[2];
    }
    c = *str;
    while (c != 0) {
        int n;
        int j;
        n = func_02051448((uint8_t)c);
        for (j = 1; j <= n; j++) {
            c = (c << 8) | str[j];
        }
        str += n + 1;
        func_0200cdd8(p, func_020514a0(c));
        c = *str;
    }
}
