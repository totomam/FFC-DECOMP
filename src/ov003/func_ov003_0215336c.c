#include "ffc/types.h"

extern void func_02052d3c(void *h, uint32_t x);
extern void func_02052c04(void *h);
extern void *func_02053290(void *object);
extern void func_02050c28(void *object);
extern void func_02056db0(void *object);

typedef struct Sub {
    uint32_t a;
    void *h;
    uint32_t b;
    uint8_t flag;
} Sub;

void *func_ov003_0215336c(void *obj)
{
    Sub *s;

    s = (Sub *)((uint8_t *)obj + 0x100);
    if (s->h != 0) {
        if (s->flag != 0) {
            func_02052d3c(s->h, s->b);
        }
        func_02052c04(s->h);
    }
    func_02053290(s);

    s = (Sub *)((uint8_t *)obj + 0xF0);
    if (s->h != 0) {
        if (s->flag != 0) {
            func_02052d3c(s->h, s->b);
        }
        func_02052c04(s->h);
    }
    func_02053290(s);

    s = (Sub *)((uint8_t *)obj + 0xE0);
    if (s->h != 0) {
        if (s->flag != 0) {
            func_02052d3c(s->h, s->b);
        }
        func_02052c04(s->h);
    }
    func_02053290(s);

    func_02050c28((uint8_t *)obj + 0x8C);
    func_02056db0(obj);
    return obj;
}
