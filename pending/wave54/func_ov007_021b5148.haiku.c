#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *data_020b8e44;
extern void *data_020b93b8;
extern Pair data_ov007_021c696c;
extern Pair data_ov007_021c697c;
extern Pair data_ov007_021c6974;
extern uint8_t data_ov007_021c6984[];

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *obj, void *src);
extern void *func_02032d24(void *a, Pair b, void *d, uint32_t e, uint32_t f);
extern void *func_ov001_0218dde0(void *self, uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern uint32_t func_0201a3a0(void *object, const void *third);
extern void *func_0203bd50(Pair a, void *c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_ov007_021bd898(void *a, void *b, void *c, void *d, void *e, uint32_t f);
extern void func_0200a630(void *object, void *src);
extern void func_02051248(void *object, void *src);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0200a678(void *object);

void func_ov007_021b5148(uint8_t *self)
{
    uint32_t hbuf[2];
    Pair pb;
    Pair pa;
    uint32_t buf1c[3];
    uint32_t buf28[3];
    uint32_t buf34[3];
    uint32_t buf40[3];
    void *r7;
    void *t;
    uint32_t used = 0;

    if (*(uint32_t *)(self + 0x560) == 0) {
        goto path_b;
    }
    r7 = func_0205681c(0xb0);
    if (r7 != 0) {
        t = func_020159c8(data_020b8e44, 0x14b);
        func_02005988(buf34, t);
        pa.a = 0x80;
        pa.b = 0x60;
        r7 = func_02032d24(r7, pa, buf34, 4, 0);
        used = 1;
    }
    func_02056bc0(func_ov001_0218dde0(self, 2), r7);
    if (used) {
        func_020059cc(buf34);
    }
    *(Pair *)(self + 0xb0) = data_ov007_021c696c;
    return;

path_b:
    t = func_020159c8(data_020b8e44, 0x148);
    func_02005988(buf40, t);
    func_0201a3a0(buf40, data_ov007_021c6984);
    pb.a = 0x80;
    pb.b = 0x60;
    hbuf[0] = (uint32_t)func_0203bd50(pb, buf40, 4, 2, 0);
    func_02056bc0(func_ov001_0218dde0(self, 3), (void *)hbuf[0]);
    if (*(uint32_t *)((uint8_t *)data_020b93b8 + 0x1d0) != 0) {
        goto path_c;
    }
    self[0xb4] = 0;
    self[0xb5] = 0;
    {
        void *node = func_0205681c(0x1e0);
        if (node != 0) {
            node = func_ov007_021bd898(node, self, self + 0xc0, self + 0xb4, self + 0xb5,
                                       *(uint32_t *)(self + 0xb8));
        }
        func_02056bc0(self + 0x14, node);
    }
    *(Pair *)(self + 0xb0) = data_ov007_021c6974;
    func_020059cc(buf40);
    return;

path_c:
    {
        void *r4;
        func_0200a630(buf28, self + 0xec);
        func_02051248(buf1c, buf28);
        if (buf1c[0] & 1) {
            r4 = (void *)buf1c[2];
        } else {
            r4 = (uint8_t *)buf1c + 1;
        }
        t = func_020159c8(data_020b8e44, 0x14a);
        func_02091b10(self + 0x566, t, r4);
        func_020059cc(buf1c);
        func_0200a678(buf28);
    }
    *(Pair *)(self + 0xb0) = data_ov007_021c697c;
    func_020059cc(buf40);
    return;
}
