#include "ffc/types.h"

extern void func_02048808(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} Hdr;

void func_020487d0(uint8_t *p, uint32_t pos, uint32_t val) {
    uint32_t len;
    if (((Hdr *)p)->flag == 0) {
        len = ((uint32_t)p[0] << 24) >> 25;
    } else {
        len = *(uint32_t *)(p + 4);
    }
    if (pos > len) {
        func_02048808(p, len, 0, pos - len, val);
    } else {
        func_02048808(p, pos, len - pos, 0, 0);
    }
}
