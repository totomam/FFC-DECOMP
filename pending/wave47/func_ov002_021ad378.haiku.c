#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Elem;
typedef struct { Elem *begin; int32_t count; int32_t cap; } Vec;

extern uint32_t func_ov002_021ad2f8(Vec *self, int32_t need);
extern void func_ov002_021ad460(Vec *tmp, uint32_t cap, uint8_t flag);
extern void func_ov002_021ad450(Vec *tmp);

void func_ov002_021ad378(Vec *self, int32_t n, Elem *src)
{
    Vec tmp;
    uint8_t flag;
    int32_t cnt;
    Elem *dst;
    Elem *end;
    Elem *beg;
    uint32_t cap;

    tmp.begin = 0;
    tmp.count = 0;
    tmp.cap = 0;
    flag = 0;
    cap = func_ov002_021ad2f8(self, self->count + n - self->cap);
    func_ov002_021ad460(&tmp, cap, flag);
    cnt = self->count;

    dst = tmp.begin + self->count + tmp.count;
    while (n != 0) {
        if (dst != 0) {
            *dst = *src;
        }
        tmp.count++;
        dst++;
        n--;
    }

    end = self->begin + self->count;
    beg = self->begin;
    dst = tmp.begin + cnt;
    while (end > beg) {
        end--;
        dst--;
        if (dst != 0) {
            *dst = *end;
        }
        cnt--;
        tmp.count++;
    }

    {
        Elem *tb = self->begin;
        int32_t tc;
        int32_t tcap;
        tc = self->cap;
        tcap = tmp.cap;
        tmp.cap = tc;
        self->cap = tcap;
        (void)tb;
    }
    {
        Elem *ob = self->begin;
        self->begin = tmp.begin;
        tmp.begin = ob;
    }
    {
        int32_t oc = self->count;
        self->count = tmp.count;
        tmp.count = oc;
    }
    func_ov002_021ad450(&tmp);
}
