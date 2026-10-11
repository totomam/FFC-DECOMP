#include "ffc/types.h"

extern char data_ov003_0217aa7c[];

typedef struct {
    void *vt;
    uint32_t pad04;
    uint32_t pad08;
    uint32_t w0c;
    uint32_t pad10;
    uint32_t w14;
    uint16_t h18;
    uint16_t h1a;
    uint16_t h1c;
    uint16_t arr[5];
} S;

void func_ov003_02166858(S *p, uint32_t a, uint16_t b, uint16_t c, uint16_t d, const uint16_t *src)
{
    uint32_t i;
    p->w0c &= ~0xffu;
    p->vt = data_ov003_0217aa7c;
    p->w14 = a;
    p->h1a = c;
    p->w0c = p->w0c;
    p->h18 = b;
    p->h1c = d;
    for (i = 0; i < 5; i++) {
        p->arr[i] = src[i];
    }
}
