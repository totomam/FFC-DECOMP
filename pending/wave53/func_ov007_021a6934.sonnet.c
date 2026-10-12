#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Vec2;

extern void func_0205420c(void *self);
extern void func_02036750(void *p);
extern void func_0201f1f0(void *obj, int idx, void *p);
extern void func_0201f1a8(void *obj, int idx, void *p);
extern uint32_t func_02056aec(void *self);
extern uint32_t func_0202157c(int a, int b);
extern void *func_0203b708(uint32_t size);
extern uint32_t func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, int id);
extern void func_02005988(void *p, uint32_t v);
extern void *func_02032d24(void *obj, Vec2 pos, void *c, int d, void *e);
extern void *func_0203b6fc(void);
extern void *func_020059cc(void *object);
extern void func_020367a8(void *p);
extern void *data_020b93b8;
extern void *data_020b8e44;

void func_ov007_021a6934(uint8_t *self)
{
    uint32_t ac;
    uint32_t a8;
    Vec2 local10;
    uint32_t local18[3];
    uint32_t local24[22];
    void *r5;
    void *tmp;
    void *r6;
    uint32_t i;
    int flag;

    func_0205420c(self);
    func_02036750(local24);
    for (i = 0; i < 3; i++) {
        func_0201f1f0(data_020b93b8, i + 1, local24);
        func_0201f1a8(data_020b93b8, i + 4, local24);
    }
    **(uint32_t **)(self + 0x90) = 0;
    a8 = func_02056aec(self);
    flag = 0;
    r5 = (void *)func_0202157c(0x45, 0);
    tmp = func_0203b708(0x10);
    ac = func_0203b688();
    func_02056bc0((void *)ac, tmp);
    func_02056bc0((void *)ac, r5);

    r5 = func_0205681c(0xb0);
    if (r5 != 0) {
        uint32_t id = func_020159c8(data_020b8e44, 0x32);
        func_02005988(local18, id);
        local10.x = 0x80;
        local10.y = 0x60;
        r5 = func_02032d24(r5, local10, local18, 4, (void *)flag);
        flag = 1;
    }

    r6 = func_0203b6fc();
    func_02056bc0(r6, r5);
    func_02056bc0(r6, (void *)ac);
    func_02056bc0(self + 0x14, r6);
    func_02056bc0(self + 0x14, (void *)a8);
    if (flag) {
        func_020059cc(local18);
    }
    func_020367a8(local24);
}
