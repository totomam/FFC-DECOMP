#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov007_0219c94c(uint8_t *self);
extern uint32_t func_0203c250(void);
extern uint32_t func_020611bc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0203c23c(void);
extern void *func_0203b6fc(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02071d78(void);
extern uint32_t func_02087460(void);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *obj, uint32_t v);
extern void *func_02032d24(void *obj, Pair p, void *c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);

extern uint8_t data_ov007_021c9704;
extern void *data_020b8e44;
extern Pair data_ov007_021c2f04;

void func_ov007_0219c85c(uint8_t *self)
{
    uint32_t buf[3];
    Pair p;
    uint32_t a7;
    uint32_t a4;
    void *m;
    uint32_t id;
    int flag;
    void *alloc;

    self[0x90] = 0;
    func_ov007_0219c94c(self);
    a7 = func_020611bc(func_0203c250(), 10, 0, 0);
    a4 = func_020611bc(func_0203c23c(), 10, 0, 0);
    m = func_0203b6fc(a4);
    func_02056bc0(m, (void *)a4);
    func_02056bc0(m, (void *)a7);
    func_02056bc0(self + 0x14, m);

    if (func_02071d78() == 3 && data_ov007_021c9704 == 0) {
        id = (func_02087460() != 0) ? 0x10e : 0x10d;
        flag = 0;
        alloc = func_0205681c(0xb0);
        if (alloc != 0) {
            func_02005988(buf, (void *)func_020159c8(data_020b8e44, id));
            p.a = 0x80;
            p.b = 0x60;
            flag = 1;
            alloc = func_02032d24(alloc, p, buf, 4, 0);
        }
        func_02056bc0(self + 0x14, alloc);
        if (flag) {
            func_020059cc(buf);
        }
        data_ov007_021c9704 = 1;
    }

    {
        uint32_t x = data_ov007_021c2f04.a;
        uint32_t y = data_ov007_021c2f04.b;
        *(uint32_t *)(self + 0x80) = x;
        *(uint32_t *)(self + 0x84) = y;
    }
}
