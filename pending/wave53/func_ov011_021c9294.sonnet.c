#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Loc;

extern void func_02005988(void *a, void *b);
extern void func_02017b58(Loc *out, void *x);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_020159c8(void *obj, uint32_t id);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern uint8_t data_ov011_021cbd94[];
extern void *data_020b8e44;

void func_ov011_021c9294(void *a, void *b)
{
    Loc loc;
    Loc *p;
    uint16_t t;
    uint32_t id;
    uint32_t r5;
    uint32_t r2;
    uint32_t v;

    func_02005988(a, data_ov011_021cbd94);
    v = *(uint32_t *)((uint8_t *)b + 0x3b8);
    if (v == 0) {
        return;
    }
    func_02017b58(&loc, data_020b8e44);
    t = *(uint16_t *)((uint8_t *)func_02052d90(loc.mar, loc.idx) + 0x28);
    if (t != 0) {
        id = 0;
        switch (t) {
        case 1: id = 0x73; break;
        case 2: id = 0x74; break;
        case 3: id = 0x75; break;
        case 4: id = 0x76; break;
        case 5: id = 0x77; break;
        default: break;
        }
        r5 = func_020159c8(data_020b8e44, 0x72);
        r2 = func_020159c8(data_020b8e44, id);
        func_02005efc(a, r5, r2);
    }
    p = &loc;
    if (p->mar != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->mar, p->idx);
        }
        func_02052c04(p->mar);
    }
    func_02053290(p);
}
