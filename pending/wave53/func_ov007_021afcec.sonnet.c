#include "ffc/types.h"

extern void func_02054254(void);
extern void func_020543b8(void);
extern void *func_02060634(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *object, uint32_t id);
extern void func_02005988(void *out, void *src);
typedef struct { uint32_t x, y; } P;
extern void *func_02032d24(void *obj, P p, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
typedef struct { uint8_t pad[0x20]; void *f20; } G;
extern G *data_0213df20[];
extern void *data_020b8e44;
extern uint32_t data_ov007_021c5a9c[2];

void func_ov007_021afcec(uint8_t *self) {
    struct { void *first; P args; uint32_t obj[3]; } L;
    void *r7;
    void *second;
    uint32_t n;
    int flag;
    uint8_t *list;
    uint32_t sz;

    if (*(uint32_t *)(self + 0x90) == 0) {
        func_02054254();
        func_020543b8();
    }
    n = *(uint32_t *)(self + 0x90) + 1;
    *(uint32_t *)(self + 0x90) = n;
    if (n < 0x12c) {
        return;
    }
    flag = 0;
    L.first = func_02060634(data_0213df20[0][0].f20, 8, 0, 0xa, 0, 0);
    sz = 0xb0;
    r7 = func_0205681c(sz);
    if (r7 != 0) {
        func_02005988(L.obj, func_020159c8(data_020b8e44, sz + 0xaa));
        L.args.x = 0x80;
        L.args.y = 0x60;
        flag = 1;
        r7 = func_02032d24(r7, L.args, L.obj, 4, 0);
    }
    second = func_02060634(data_0213df20[0][0].f20, 0, 8, 0xa, 0, 0);
    list = self + 0x14;
    func_02056bc0(list, second);
    func_02056bc0(list, r7);
    func_02056bc0(list, L.first);
    if (flag) {
        func_020059cc(L.obj);
    }
    *(P *)(self + 0x80) = *(P *)data_ov007_021c5a9c;
}
