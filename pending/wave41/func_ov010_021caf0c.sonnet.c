#include "ffc/types.h"

typedef struct { uint32_t x, y, z; } V;
typedef struct {
    uint8_t pad0[0xdc];
    uint32_t f_dc;
    uint8_t pad1[0x1a4 - 0xe0];
    V v0, v1, v2;
    uint32_t a24, a28;
    uint8_t b2c;
    uint32_t a30;
    uint8_t b34;
    uint32_t a38;
    V v3;
    uint8_t pad2[0x4c - 0x48];
    uint8_t b4c;
} S;

extern void *data_0213df18;
extern char data_ov010_021d2270[];
extern uint32_t func_0204f7ec(const void *object);
extern void func_02069528(void *obj, uint32_t v, uint32_t c, uint32_t d);
extern void func_ov010_021d075c(void *obj, uint32_t b, uint32_t c);

void *func_ov010_021caf0c(void *a)
{
    S *s = (S *)a;
    uint8_t tmp;
    uint32_t v = func_0204f7ec(data_0213df18);
    func_02069528(a, v, 0, 0);
    *(void **)a = data_ov010_021d2270;
    s->f_dc = 0;
    s->v0.x = 0; s->v0.y = 0; s->v0.z = 0;
    s->v1.x = 0; s->v1.y = 0; s->v1.z = 0;
    s->v2.x = 0; s->v2.y = 0; s->v2.z = 0;
    s->a24 = 0;
    s->a28 = 0;
    s->b2c = 0;
    s->a30 = 0;
    s->b34 = 0;
    s->a38 = 0;
    s->v3.x = 0; s->v3.y = 0; s->v3.z = 0;
    s->b4c = 0;
    tmp = 0;
    func_ov010_021d075c(a, 0, tmp);
    return a;
}
