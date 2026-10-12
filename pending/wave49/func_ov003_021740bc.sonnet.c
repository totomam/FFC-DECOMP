#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    void *a;
    uint32_t b;
    uint8_t flag;
} Ref;

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern uint32_t func_02043f78(uint32_t v);
extern void func_02017060(Ref *out, uint32_t v);
extern void *func_02052d90(void *a, uint32_t b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(Ref *r);
extern uint32_t func_ov003_02174264(uint32_t a, uint32_t b);
extern void func_02056bc0(void *obj, uint32_t node);
extern uint32_t func_ov003_0217426c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_0201c9ac(uint32_t h, uint32_t id);
extern void func_0201c220(uint32_t h, uint32_t id, uint32_t v);
extern void func_02017134(Ref *out, uint32_t v);
extern uint32_t func_0201bf6c(uint32_t h, uint32_t id);
extern void func_ov003_02174e74(void *p, uint32_t mode);

void func_ov003_021740bc(uint8_t *p)
{
    int flag;
    uint8_t *ent;
    int cnt;
    Ref l2;
    Ref l1;
    Ref l3;
    uint8_t *r;
    uint32_t h;
    uint32_t r7;
    int i;
    Ref *q;

    r7 = func_02043f78(*(uint32_t *)(p + 0x80));
    q = &l1;
    func_02017060(q, data_020b8e44);
    r = func_02052d90(q->a, q->b);
    h = *(uint16_t *)(r + 0x14);
    if (q->a != 0) {
        if (q->flag != 0) {
            func_02052d3c(q->a, q->b);
        }
        func_02052c04(q->a);
    }
    func_02053290(q);
    func_02056bc0(p + 0x14, func_ov003_02174264(h, 0));

    q = &l2;
    func_02017060(q, data_020b8e44);
    r = func_02052d90(q->a, q->b);
    h = *(uint16_t *)(r + 0xc);
    if (q->a != 0) {
        if (q->flag != 0) {
            func_02052d3c(q->a, q->b);
        }
        func_02052c04(q->a);
    }
    func_02053290(q);

    func_02056bc0(p + 0x14, func_ov003_0217426c(*(uint32_t *)(p + 0x80), r7, h, 0, 0));
    if (*(int *)(p + 0x84) != flag - 1) {
        flag = 1;
    }

    r7 = func_0201c9ac(data_020b93b8, 0x4b);
    func_0201c220(data_020b93b8, 0x4b, 0);
    *(uint8_t *)(p + 0x98) = 0;

    func_02017134(&l3, data_020b8e44);
    r = func_02052d90(l3.a, l3.b);
    cnt = *(int *)(r + 8);
    if (cnt > 0) {
        for (i = 0; i < cnt; i++) {
            r = func_02052d90(l3.a, l3.b);
            ent = r + *(uint32_t *)(r + 0xc) + i * 8;
            h = *(uint16_t *)(ent + 6);
            if (h != 0) {
                if (func_0201bf6c(data_020b93b8, h) != 0) {
                    *(uint8_t *)(p + 0x98) = 1;
                    flag = 1;
                }
                if (h == r7) {
                    *(int *)(p + 0x88) = *(int16_t *)ent;
                    *(int *)(p + 0x94) = *(int16_t *)(ent + 4);
                    break;
                }
            }
        }
    }

    if (*(uint8_t *)(p + 0x98) == 0) {
        r7 = 0;
    }
    if (r7 != 0) {
        func_ov003_02174e74(p, 5);
    } else if (flag != 0) {
        func_ov003_02174e74(p, 1);
    } else {
        func_ov003_02174e74(p, 3);
    }

    q = &l3;
    if (q->a != 0) {
        if (q->flag != 0) {
            func_02052d3c(q->a, q->b);
        }
        func_02052c04(q->a);
    }
    func_02053290(q);
}
