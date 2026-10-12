#include "ffc/types.h"

struct Out {
    int8_t *ptr;
    int len;
};

extern int func_ov000_02167440(int a, int8_t *text, int end, int *pos);
extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern uint16_t data_020a6254[];
extern uint8_t data_ov000_0216bb74[];

static inline int ctm(int c, int m) {
    int r = 0;
    if ((uint32_t)c >= 0x80) r = 0;
    else r = data_020a6254[c] & m;
    return r;
}
#define ALNUM(c) ctm(c, 9)
#define ALPHA(c) ctm(c, 8)

int func_ov000_021677e4(int a, int8_t *text, int end, int *pos, struct Out *out) {
    int seenColon = 0;
    int ch;
    int p;

    if (func_ov000_02167440(a, text, end, pos) == 0) {
        return seenColon;
    }
    p = *pos;
    if (p >= end) {
        return seenColon;
    }
    ch = text[p];
    if (ALNUM(ch) == 0 || ALPHA(ch) != 0) {
        return 0;
    }
    out->ptr = text + p;
    out->len = 1;
    goto adv;

    for (;;) {
        if (ch == ':') {
            if (seenColon != 0) {
                return 0;
            }
            seenColon = 1;
        } else if (ch != '_' && ch != '-') {
            if (ALNUM(ch) == 0) {
                return 1;
            }
        }
        out->len = out->len + 1;
adv:
        *pos = *pos + 1;
        p = *pos;
        if (p >= end) {
            return 1;
        }
        ch = text[p];
        if (func_02092a2c(data_ov000_0216bb74, ch) != 0) {
            return 1;
        }
    }
}
