#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t count;
    uint32_t off;
} Obj;

typedef struct {
    uint16_t key;
    uint16_t pad;
    uint32_t val;
} Entry;

typedef struct {
    uint32_t f0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Iter;

extern void func_02018404(Iter *out, uint32_t x);
extern Obj *func_02052d90(void *mar, uint32_t index);
extern int func_0201bcc0(void *a, int b, int c);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

int func_0201c0d0(void *a, uint32_t b)
{
    Iter it;
    uint32_t i;
    int r;
    Obj *obj;
    Entry *e;

    func_02018404(&it, data_020b8e44);
    i = 0;
    obj = func_02052d90(it.mar, it.idx);
    {
        while (i < obj->count) {
            obj = func_02052d90(it.mar, it.idx);
            e = (Entry *)((uint8_t *)obj + obj->off) + i;
            if (b == e->key) {
                Iter *p;
                r = func_0201bcc0(a, 10, i);
                p = &it;
                if (p->mar != 0) {
                    if (p->flag != 0) {
                        func_02052d3c(p->mar, p->idx);
                    }
                    func_02052c04(p->mar);
                }
                func_02053290(p);
                return r;
            }
            i++;
            obj = func_02052d90(it.mar, it.idx);
        }
    }
    {
        Iter *p = &it;
        if (p->mar != 0) {
            if (p->flag != 0) {
                func_02052d3c(p->mar, p->idx);
            }
            func_02052c04(p->mar);
        }
        func_02053290(p);
    }
    return -1;
}
