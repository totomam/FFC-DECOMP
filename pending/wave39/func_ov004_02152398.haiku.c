#include "ffc/types.h"

extern void func_020224fc(void *s, int32_t n, uint32_t v);
extern void func_02090398(int32_t *dst, int32_t *src, int32_t size);

typedef struct {
    int32_t *data;
    int32_t count;
} VecS;

void func_ov004_02152398(VecS *s, int32_t *b, int32_t *e)
{
    int32_t n = e - b;
    if (n != 0) {
        union {
            uint8_t c[4];
            uint32_t w;
        } u;
        u.c[0] = 0;
        func_020224fc(s, n, u.w);
        func_02090398(s->data + s->count, b, n * 4);
        s->count += n;
    }
}
