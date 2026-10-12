#include "ffc/types.h"

extern void func_0200cdd8(uint32_t *p, uint32_t ch);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} Hdr;

void func_02051120(uint32_t *p, uint8_t *s) {
    uint32_t i;
    uint8_t *q;
    for (i = 0; i < 3; i++) {
        p[i] = 0;
    }
    if (((Hdr *)s)->flag == 0) {
        q = s + 1;
    } else {
        q = *(uint8_t **)(s + 8);
    }
    while (*q != 0) {
        uint32_t c = *q;
        if ((c >= 0x81 && c <= 0x9f) || (c >= 0xe0 && c <= 0xef)) {
            func_0200cdd8(p, (uint16_t)((c << 8) | q[1]));
            q += 2;
        } else {
            func_0200cdd8(p, *q++);
        }
    }
}
