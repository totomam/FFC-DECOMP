#include "ffc/types.h"

extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_02050c28(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

typedef struct {
    uint32_t pad;
    void *ptr;
    uint32_t val;
    uint8_t flag;
} Sub;

void *func_ov003_021533ec(void *p)
{
    uint8_t *base = (uint8_t *)p;
    Sub *s;

    s = (Sub *)(base + 0x100);
    if (s->ptr != 0) {
        if (s->flag != 0) {
            func_02052d3c(s->ptr, s->val);
        }
        func_02052c04(s->ptr);
    }
    func_02053290(s);

    s = (Sub *)(base + 0xf0);
    if (s->ptr != 0) {
        if (s->flag != 0) {
            func_02052d3c(s->ptr, s->val);
        }
        func_02052c04(s->ptr);
    }
    func_02053290(s);

    s = (Sub *)(base + 0xe0);
    if (s->ptr != 0) {
        if (s->flag != 0) {
            func_02052d3c(s->ptr, s->val);
        }
        func_02052c04(s->ptr);
    }
    func_02053290(s);

    func_02050c28(base + 0x8c);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
