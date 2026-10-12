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
extern void *func_02032d7c(void *obj, uint32_t a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern void *func_ov003_02164db0(void *p);
extern void *data_0213df18;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void *func_ov003_0216c17c(void *a, void *b) {
    uint8_t *p = (uint8_t *)b;
    void *obj;
    Pair pr;
    uint32_t buf[3];
    void *r6;
    int r4 = 0;
    void *t;
    uint32_t v3, v1;
    uint16_t type;
    uint32_t n;

    obj = func_0203b688(a);
    func_0203c250();
    func_02060e9c();
    func_0203c2d0();

    type = *(uint16_t *)p;
    n = *(uint32_t *)(p + 4);
    if (type == 0x74) {
        if (n > 1) {
            v3 = *(uint32_t *)(p + *(uint32_t *)(p + 8) + 4);
        } else {
            v3 = 0x80;
        }
        if (n > 2) {
            v1 = *(uint32_t *)(p + *(uint32_t *)(p + 8) + 8);
        } else {
            v1 = 0x90;
        }
    } else {
        if (n > 1) {
            v3 = *(uint32_t *)(p + *(uint32_t *)(p + 8) + 4);
        } else {
            v3 = 0x80;
        }
        if (n > 2) {
            v1 = *(uint32_t *)(p + *(uint32_t *)(p + 8) + 8);
        } else {
            v1 = 0x60;
        }
    }
    Pair *q = &pr;
    q->a = v3;
    q->b = v1;

    if (*(uint16_t *)p == 0x6f) {
        t = func_0205681c(0x14);
        if (t) {
            t = func_ov003_02164d40(t);
        }
        func_02056bc0(obj, t);
    }

    r6 = func_0205681c(0xb0);
    if (r6) {
        r4 = 1;
        func_0203919c(buf, *(uint32_t *)(p + *(uint32_t *)(p + 8)));
        t = (void *)func_0204f7ec(data_0213df18);
        r6 = func_02032d7c(r6, (uint32_t)t, q->a, q->b, buf, 4, 0);
    }
    if (r4) {
        func_020059cc(buf);
    }
    func_02056bc0(obj, r6);

    if (*(uint16_t *)p == 0x6f) {
        t = func_0205681c(0x14);
        if (t) {
            t = func_ov003_02164db0(t);
        }
        func_02056bc0(obj, t);
    }
    return obj;
}
