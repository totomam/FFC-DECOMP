#include "ffc/types.h"

typedef struct { uint32_t f:1; } W;
typedef struct { uint8_t f:1; uint8_t l:7; } B;

int32_t func_ov014_02148a00(uint8_t *p, int8_t *needle, uint32_t start, uint32_t n) {
    int8_t *s;
    int8_t *pos;
    int8_t *q;
    uint32_t i;
    uint32_t len;

    if (!((W *)p)->f) {
        s = (int8_t *)(p + 1);
        len = ((B *)p)->l;
    } else {
        s = *(int8_t **)(p + 8);
        len = *(uint32_t *)(p + 4);
    }
    if (len != 0 && n != 0) {
        len = len - 1;
        if (start > len) {
            start = len;
        }
        pos = s + start + 1;
        if (pos > s) {
            do {
                pos = pos - 1;
                q = needle;
                for (i = 0; i < n; i++, q++) {
                    int8_t *r = pos + i;
                    if (*r == *q) {
                        return (int32_t)(pos - s);
                    }
                }
            } while (pos > s);
        }
    }
    return -1;
}
