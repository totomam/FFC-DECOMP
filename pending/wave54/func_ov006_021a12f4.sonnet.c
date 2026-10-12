#include "ffc/types.h"

int func_ov006_021a12f4(uint8_t *out, int8_t *in, int n)
{
    int i;
    int acc = 0;
    for (i = 0; i < n; i++) {
        int c = in[i];
        switch (c) {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            acc += (int8_t)(c - '0');
            break;
        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
            acc += (int8_t)(c - 0x57);
            break;
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
            acc += (int8_t)(c - 0x37);
            break;
        default:
            return 0;
        }
        if (i % 2 == 0) {
            acc <<= 4;
        } else {
            out[i / 2] = acc;
            acc = 0;
        }
    }
    return 1;
}
