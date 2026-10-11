#include "ffc/types.h"

extern void func_02062848(void *object);
extern void *func_0203b95c(void *a, void *b, int c, int d);
extern uint8_t data_ov011_021cac80[];
extern uint8_t data_ov011_021ca980[];

typedef struct {
    void *vt;
    uint32_t pad[4];
    void *obj;
    uint32_t f[4];
} Self;

void *func_ov011_021bd684(void *p0, void *p1)
{
    Self *s = (Self *)p0;
    void *obj;

    func_02062848(p0);
    s->vt = data_ov011_021cac80;
    s->f[0] = 0;
    s->f[1] = 0;
    s->f[2] = 0;
    s->f[3] = 0;
    obj = func_0203b95c(*(void **)(data_ov011_021ca980 + 0x14), p1, 0, 1);
    s->obj = obj;
    ((void (*)(void *, int, int))(*(void ***)obj)[14])(obj, 1, 0);
    ((void (*)(void *))(*(void ***)s->obj)[11])(s->obj);
    return p0;
}
