#include "ffc/types.h"

extern int32_t func_ov000_0214d80c(void *a, void *b, void *c, uint16_t *h, uint32_t *w, uint32_t d);

typedef struct {
    uint16_t pad;
    uint16_t s;
    uint32_t t;
} OutRec;

int32_t func_ov000_0214ed98(void *a, void *b, void *c, uint32_t d, uint32_t out_addr)
{
    OutRec *out;
    uint16_t h;
    uint32_t w;
    int32_t r;

    r = func_ov000_0214d80c(a, b, c, &h, &w, d);
    if (r < 0) {
        return r;
    }
    out = (OutRec *)out_addr;
    if (out == 0) {
        return r;
    }
    out->s = (uint16_t)((((int32_t)h >> 8) & 0xff) | ((h << 8) & 0xff00));
    out->t = ((uint8_t)(w >> 24) | ((w >> 8) & 0xff00)) | ((w << 8) & 0xff0000) | ((w << 24) & 0xff000000);
    return r;
}
