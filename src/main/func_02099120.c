/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02090380(void *destination, const void *source, uint32_t length);

struct FfcStream {
    uint32_t pad[4];
    uint8_t *cur;
    uint8_t *end;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual int v12(int c);
};

extern "C" int32_t func_02099120(FfcStream *s, const uint8_t *src, int32_t n) {
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
            r = s->v12(c);
        }
        if (r == -1) break;
        count++;
        n--;
    }
    return count;
}
