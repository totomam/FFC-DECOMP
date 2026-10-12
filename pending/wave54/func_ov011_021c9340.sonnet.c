#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *p;
    uint32_t idx;
    uint8_t flag;
} FfcLocal;

extern void func_02005988(void *a, void *b);
extern void func_02017b58(FfcLocal *out, void *obj);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_020159c8(void *obj, uint32_t id);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern char data_ov011_021cbd94[];
extern void *data_020b8e44;

void func_ov011_021c9340(void *a, uint8_t *b)
{
    FfcLocal loc;
    void *p;
    uint32_t sel;
    uint32_t id;
    uint32_t v5;
    uint32_t v2;
    uint32_t t;
    FfcLocal *q;

    func_02005988(a, data_ov011_021cbd94);
    t = *(uint32_t *)(b + 0x3b8);
    if (t == 0) {
        return;
    }
    func_02017b58(&loc, data_020b8e44);
    p = func_02052d90(loc.p, loc.idx);
    sel = *(uint16_t *)((uint8_t *)p + 0x2a);
    if (sel != 0) {
        id = 0;
        switch (sel) {
        case 1: id = 0x79; break;
        case 2: id = 0x7a; break;
        case 3: id = 0x7b; break;
        case 4: id = 0x7c; break;
        case 5: id = 0x7d; break;
        case 6: id = 0x7e; break;
        case 7: id = 0x7f; break;
        case 8: id = 0x80; break;
        case 9: id = 0x81; break;
        case 10: id = 0x82; break;
        case 11: id = 0x83; break;
        case 12: id = 0x84; break;
        }
        v5 = func_020159c8(data_020b8e44, 0x78);
        v2 = func_020159c8(data_020b8e44, id);
        func_02005efc(a, v5, v2);
    }
    q = &loc;
    if (loc.p != 0) {
        if (q->flag != 0) {
            func_02052d3c(q->p, q->idx);
        }
        func_02052c04(q->p);
    }
    func_02053290(q);
}
