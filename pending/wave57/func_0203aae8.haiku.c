#include "ffc/types.h"

extern void func_02036750(void *buf);
extern void func_0201f1f0(void *a, void *b, void *c);
extern void *func_020367b8(void *object);
extern void func_020367a8(void *object);
extern void func_02056c4c(void *p);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void *func_0203c2e4(void);
extern void func_0205947c(void *p, int v);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203bf28(int a, int b, int c, int d, int e, int f);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void func_0204f550(void *p);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern void *func_0203c23c(void);
extern void func_02060e80(void *object);
extern void *func_0203c250(void);
extern void func_ov011_021bd290(void *p, int v);
extern void func_0203abd0(void *a, void *b, void *c);

extern void *data_020b93b8;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_020aea80;
extern void *data_0213df18;

void func_0203aae8(void *p)
{
    uint8_t buf[0x58];
    uint8_t *q = (uint8_t *)p;
    uint32_t r5;

    func_02036750(buf);
    func_0201f1f0(data_020b93b8, *(void **)(q + 0x8c), buf);
    if (*(uint16_t *)func_020367b8(buf) == 0) {
        Pair v = data_020aea80;
        *(Pair *)(q + 0x80) = v;
        func_020367a8(buf);
        return;
    }
    func_02056c4c(*(void **)(q + 0x90));
    func_0203be8c();
    func_0203bea0();
    func_0203bed8(5, 0, 3, 1, 1, 1);
    func_0205947c(func_0203c2e4(), 1);
    func_0203c33c();
    func_0203c264();
    r5 = 0;
    func_0203bf28(5, 2, 4, 1, r5, r5);
    func_0203c354();
    func_0203c270();
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();
    func_02060e80(func_0203c23c());
    func_02060e80(func_0203c250());
    r5 = *(uint32_t *)(q + 0x8c);
    func_ov011_021bd290(q + 0x98, 0);
    func_0203abd0(q, (void *)r5, q + 0x98);
    func_020367a8(buf);
}
