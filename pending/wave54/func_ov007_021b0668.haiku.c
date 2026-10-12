#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint8_t buf[12];
} Obj12;

extern int func_ov007_021ae604(void *self);
extern int func_ov007_021ae928(void *self);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *out, void *x);
extern void *func_02032d24(void *obj, Pair v, void *c, uint32_t d, uint32_t e);
extern void *func_ov001_0218dde0(void *self, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void func_020059cc(void *object);
extern void *func_ov007_021b1e30(void *a, void *b, void *c, uint32_t d);
extern void *data_020b8e44;
extern Pair data_ov007_021c5b48;
extern Pair data_ov007_021c5b50;
extern Pair data_ov007_021c5b58;

void func_ov007_021b0668(uint8_t *self) {
    uint32_t zero;
    int flag;
    void *node;

    int ret = func_ov007_021ae604(self);
    if (ret == 0) {
        Pair args;
        Obj12 name;
        zero = 0;
        flag = 0;
        node = func_0205681c(0xb0);
        if (node != 0) {
            func_02005988(&name, func_020159c8(data_020b8e44, 0x43));
            args.a = 0x80;
            args.b = 0x60;
            flag = 1;
            node = func_02032d24(node, args, &name, 4, zero);
        }
        func_02056bc0(func_ov001_0218dde0(self, 2), node);
        if (flag != 0) {
            func_020059cc(&name);
        }
        *(Pair *)(self + 0xb0) = data_ov007_021c5b48;
        return;
    }

    if (func_ov007_021ae928(ret) == 1) {
        Pair args2;
        Obj12 name2;
        flag = 0;
        node = func_0205681c(0xb0);
        if (node != 0) {
            func_02005988(&name2, func_020159c8(data_020b8e44, 0xb0 + 0x5a));
            args2.a = 0x80;
            args2.b = 0x60;
            flag = 1;
            node = func_02032d24(node, args2, &name2, 4, 0);
        }
        func_02056bc0(func_ov001_0218dde0(self, 2), node);
        if (flag != 0) {
            func_020059cc(&name2);
        }
        *(Pair *)(self + 0xb0) = data_ov007_021c5b50;
        return;
    }

    *(uint32_t *)(self + 0xc4) = 0;
    node = func_0205681c(0xdc);
    if (node != 0) {
        node = func_ov007_021b1e30(node, self, self + 0xc4, 1);
    }
    func_02056bc0(self + 0x14, node);
    *(Pair *)(self + 0xb0) = data_ov007_021c5b58;
}
