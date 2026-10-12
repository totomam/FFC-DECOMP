/* cflags: -nothumb */
#include "ffc/types.h"

void func_02085410(uint8_t *src, uint8_t *dst)
{
    uint32_t hdr;
    int32_t size;
    int32_t r7;
    uint32_t flags;
    int32_t i;

    hdr = *(uint32_t *)src;
    src += 4;
    size = (int32_t)(hdr >> 8);
    r7 = 0;
    if (hdr & 0xf) {
        r7 = 1;
    }
    if (size <= 0) {
        return;
    }
    for (;;) {
        flags = *src++;
        i = 8;
        while (--i >= 0) {
            if (flags & 0x80) {
                int32_t len;
                int32_t b0 = *src;
                if (r7 == 0) {
                    len = 3;
                } else if (b0 & 0xe0) {
                    len = 1;
                } else {
                    src++;
                    len = (b0 & 0xf) << 4;
                    if (b0 & 0x10) {
                        len = (len << 8) + (*src++ << 4) + 0x100;
                    }
                    len += 0x11;
                    b0 = *src;
                }
                len += b0 >> 4;
                src++;
                size -= len;
                b0 = ((b0 & 0xf) << 8) | *src++;
                do {
                    *dst = dst[-b0 - 1];
                    dst++;
                } while (--len > 0);
            } else {
                *dst++ = *src++;
                size--;
            }
            if (size <= 0) {
                return;
            }
            flags <<= 1;
        }
    }
}
