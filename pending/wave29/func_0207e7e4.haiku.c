#include "ffc/types.h"

int func_0207e7e4(uint8_t *s, int len) {
    int j = len - 1;
    while (j > 0 && (uint32_t)((s[j - 1] ^ 0x20) - 0xa1) < 0x3c) {
        j--;
    }
    {
        int n = len - 1;
        return n - ((n - j) & 1);
    }
}
