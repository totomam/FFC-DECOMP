#include "ffc/types.h"

struct Out {
    int8_t *ptr;
    int len;
};

extern int func_ov000_02167440(int a, int8_t *text, int end, int *pos, int8_t *text2, int end2);
extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern uint16_t data_020a6254[];
extern uint8_t data_ov000_0216bb74[];

int func_ov000_021677e4(int a, int8_t *text, int end, int *pos, struct Out *out) {
    int seenColon = 0;
    int ch;

    if (func_ov000_02167440(a, text, end, pos, text, end) == 0) {
        return 0;
    }
    if (*pos >= end) {
        return 0;
    }
    ch = text[*pos];
    if (ch < 0 || (data_020a6254[ch] & 9) == 0) {
        return 0;
    }
    if (ch < 0x80 && (data_020a6254[ch] & 8) != 0) {
        return 0;
    }
    out->ptr = text + *pos;
    out->len = 1;
    *pos = *pos + 1;

    for (;;) {
        if (*pos >= end) {
            return 1;
        }
        ch = text[*pos];
        if (func_02092a2c(data_ov000_0216bb74, ch) != 0) {
            return 1;
        }
        if (ch == ':') {
            if (seenColon != 0) {
                return 0;
            }
            seenColon = 1;
        } else if (ch != '_' && ch != '-') {
            if (ch < 0 || (data_020a6254[ch] & 9) == 0) {
                return 1;
            }
        }
        out->len = out->len + 1;
        *pos = *pos + 1;
    }
}
