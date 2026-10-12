#include "ffc/types.h"

extern void func_020559d4(void *p);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void *func_02056aec(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *p, uint32_t n);
extern void func_02005988(void *buf, void *x);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern void *func_02032d24(void *obj, Pair sz, void *buf, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern uint32_t data_ov013_021c4e60[2];
extern uint32_t data_ov013_021c4e68[2];

typedef struct { uint32_t f:1; uint32_t n:31; } Str;typedef struct { uint8_t f:1; uint8_t n:7; } Str8;
void func_ov013_021c24c0(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *obj;
    uint8_t st;
    uint8_t *m;
    uint32_t v;
    uint8_t *q;
    uint32_t flag;
    uint32_t buf[3];

    Pair szz[2];
    
    func_020559d4(*(uint8_t **)(p + 0xc8) + 0xb8);
    func_020559d4(p + 0x80);

    obj = *(uint8_t **)(p + 0xec);
    m = obj + 0x1c;
    st = obj[0x12];
    if (st != 0) {
        func_0208763c(m);
    }
    flag = (*(uint32_t *)(obj + 0x14) == 0);
    if (st != 0) {
        func_02087678(m);
    }
    if (flag) {
    if (*(uint32_t *)(p + 0xf0) == 0x1b2) {
        func_02056bc0(p + 0x14, func_02056aec(p));
        return;
    }

    q = *(uint8_t **)(p + 0xd0);
    if (((Str *)(q + 0xac))->f == 0) v = ((Str8 *)(q + 0xac))->n;
    else v = *(uint32_t *)(q + 0xb0);

    if (v == 0) {
        uint32_t z = 0;
        uint32_t done = 0;
        void *res = func_0205681c(0xb0);
        if (res != 0) {
            void *tmp = func_020159c8(data_020b8e44, 0x1b6);
            func_02005988(buf, tmp);
            szz[1].a = 0x80;
            szz[1].b = 0x60;
            done = 1;
            res = func_02032d24(res, szz[1], buf, 4, z);
        }
        if (done) func_020059cc(buf);
        {
            void *nn = func_02056aec(p);
            void *l = p + 0x14;
            func_02056bc0(l, res);
            func_02056bc0(l, nn);
        }
    } else {
    *(Pair *)(p + 0xb8) = *(Pair *)data_ov013_021c4e60;
    *(Pair *)(p + 0xc0) = *(Pair *)data_ov013_021c4e68;
    }
    }
}
