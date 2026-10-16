/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint8_t *buf; uint32_t size; uint32_t n; } S;
extern uint32_t func_02091420(void *fn, S *s, uint32_t a, uint32_t b, uint32_t c);
extern void func_020919fc(void);
void func_02091ad4(uint8_t *buf, uint32_t size, uint32_t a, uint32_t b) {
    S s;
    uint32_t r;
    s.buf = buf; s.size = size; s.n = 0;
    r = func_02091420(func_020919fc, &s, a, b, 0);
    if (buf == 0) return;
    if (r < size) { buf[r] = 0; return; }
    if (size != 0) { uint8_t *p = buf + size; p--; *p = 0; }
}
