/* cflags: -nothumb */
#include "ffc/types.h"

void func_02084ca4(uint8_t *src, uint8_t *dst, uint32_t n)
{
    uint32_t carry;
    uint32_t hw;

    if (n == 0) {
        return;
    }
    if ((uint32_t)dst & 1) {
        hw = *(uint16_t *)(dst - 1) & 0xff;
        if ((uint32_t)src & 1) {
            carry = (uint32_t)*(uint16_t *)(src - 1) >> 8;
        } else {
            carry = *(uint16_t *)src;
        }
        *(uint16_t *)(dst - 1) = hw | (carry << 8);
        src++;
        dst++;
        n--;
        if (n == 0) {
            return;
        }
    }
    if (((uint32_t)dst ^ (uint32_t)src) & 1) {
        src = (uint8_t *)((uint32_t)src & ~1u);
        carry = (uint32_t)*(uint16_t *)src >> 8;
        src += 2;
        while (n >= 2) {
            n -= 2;
            hw = *(uint16_t *)src;
            src += 2;
            hw = carry | (hw << 8);
            *(uint16_t *)dst = hw;
            dst += 2;
            carry = hw >> 16;
        }
tail:
        if (n & 1) {
            *(uint16_t *)dst = (*(uint16_t *)dst & 0xff00) | carry;
        }
        return;
    }
    if (((uint32_t)dst ^ (uint32_t)src) & 2) {
        uint32_t n2 = n & ~1u;
        if (n2 != 0) {
            uint8_t *end = dst + n2;
            n -= n2;
            do {
                *(uint16_t *)dst = *(uint16_t *)src;
                src += 2;
                dst += 2;
            } while (dst != end);
        }
    } else {
        if (n >= 2) {
            if ((uint32_t)dst & 2) {
                *(uint16_t *)dst = *(uint16_t *)src;
                src += 2;
                dst += 2;
                n -= 2;
                if (n == 0) {
                    return;
                }
            }
            {
                uint32_t n4 = n & ~3u;
                if (n4 != 0) {
                    uint8_t *end = dst + n4;
                    n -= n4;
                    do {
                        *(uint32_t *)dst = *(uint32_t *)src;
                        src += 4;
                        dst += 4;
                    } while (dst != end);
                }
            }
            if (n & 2) {
                *(uint16_t *)dst = *(uint16_t *)src;
                src += 2;
                dst += 2;
            }
        }
    }
    if (n & 1) {
        *(uint16_t *)dst = (*(uint16_t *)dst & 0xff00) | (*(uint16_t *)src & 0xff);
    }
}
