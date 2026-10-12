#include "ffc/types.h"

extern void func_02016630(void *obj, void *v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void *data_020b8e44;

typedef struct {
    uint32_t hdr;
    uint32_t count;
    uint32_t off;
} Tab;

typedef struct {
    uint32_t pad0;
    void *a;
    uint32_t b;
    uint8_t flag;
} Ctx;

uint32_t func_0201eb5c(void)
{
    uint32_t arr[2];
    Ctx s;
    uint32_t res;
    Ctx *c;
    int i;
    uint32_t *p;

    func_02016630(&s, data_020b8e44);
    arr[1] = 0;
    i = (int)((Tab *)func_02052d90(s.a, s.b))->count - 1;
    while (i >= 0) {
        Tab *t = (Tab *)func_02052d90(s.a, s.b);
        arr[0] = *(uint16_t *)((uint8_t *)t + t->off + i * 0x28);
        p = (arr[1] < arr[0]) ? &arr[0] : &arr[1];
        arr[1] = *p;
        i--;
    }
    res = arr[1];
    c = &s;
    if (c->a != 0) {
        if (c->flag != 0) {
            func_02052d3c(c->a, c->b);
        }
        func_02052c04(c->a);
    }
    func_02053290(c);
    return res;
}
