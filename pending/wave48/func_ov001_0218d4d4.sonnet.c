#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02037544(void *p);
extern void func_ov001_0218d7cc(void *p);
extern void *data_020b93b8;
extern int func_0201e9bc(void *x);
extern void *func_ov001_0218c414(void *p, Pair a);
extern void *func_ov001_0218dde0(void *p, int x);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203bfb8(int x);
extern void *func_0203bfa4(int x);
extern void *func_0203bf68(int x);
extern void *func_0203bf54(int x);
extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern void *func_0203c634(void *a, int b, int c, void *d, int e, int f, int g);
extern void *func_0203bfe0(int x);
extern void *func_0203bfcc(int x);
extern void *func_0203bf90(int x);
extern void *func_0203bf7c(int x);
extern Pair data_ov001_02194904;
extern Pair data_ov001_0219490c;
extern Pair data_ov001_02194914;

void func_ov001_0218d4d4(uint8_t *p)
{
    uint32_t *q;
    uint32_t x, y;
    void *node;
    void *o;
    void *r7;
    void *r6;
    void *r4;

    func_02037544(p);
    func_ov001_0218d7cc(p);
    if (func_0201e9bc(data_020b93b8)) {
        node = func_ov001_0218c414(p, data_ov001_02194904);
        o = func_ov001_0218dde0(p, 1);
        func_02056bc0(o, node);
        if (*(uint32_t *)(p + 0x66c) == 0) {
            r7 = func_0203bfb8(30);
            node = func_0203bfa4(30);
        } else {
            r7 = func_0203bf68(30);
            node = func_0203bf54(30);
        }
        r6 = func_0203b6fc();
        func_02056bc0(r6, node);
        func_02056bc0(r6, r7);
        o = func_ov001_0218dde0(p, 1);
        func_02056bc0(o, r6);
    }
    node = func_0205681c(0xe4);
    if (node != 0) {
        node = func_0203c634(node, 0, 6, p + 0xe78, 0, 0, 0);
    }
    o = func_ov001_0218dde0(p, 1);
    func_02056bc0(o, node);
    if (func_0201e9bc(data_020b93b8)) {
        if (*(uint32_t *)(p + 0x66c) == 0) {
            r7 = func_0203bfe0(30);
            node = func_0203bfcc(30);
        } else {
            r7 = func_0203bf90(30);
            node = func_0203bf7c(30);
        }
        r6 = func_0203b6fc();
        func_02056bc0(r6, node);
        func_02056bc0(r6, r7);
        o = func_ov001_0218dde0(p, 1);
        func_02056bc0(o, r6);
    } else if (*(uint32_t *)(p + 0x66c) != 0) {
        node = func_ov001_0218c414(p, data_ov001_0219490c);
        o = func_ov001_0218dde0(p, 1);
        func_02056bc0(o, node);
    }
end:
    *(Pair *)(p + 0xb0) = data_ov001_02194914;
}
