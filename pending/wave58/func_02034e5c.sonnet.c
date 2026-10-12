#include "ffc/types.h"

typedef struct {
    uint32_t lng : 1;
    uint32_t pad : 31;
    uint32_t len;
    int8_t *ptr;
} Str;

typedef struct {
    uint8_t lng : 1;
    uint8_t slen : 7;
} Sh;

#define END(p, s) ((s) ? (int8_t *)(p) + 1 + ((Sh *)(p))->slen : (p)->ptr + (p)->len)

int func_02034e5c(Str *p) {
    int count = 0;
    int a = !p->lng;
    int l = !a;
    int s = !l;
    int8_t *it = s ? (int8_t *)p + 1 : p->ptr;

    int seen = 0;
    while (it != (l ? p->ptr + p->len : (int8_t *)p + 1 + ((Sh *)p)->slen)) {
        if (*it == 's' && seen) {
            for (;;) {
                if (it == END(p, s)) return count;
                it++;
                if (*it != '$') continue;
                if (it + 1 == END(p, s)) continue;
                if (it + 2 == END(p, s)) continue;
                if (it[1] == 'r' && it[2] == 'e') {
                    count++;
                    seen = 0;
                }
                it += 2;
                break;
            }
        } else if (*it == '$') {
            if (it == END(p, s)) return 0;
            if (it + 1 != END(p, s) && it[1] == 'r') {
                if (it + 2 != END(p, s) && it[2] == 's') {
                    seen = 1;
                }
            }
        }
        it++;
    }
    return count;
}
