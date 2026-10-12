#include "ffc/types.h"

extern void func_02054254(void);
extern void func_020543b8(void);
extern void *func_0205681c(uint32_t size);
extern void *func_0206c2b0(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_0206cb24(void *obj, uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern void *func_0200d050(void *x);
extern void *func_02060634(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
typedef struct { uint32_t x; uint32_t y; } Rect;
extern void *func_02032d24(void *a, Rect r, void *d, uint32_t e, uint32_t f);
extern void *func_0206ccd4(void *a);
extern void *func_020059cc(void *object);
extern void *func_0202157c(uint32_t a, uint32_t b);
extern void *func_020215f0(void);
extern void *func_020215cc(uint32_t a);
extern void *func_02056b10(void *owner);
extern void *data_0213df20;
extern void *data_020b8e44;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c4360;

#define FLD(t, o) (*(t *)(self + (o)))

void func_ov007_021a63fc(uint8_t *self)
{
    void *obj;
    void *t;
    void *r7;
    void *r6;
    void *tmp10;
    void *sp14;
    void *node;
    void *r4;
    Rect pair;
    uint32_t buf[3];
    int flag;

    func_02054254();
    func_020543b8();
    obj = func_0205681c(0x3228);
    if (obj != 0) {
        obj = func_0206c2b0(obj, 0x401326, 2, 9, 0x10000, 0xffffffff, 0xffffffff, 0x10000);
    }
    FLD(void *, 0x88) = obj;
    func_0206cb24(obj, 0x4b0);
    func_02056bc0(self + 0x48, FLD(void *, 0x88));
    t = func_0205681c(0x80);
    if (t != 0) {
        t = func_0200d050(t);
    }
    FLD(void *, 0x8c) = t;
    func_02056bc0(self + 0x48, t);
    FLD(uint32_t, 0x94) = 2;
    flag = 0;

    tmp10 = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);

    r7 = func_0205681c(0xb0);
    if (r7 != 0) {
        node = func_020159c8(data_020b8e44, 0x39);
        func_02005988(buf, node);
        pair.x = 0x80;
        pair.y = 0x60;
        flag = 1;
        r7 = func_02032d24(r7, pair, buf, 4, 0x96);
    }

    node = func_0206ccd4(FLD(void *, 0x88));
    r6 = self + 0x14;
    func_02056bc0(r6, node);
    func_02056bc0(r6, r7);
    func_02056bc0(r6, tmp10);
    if (flag != 0) {
        func_020059cc(buf);
    }

    r6 = func_0202157c(0x72, 0);
    r7 = func_020215f0();
    sp14 = func_020215cc(0x19);
    node = func_02056b10(self + 0x14);
    r4 = FLD(void *, 0xb0);
    func_02056bc0(r4, node);
    func_02056bc0(r4, sp14);
    func_02056bc0(r4, r7);
    func_02056bc0(r4, r6);

    *(Pair *)(self + 0x80) = data_ov007_021c4360;
}
