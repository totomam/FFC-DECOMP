#include "ffc/types.h"

extern uint8_t data_ov007_021c5710[];
extern uint8_t *data_0213df20;
extern void *data_020b93b8;
extern uint32_t data_ov007_021c5684[];
extern void *data_020b8e44;

extern void *func_0203bb94(void *a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void *func_020606f0(void *a, void *b, int c, int d, int e);
extern void *func_02062a30(void *owner);
extern void func_0201f174(void *a);
extern void func_ov005_02197cd0(void *a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, int b);
extern void func_02005988(void *a, void *b);
extern void *func_02008d6c(void *a, void *b);
extern void *func_020059cc(void *object);

#define VCALL(obj, off) (*(void **)((*(uint8_t **)(obj)) + (off)))

void func_ov007_021af190(uint8_t *self)
{
    uint32_t off = 0x110;
    uint32_t flag = 0;
    uint8_t *p;
    void *obj;
    void *r1v;
    void *r7;
    void *r6;
    void *t;
    void *bp;
    uint32_t buf[3];

    obj = func_0203bb94(data_ov007_021c5710, 1, 0, 0);
    *(void **)(self + off) = obj;
    func_02056bc0(self + 0x48, obj);
    obj = *(void **)(self + off);
    ((void (*)(void *))VCALL(obj, 0x2c))(obj);
    obj = *(void **)(self + off);
    ((void (*)(void *, int))VCALL(obj, 0x20))(obj, 2);
    r7 = *(void **)(data_0213df20 + 0x20);
    obj = *(void **)(self + off);
    r1v = ((void *(*)(void *))VCALL(obj, 0x34))(obj);
    r7 = func_020606f0(r7, r1v, 5, 0, flag);
    obj = *(void **)(self + off);
    r1v = func_02062a30(obj);
    p = self + 0x14;
    func_02056bc0(p, r1v);
    func_02056bc0(p, r7);
    func_0201f174(data_020b93b8);
    func_ov005_02197cd0(self, data_ov007_021c5684[1]);

    r6 = func_0205681c(0xc8);
    if (r6 != 0) {
        t = func_020159c8(data_020b8e44, 0x216);
        bp = buf;
        func_02005988(bp, t);
        flag = 1;
        r6 = func_02008d6c(r6, bp);
    }
    func_02056bc0(self + 0x48, r6);
    if (flag) {
        func_020059cc(buf);
    }
}
