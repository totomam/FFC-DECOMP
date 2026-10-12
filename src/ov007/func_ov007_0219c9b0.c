#include "ffc/types.h"

typedef struct {
    void *pad;
    void *obj;
} G_t;

extern uint32_t func_0204f7ec(const void *object);
extern void *func_0203bb08(void *a, void *b, int c, int d, int e);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov007_021c2f0c[];
extern uint8_t data_ov007_021c2f20[];
extern void *data_0213df18;
extern G_t data_ov007_021c9704;

void func_ov007_0219c9b0(uint8_t *a, int b)
{
    void *obj;
    void *cfg;

    if (b == 0) {
        cfg = data_ov007_021c2f0c;
    } else {
        cfg = data_ov007_021c2f20;
    }
    obj = func_0203bb08((void *)func_0204f7ec(data_0213df18), cfg, 1, 0, 0);
    data_ov007_021c9704.obj = obj;
    if (b == 1) {
        ((void (*)(void *, int, int))((void **)*(void **)obj)[0x38 / 4])(obj, -32, -32);
    }
    ((void (*)(void *, int))((void **)*(void **)data_ov007_021c9704.obj)[0x20 / 4])(data_ov007_021c9704.obj, 3);
    ((void (*)(void *))((void **)*(void **)data_ov007_021c9704.obj)[0x28 / 4])(data_ov007_021c9704.obj);
    func_02056bc0(*(void **)(a + 0xc8), data_ov007_021c9704.obj);
}
