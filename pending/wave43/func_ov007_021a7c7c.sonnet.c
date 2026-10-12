#include "ffc/types.h"

extern void *data_0213df20;
extern void *data_ov007_021c9708;
extern void *data_020b8e44;
extern void *data_020b93b8;
extern uint32_t data_ov007_021c4694[2];

extern void func_0206047c(void *o);
extern void func_02060548(void *o, uint32_t v);
extern void func_02060574(void *o, uint32_t v);
extern void func_02016b68(void *out, void *src);
extern void *func_02052d90(uint32_t a, uint32_t b);
extern int64_t func_0201b7b0(void *o);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *o);
extern uint32_t func_02060634(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *o, uint32_t node);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} Tmp;

void func_ov007_021a7c7c(char *a)
{
    Tmp t;
    Tmp *tp;
    uint32_t r;
    int hw;
    void *obj;
    int64_t v;

    func_0206047c(*(void **)((char *)data_0213df20 + 0x20));
    func_02060548(*(void **)((char *)data_0213df20 + 0x20), 3);
    obj = *(void **)((char *)data_0213df20 + 0x20);
    r = ((uint32_t (*)(void *))((void **)(*(void ***)data_ov007_021c9708))[13])(data_ov007_021c9708);
    func_02060574(obj, r);
    *(uint32_t *)(a + 0xec) = 0;
    tp = &t;
    func_02016b68(tp, data_020b8e44);
    hw = *(uint16_t *)((char *)func_02052d90(tp->f4, tp->f8) + 4);
    v = func_0201b7b0(data_020b93b8);
    v += hw;
    *(int64_t *)(a + 0x140) = v;
    if (tp->f4 != 0) {
        if (tp->fc != 0) {
            func_02052d3c(tp->f4, tp->f8);
        }
        func_02052c04(tp->f4);
    }
    func_02053290(tp);
    r = func_02060634(*(void **)((char *)data_0213df20 + 0x20), 0, 8, 10, 0, 0);
    func_02056bc0(a + 0x14, r);
    {
        uint64_t w = *(uint64_t *)data_ov007_021c4694;
        *(uint32_t *)(a + 0xb8) = (uint32_t)w;
        *(uint32_t *)(a + 0xbc) = (uint32_t)(w >> 32);
    }
}
