#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef void (*VFn)(void *);
#define VCALL(o, idx) (((VFn)((*(void ***)(o))[(idx)]))(o))

extern void func_02035f58(void *o);
extern void func_ov009_021ad6ac(uint8_t *p, uint32_t a, void *o);
extern uint32_t func_ov009_021adbf4(uint8_t *p);
extern uint32_t func_02035ff4(void *o);
extern void *func_0205681c(uint32_t n);
extern void *func_020159c8(void *o, uint32_t id);
extern void func_02005988(void *o, void *src);
extern void *func_02032d24(void *a, Pair pr, void *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *o, void *node);
extern void func_020059cc(void *o);
extern uint32_t func_ov011_021c2cdc(uint8_t *p, uint32_t x);
extern void *func_02062a30(void *owner);
extern void *func_ov011_021c02a8(uint8_t *p, Pair pr);
extern void *func_0203b720(void);
extern void *func_0203b688(void);
extern void *func_ov011_021c2828(uint8_t *p, Pair pr, uint32_t c);
extern void func_02035fd0(void *o);
extern void *data_020b8e44;
extern Pair data_ov011_021cb1bc;
extern Pair data_ov011_021cb1c4;

void func_ov011_021c26a0(uint8_t *p, uint32_t x)
{
    uint8_t ob[0x60];
    uint8_t oa[0x0c];
    uint8_t oc[0x0c];
    Pair pa;
    Pair pb;
    void *sp8;
    void *r4v;
    void *r7;
    void *ret;
    uint32_t flag;

    func_02035f58(ob);
    func_ov009_021ad6ac(p, x, ob);
    if (func_ov009_021adbf4(p) <= 1 && func_02035ff4(ob) != 0) {
        VCALL(*(void **)(p + 0x17c), 11);
        flag = 0;
        r7 = func_0205681c(0xb0);
        if (r7 != 0) {
            void *s = func_020159c8(data_020b8e44, 0x186);
            func_02005988(oa, s);
            pa.a = 0x80;
            pa.b = 0x60;
            flag = 1;
            r7 = func_02032d24(r7, pa, oa, 4, 0);
        }
        func_02056bc0(p + 0x14, r7);
        if (flag) {
            func_020059cc(oa);
        }
        ret = func_02062a30(*(void **)(p + 0x17c));
    } else if (func_ov011_021c2cdc(p, x) == 0) {
        VCALL(*(void **)(p + 0x17c), 11);
        flag = 0;
        r7 = func_0205681c(0xb0);
        if (r7 != 0) {
            void *s = func_020159c8(data_020b8e44, 0x187);
            func_02005988(oc, s);
            pb.a = 0x80;
            pb.b = 0x60;
            flag = 1;
            r7 = func_02032d24(r7, pb, oc, 4, 0);
        }
        func_02056bc0(p + 0x14, r7);
        if (flag) {
            func_020059cc(oc);
        }
        ret = func_02062a30(*(void **)(p + 0x17c));
    } else {
        void *o = *(void **)(p + 0x2b4);
        if (o != 0) {
            VCALL(o, 11);
            sp8 = func_ov011_021c02a8(p, data_ov011_021cb1bc);
            r4v = func_0203b720();
            r7 = func_0203b688();
            func_02056bc0(r7, r4v);
            func_02056bc0(r7, sp8);
            func_02056bc0(p + 0x14, r7);
        }
        VCALL(*(void **)(p + 0x17c), 11);
        ret = func_ov011_021c2828(p, data_ov011_021cb1c4, x);
    }
    func_02056bc0(p + 0x14, ret);
    func_02035fd0(ob);
}
