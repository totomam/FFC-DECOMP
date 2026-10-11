#include "ffc/types.h"

extern uint8_t data_020a6154[];

char *func_ov000_021658e8(char *s)
{
    char *orig = s;
    int c = *s;
    while (c != 0) {
        if (c >= 0 && c < 0x80) {
            c = data_020a6154[c];
        }
        *s = (char)c;
        s++;
        c = *s;
    }
    return orig;
}
