/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b, c; uint8_t s[256]; } R;
void func_ov015_021d56e0(R *p, uint8_t *key, int len) {
    uint32_t *w, v;
    int i, k = 0;
    uint32_t j = k;
    p->a = 0xaa;
    v = 0x03020100;
    p->b = k;
    p->c = k;
    w = (uint32_t*)p->s;
    do { *w++ = v; v += 0x04040404; } while (w < (uint32_t*)(p->s + 256));
    for (i = 255; i >= 0; i--) {
        uint8_t t = p->s[i];
        uint8_t u;
        j = (t + (j + key[k])) & 0xff;
        k++;
        u = p->s[j];
        if (k >= len) k = 0;
        p->s[j] = t;
        p->s[i] = u;
    }
}
