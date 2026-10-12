#include "ffc/types.h"

typedef struct { uint8_t c; } B;
extern void func_020224fc(void *s, int32_t n, B v);
extern void func_02090398(int32_t *dst, int32_t *src, int32_t size);

typedef struct {
    int32_t *data;
    int32_t count;
} VecS;

static inline void ins(VecS *s, int32_t *b, int32_t *e)
{
    int d = (char*)e - (char*)b;
    if (d / 4 != 0) {
        B v[2];
        v[1].c = 0;
        func_020224fc(s, d / 4, v[1]);
        func_02090398(s->data + s->count, b, (d / 4) * 4);
        s->count += d / 4;
    }
}

void func_ov004_02152398(VecS *s, int32_t *b, int32_t *e)
{
    ins(s, b, e);
}
