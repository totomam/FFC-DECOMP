#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021c85f8(void *p);
extern void *func_ov002_021a1630(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020abbb8[];

typedef struct {
    uint32_t *vtbl;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint8_t f18;
    uint32_t f1c;
} Node;

void *func_ov002_021a15d0(uint8_t *param) {
    void *obj;
    int32_t i;
    void *r;

    obj = func_0203b6fc();
    i = 0;
    do {
        Node *n = (Node *)func_0205681c(0x20);
        if (n != 0) {
            uint32_t t = func_ov002_021c85f8(param + 0x144);
            n->f8 = 0;
            n->fc = 0x100f1;
            n->vtbl = data_020abbb8;
            n->f10 = 0;
            n->f14 = t;
            n->f18 = 1;
            n->f1c = i;
        }
        r = func_ov002_021a1630(*(void **)(param + 0xf0), n);
        func_02056bc0(obj, r);
        i++;
    } while (i < 3);
    return obj;
}
