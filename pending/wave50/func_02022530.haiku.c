#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02056858(void *p);
extern void func_0202249c(void *p);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_02056db0(void *p);
extern uint8_t data_020ad6f4[];

void *func_02022530(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    uint8_t *s;
    uint8_t *q;

    func_0200d5ec(p + 0xcc);

    q = p + 0xbc;
    *(void **)q = data_020ad6f4;
    func_02056858(*(void **)(q + 0xc));

    q = p + 0xac;
    *(void **)q = data_020ad6f4;
    func_02056858(*(void **)(q + 0xc));

    func_0202249c(p + 0xa0);

    s = p + 0x90;
    if (*(void **)(s + 4) != 0) {
        if (s[0xc] != 0) {
            func_02052d3c(*(void **)(s + 4), *(void **)(s + 8));
        }
        func_02052c04(*(void **)(s + 4));
    }
    func_02053290(s);

    s = p + 0x80;
    if (*(void **)(s + 4) != 0) {
        if (s[0xc] != 0) {
            func_02052d3c(*(void **)(s + 4), *(void **)(s + 8));
        }
        func_02052c04(*(void **)(s + 4));
    }
    func_02053290(s);

    func_02056db0(p);
    return p;
}
