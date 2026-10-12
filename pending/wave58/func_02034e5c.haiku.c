#include "ffc/types.h"

typedef struct {
    uint32_t hdr;
    uint32_t len;
    int8_t *ptr;
} Str;

#define STR_END(p) (((p)->hdr & 1) ? (p)->ptr + (p)->len : (int8_t *)(p) + 1 + ((uint8_t)(p)->hdr >> 1))

int func_02034e5c(Str *p) {
    int count = 0;
    int seen = 0;
    int8_t *it = ((p)->hdr & 1) ? p->ptr : (int8_t *)p + 1;

    while (it != STR_END(p)) {
        if (*it == 's' && seen) {
            for (;;) {
                if (it == STR_END(p)) return count;
                it++;
                if (*it != '$') continue;
                if (it + 1 == STR_END(p)) continue;
                if (it + 2 == STR_END(p)) continue;
                if (it[1] == 'r' && it[2] == 'e') {
                    count++;
                    seen = 0;
                }
                it += 2;
                break;
            }
        } else if (*it == '$') {
            if (it == STR_END(p)) return 0;
            if (it + 1 != STR_END(p) && it[1] == 'r') {
                if (it + 2 != STR_END(p) && it[2] == 's') {
                    seen = 1;
                }
            }
        }
        it++;
    }
    return count;
}
