#include "ffc/types.h"

typedef struct {
    uint32_t *data;
    uint32_t size;
    uint32_t cap;
} Vec;

extern int32_t func_0200d608(Vec *v, int32_t x);
extern void func_02090398(uint32_t *dst, uint32_t *src, int32_t n);
extern void func_020224fc(Vec *v, int32_t a, uint32_t b);
extern uint32_t *func_0205f178(Vec *v, uint32_t *old, int32_t idx, int32_t cnt, uint32_t cap);

uint32_t *func_0205f0d4(Vec *v, uint32_t *pos, uint32_t *val)
{
    uint32_t *end;
    int32_t cnt;
    int32_t ok = 1;

    if (v->size >= v->cap) {
        func_0200d608(v, 1);
        ok = 0;
    }
    if (ok) {
        end = v->data + v->size;
        if (!(pos > val) && val < end) {
            val = val + 1;
        }
        v->size = v->size + 1;
        cnt = (int32_t)(end - pos);
        func_02090398((uint32_t *)((char *)end + 4 - cnt * 4), pos, cnt * 4);
        *pos = *val;
        return pos;
    } else {
        uint32_t *old = v->data;
        uint32_t cap = v->cap;
        int32_t idx = (int32_t)(pos - old);
        uint8_t buf[4];
        uint32_t w;
        int32_t r;
        buf[0] = 0;
        buf[1] = buf[0];
        w = *(uint32_t *)buf;
        r = func_0200d608(v, 1);
        func_020224fc(v, r, w);
        v->data[idx] = *val;
        return func_0205f178(v, old, idx, 1, cap);
    }
}
