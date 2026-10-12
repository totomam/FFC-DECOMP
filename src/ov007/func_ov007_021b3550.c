#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *data_020b93b8;
extern void *data_020b8e44;
extern Pair data_ov007_021c6324;
extern Pair data_ov007_021c632c;
extern Pair data_ov007_021c6334;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t off);
extern void func_02005988(void *tmp, void *v);
extern void *func_02032d24(void *obj, Pair v, void *tmp, uint32_t c, uint32_t d);
extern void *func_ov001_0218dde0(void *self, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern int func_ov007_021ae928(void);
extern void *func_ov007_021b4c3c(void *p, void *self, uint32_t v);

void func_ov007_021b3550(uint8_t *self)
{
    void *obj;
    int flag;

    if (*(uint32_t *)((uint8_t *)data_020b93b8 + 0x1d0) != 0) {
        Pair pr;
        uint32_t tmp[3];
        flag = 0;
        obj = func_0205681c(0xb0);
        if (obj != 0) {
            void *t = func_020159c8(data_020b8e44, 0x14c);
            func_02005988(tmp, t);
            pr.a = 0x80;
            pr.b = 0x60;
            flag = 1;
            obj = func_02032d24(obj, pr, tmp, 4, 0);
        }
        func_02056bc0(func_ov001_0218dde0(self, 2), obj);
        if (flag) {
            func_020059cc(tmp);
        }
        *(Pair *)(self + 0xb0) = data_ov007_021c6324;
        return;
    }

    if (func_ov007_021ae928() == 1) {
        Pair pr;
        uint32_t tmp[3];
        flag = 0;
        obj = func_0205681c(0xb0);
        if (obj != 0) {
            void *t = func_020159c8(data_020b8e44, 0x10a);
            func_02005988(tmp, t);
            pr.a = 0x80;
            pr.b = 0x60;
            flag = 1;
            obj = func_02032d24(obj, pr, tmp, 4, 0);
        }
        func_02056bc0(func_ov001_0218dde0(self, 2), obj);
        if (flag) {
            func_020059cc(tmp);
        }
        *(Pair *)(self + 0xb0) = data_ov007_021c632c;
        return;
    }

    {
        void *p = func_0205681c(0x66c);
        void *r = p;
        if (p != 0) {
            r = func_ov007_021b4c3c(p, self, *(uint32_t *)(self + 0xb8));
        }
        func_02056bc0(self + 0x14, r);
        *(Pair *)(self + 0xb0) = data_ov007_021c6334;
    }
}
