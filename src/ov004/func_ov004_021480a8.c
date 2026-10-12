#include "ffc/types.h"

extern void func_0200d5ec(void *p);
extern void func_02056858(void *p);
extern void func_0202249c(void *p);
extern void func_02052d3c(void *p, void *q);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void func_02056db0(void *p);
extern char data_020ad6f4[];

void *func_ov004_021480a8(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint8_t *q;

    func_0200d5ec(p + 0xcc);

    q = p + 0xbc;
    *(void **)q = data_020ad6f4;
    func_02056858(*(void **)(q + 0xc));

    q = p + 0xac;
    *(void **)q = data_020ad6f4;
    func_02056858(*(void **)(q + 0xc));

    func_0202249c(p + 0xa0);

    q = p + 0x90;
    if (*(void **)(q + 4) != 0) {
        if (q[0xc] != 0) {
            func_02052d3c(*(void **)(q + 4), *(void **)(q + 8));
        }
        func_02052c04(*(void **)(q + 4));
    }
    func_02053290(q);

    q = p + 0x80;
    if (*(void **)(q + 4) != 0) {
        if (q[0xc] != 0) {
            func_02052d3c(*(void **)(q + 4), *(void **)(q + 8));
        }
        func_02052c04(*(void **)(q + 4));
    }
    func_02053290(q);

    func_02056db0(a);
    return a;
}
