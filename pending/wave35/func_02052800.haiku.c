#include "ffc/types.h"

typedef struct {
    uint32_t hdr;
    uint32_t len;
    uint8_t *buf;
} Str;

int func_02052800(uint8_t *p, int c, uint32_t n) {
    uint8_t *buf;
    uint32_t len;
    uint8_t *pos;
    uint32_t go;
    uint32_t f;

    f = ((Str *)p)->hdr;
    f = (f << 31) >> 31;
    if (f == 0) {
        buf = p + 1;
        len = (((uint32_t)p[0] << 24) >> 25);
    } else {
        buf = ((Str *)p)->buf;
        len = ((Str *)p)->len;
    }

    if (len != 0) {
        len = len - 1;
        if (n > len) {
            n = len;
        }
        pos = buf + n;
        go = 1;
        while (go != 0) {
            if (c == *(int8_t *)pos) {
                return (int)(pos - buf);
            }
            go = 0;
            if (pos > buf) {
                pos--;
                go = 1;
            }
        }
    }
    return -1;
}
