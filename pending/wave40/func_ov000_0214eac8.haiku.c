#include "ffc/types.h"

uint32_t func_ov000_0214eac8(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t r3 = 0;
    uint32_t r4 = 0;
    uint32_t r5 = 0;
    uint32_t r6;
    uint32_t na;

    if (b == 0xFFFFFFFFu) goto L3e;
    if (b == 0) goto L3e;
    if (c == b) goto L3e;
    if (((c ^ b) & a) != 0) goto L24;
    if (((~a) & b) == 0) goto L3e;
L24:
    c = c ^ b;
    r6 = 1;
    if ((c & a) != 0) goto L38;
    na = ~a;
    if (((b & na) ^ na) != 0) goto L38;
    r6 = 0;
L38:
    if (r6 != 0) r5 = 1;
L3e:
    if (r5 != 0) {
        if (((b & 0xFF000000u) ^ 0x7F000000u) != 0) r4 = 1;
    }
    if (r4 != 0) {
        if (((b & 0xF0000000u) ^ 0xE0000000u) != 0) r3 = 1;
    }
    return r3;
}
