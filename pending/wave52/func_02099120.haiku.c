#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);

typedef struct FfcStream {
    void **vtbl;
    uint32_t pad[4];
    uint8_t *cur;
    uint8_t *end;
} FfcStream;

int32_t func_02099120(FfcStream *s, const uint8_t *src, int32_t n) {
    int32_t len = (int32_t)(s->end - s->cur);
    int32_t *pp = (len < n) ? &len : &n;
    int32_t count = *pp;

    if (count > 0) {
        func_02090380(s->cur, src, (uint32_t)count);
        s->cur += count;
        src += count;
        n -= count;
    }

    while (n > 0) {
        uint8_t **pcur = &s->cur;
        uint8_t *cur = s->cur;
        uint8_t *end = s->end;
        uint8_t c = *src;
        int32_t r;
        src++;
        if (cur < end) {
            *pcur = *pcur + 1;
            *cur = c;
            r = *cur;
        } else {
            r = ((int32_t (*)(FfcStream *, uint8_t))((void **)s->vtbl)[12])(s, c);
        }
        if (r == -1) {
            break;
        }
        count++;
        n--;
    }
    return count;
}
