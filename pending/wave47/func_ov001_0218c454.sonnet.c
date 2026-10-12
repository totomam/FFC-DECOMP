#include "ffc/types.h"

extern void *func_ov001_0218dde0(void *obj, int n);
extern void func_02056c4c(void);
extern uint32_t func_0203c250(void);
extern uint32_t func_0203c23c(void);
extern uint32_t func_020611bc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, void *b);
extern void func_02005988(void *obj, void *src);
typedef struct { uint32_t w, h; } S;
extern void *func_02033094(void *a, void *b, uint32_t c, S d, uint32_t f, uint32_t g);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;

void func_ov001_0218c454(void *p0, void *p1)
{
    uint32_t obj[3];
    S sz;
    uint32_t s2;
    uint32_t s1;
    int flag;
    void *r6;
    void *r4;

    func_ov001_0218dde0(p0, 3);
    func_02056c4c();
    flag = 0;
    s1 = func_020611bc(func_0203c250(), 0x20, 0, 0);
    s2 = func_020611bc(func_0203c23c(), 0x20, 0, 0);
    r6 = func_0205681c(0xa4);
    if (r6 != 0) {
        sz.w = 0x80;
        sz.h = 0x60;
        func_02005988(obj, func_020159c8(data_020b8e44, p1));
        flag = 1;
        r6 = func_02033094(r6, obj, 0, sz, 4, 0);
    }
    r4 = func_0203b6fc();
    func_02056bc0(r4, r6);
    func_02056bc0(r4, (void *)s2);
    func_02056bc0(r4, (void *)s1);
    func_02056bc0(func_ov001_0218dde0(p0, 3), r4);
    if (flag) {
        func_020059cc(obj);
    }
}
