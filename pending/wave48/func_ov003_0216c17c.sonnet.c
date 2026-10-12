#include "ffc/types.h"

extern void *func_0203b688(void *a);
extern uint32_t func_0203c250(void);
extern void func_02060e9c(void);
extern void func_0203c2d0(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02164d40(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_0203919c(void *out, uint32_t v);
extern uint32_t func_0204f7ec(const void *object);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern void *func_02032d7c(void *obj, uint32_t a, Pair c, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern void *func_ov003_02164db0(void *p);
extern void *data_0213df18;


typedef struct { uint16_t type; uint32_t n; uint32_t off; } Msg;
#define W(m,k) (((uint32_t *)((uint8_t *)(m) + (m)->off))[k])

void *func_ov003_0216c17c(void *a, Msg *m) {
    void *obj;
    Pair pr;
    uint32_t buf[3];
    void *r6;
    int r4;
    uint32_t v3, v1;
    void *t;

    obj = func_0203b688(a);
    func_0203c250();
    func_02060e9c();
    func_0203c2d0();

    if (m->type == 0x74) {
        v3 = (m->n > 1) ? W(m,1) : 0x80;
        pr.b = (m->n > 2) ? W(m,2) : 0x90;
    } else {
        v3 = (m->n > 1) ? W(m,1) : 0x80;
        pr.b = (m->n > 2) ? W(m,2) : 0x60;
    }
    pr.a = v3;
    if (m->type == 0x6f) {
        t = func_0205681c(0x14);
        if (t) {
            t = func_ov003_02164d40(t);
        }
        func_02056bc0(obj, t);
    }
    r4 = 0;
    r6 = func_0205681c(0xb0);
    if (r6) {
        r4 = 1;
        func_0203919c(buf, W(m,0));
        t = (void *)func_0204f7ec(data_0213df18);
        r6 = func_02032d7c(r6, (uint32_t)t, pr, buf, 4, 0);
    }
    if (r4) {
        func_020059cc(buf);
    }
    func_02056bc0(obj, r6);
    if (m->type == 0x6f) {
        t = func_0205681c(0x14);
        if (t) {
            t = func_ov003_02164db0(t);
        }
        func_02056bc0(obj, t);
    }
    return obj;
}
