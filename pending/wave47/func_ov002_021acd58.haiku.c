#include "ffc/types.h"

typedef struct Tmp {
    uint32_t f0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Tmp;

typedef struct Locals {
    uint32_t x[6];
    Tmp t2;
    Tmp t1;
} Locals;

extern uint8_t *func_ov002_021aac08(const void *object);
extern void func_02015e8c(Tmp *out, void *src);
extern void *func_02052d90(const void *mar, uint32_t index);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint8_t func_ov002_021aab40(const void *object);
extern void *data_020b8e44;

void func_ov002_021acd58(uint32_t *out, uint8_t *obj, void *arg)
{
    Locals L;
    Tmp *s;
    uint8_t *p;
    void *ob = arg;
    uint16_t id;
    uint8_t *a;
    void *q;

    *out = 0x1000;
    p = *(uint8_t **)(obj + 0x138);
    if (p[0x19] == 0x13) {
        id = *(uint16_t *)(p + 0x54);
        a = func_ov002_021aac08(ob);
        if (id == a[1]) {
            s = &L.t1;
            func_02015e8c(s, data_020b8e44);
            q = func_02052d90(s->mar, s->idx);
            *out = func_020817c8(*out, *(uint32_t *)((uint8_t *)q + 0x68));
            if (s->mar != 0) {
                if (s->flag != 0) {
                    func_02052d3c(s->mar, s->idx);
                }
                func_02052c04(s->mar);
            }
            func_02053290(s);
        }
    }
    if (func_ov002_021aab40(ob) == 0x13) {
        a = func_ov002_021aac08(ob);
        id = *(uint16_t *)(a + 0x54);
        p = *(uint8_t **)(obj + 0x138);
        if (id == p[1]) {
            s = &L.t2;
            func_02015e8c(s, data_020b8e44);
            q = func_02052d90(s->mar, s->idx);
            *out = func_020817c8(*out, *(uint32_t *)((uint8_t *)q + 0x68));
            if (s->mar != 0) {
                if (s->flag != 0) {
                    func_02052d3c(s->mar, s->idx);
                }
                func_02052c04(s->mar);
            }
            func_02053290(s);
        }
    }
}
