#include "ffc/types.h"
typedef union {
    struct { uint32_t f:1; } w;
    struct { uint8_t f:1; uint8_t l:7; } b;
} H;
typedef struct {
    H h;
    uint32_t len;
    uint8_t *buf;
} Str;
int func_02052800(Str *p, int c, uint32_t n) {
    uint8_t *buf; uint32_t len; uint8_t *pos; uint32_t go;
    if (p->h.w.f == 0) { buf = (uint8_t*)p + 1; len = p->h.b.l; }
    else { buf = p->buf; len = p->len; }
    if (len != 0) {
        len = len - 1;
        if (n > len) n = len;
        pos = buf + n;
        go = 1;
        while (go != 0) {
            if (c == *(int8_t *)pos) return (int)(pos - buf);
            go = 0;
            if (pos > buf) { pos--; go = 1; }
        }
    }
    return -1;
}
