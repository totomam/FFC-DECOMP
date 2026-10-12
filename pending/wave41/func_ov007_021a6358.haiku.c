#include "ffc/types.h"

extern void *func_02056aec(uint8_t *obj);
extern void *func_02060634(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint8_t *data_0213df20;
extern uint32_t data_ov007_021c4358[2];

void func_ov007_021a6358(uint8_t *p)
{
    uint8_t *q;
    void *r6;
    void *r1;
    uint32_t a;
    uint32_t b;
    void **obj;

    if (*(void **)(p + 0xa0) == 0) {
        obj = *(void ***)(p + 0xac);
        if (obj != 0) {
            ((void (*)(void *))((void **)*obj)[1])(obj);
        }
        *(uint32_t *)(p + 0xac) = 0;

        **(uint32_t **)(p + 0x90) = 0;

        r6 = func_02056aec(p);

        r1 = func_02060634(*(void **)(data_0213df20 + 0x20), 8, 0, 10, 0, 0);
        q = p + 0x14;
        func_02056bc0(q, r1);
        func_02056bc0(q, r6);
    } else {
        q = p + 0x14;
        func_02056bc0(q, *(void **)(p + 0xac));
        a = data_ov007_021c4358[0];
        b = data_ov007_021c4358[1];
        *(uint32_t *)(p + 0x80) = a;
        *(uint32_t *)(p + 0x84) = b;
    }
}
