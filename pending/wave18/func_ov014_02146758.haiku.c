/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x9c];
    uint32_t a;
    uint32_t b;
    uint8_t pad1[0x4];
    uint32_t d;
    uint8_t pad2[0x18];
    uint32_t c;
} S;

uint32_t func_ov014_02146758(S *p) {
    uint32_t a = p->a;
    if (a >= p->b) {
        return 0;
    }
    uint32_t c = p->c;
    c = c + 1;
    a = a + 1;
    p->c = c;
    p->a = a;
    if (c == p->d) {
        p->c = 0;
    }
    return 1;
}
