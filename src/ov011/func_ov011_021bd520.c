#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void func_02069404(void *object, uint32_t value);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov011_021cac18[];
extern uint8_t data_ov011_021ca980[];

typedef struct {
    uint32_t x;
    uint32_t y;
} S2;

typedef void (*VFnS)(void *, S2);
typedef void (*VFn1)(void *, uint32_t, uint32_t);
typedef void (*VFn2)(void *, uint32_t);
typedef void (*VFn0)(void *);

void *func_ov011_021bd520(void *self, uint32_t a, S2 s)
{
    uint8_t *p = (uint8_t *)self;
    void *obj;
    void **vt;

    func_02069210(self);
    *(void **)p = (void *)data_ov011_021cac18;
    *(uint32_t *)(p + 0x98) = a;
    *(uint32_t *)(p + 0x9c) = s.x;
    *(uint32_t *)(p + 0xa0) = s.y;

    func_02069404(self, 2);

    *(void **)(p + 0x94) = obj = func_0203b95c(*(void **)(data_ov011_021ca980 + 0x14),
                        *(void **)(*(uint8_t **)(p + 0x98) + 0xb8),
                        2, 1);

    ((VFnS)(*(void ***)obj)[3])(obj, s);

    obj = *(void **)(p + 0x94);
    vt = *(void ***)obj;
    ((VFn1)vt[14])(obj, 1, 0);

    obj = *(void **)(p + 0x94);
    vt = *(void ***)obj;
    ((VFn2)vt[8])(obj, 2);

    obj = *(void **)(p + 0x94);
    vt = *(void ***)obj;
    ((VFn0)vt[11])(obj);

    func_02056bc0(p + 0x48, *(void **)(p + 0x94));
    return self;
}
