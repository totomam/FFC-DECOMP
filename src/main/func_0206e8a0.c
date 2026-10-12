#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

typedef struct Obj {
    void *vtbl;      /* 0x00 */
    uint8_t pad[0x1c - 4];
    void *f1c;       /* 0x1c */
    void *f20;       /* 0x20 */
    uint8_t f24;     /* 0x24 */
    uint8_t f25;     /* 0x25 */
    uint8_t pad2[2];
    uint32_t f28;    /* 0x28 */
} Obj;

extern void func_02062930(void *obj, Pair p);
extern void func_0205234c(void *a, void *b);
extern void *func_0205681c(uint32_t size);
extern void *func_0205f60c(void *a, void *b, int c, int d, void *e);
extern void func_02005988(void *dst, void *src);
extern void *func_02063c94(void *obj, void *buf, void *x, int zero, int one);
extern void *func_020059cc(void *object);
extern char data_020b1fd8[];
extern char data_020b2034[];
extern char data_020a0320[];
extern void *data_0213df20;

void *func_0206e8a0(void *self, void *a1, void *a2, void *a3, uint8_t a4)
{
    Obj *o = (Obj *)self;
    uint32_t buf[3];
    Pair p;
    void *r4 = a1;
    void *r6;
    int flag;

    p.a = 0x10;
    p.b = 0x10;
    func_02062930(self, p);
    o->vtbl = data_020b1fd8;
    o->f24 = 1;
    o->f25 = a4;
    o->f28 = 0;
    func_0205234c(data_020b2034, data_020a0320);
    if (a1 == 0) {
        r4 = data_0213df20;
    }
    r6 = func_0205681c(0x50);
    if (r6 != 0) {
        r6 = func_0205f60c(r6, r4, 1, 1, a3);
    }
    o->f20 = r6;
    flag = 0;
    r6 = func_0205681c(0x80);
    if (r6 != 0) {
        func_02005988(buf, a2);
        flag = 1;
        r6 = func_02063c94(r6, buf, o->f20, 0, 1);
    }
    o->f1c = r6;
    if (flag != 0) {
        func_020059cc(buf);
    }
    return self;
}
