#include "ffc/types.h"
void func_ov006_0219ed5c(int unused, uint32_t *t) {
    int i, j;
    for (i = 0; i < 256; i++) {
        uint32_t c = i;
        for (j = 0; j < 8; j++) {
            if (c & 1) c = (c >> 1) ^ 0xedb88320;
            else c = c >> 1;
        }
        *t++ = c;
    }
}
