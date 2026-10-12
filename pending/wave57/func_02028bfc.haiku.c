#include "ffc/types.h"

typedef struct Ast { uint8_t pad[12]; } Ast;
typedef struct Bst { uint8_t pad[0x14]; uint8_t flag; } Bst;
typedef struct Cst { uint32_t w0; void *m4; uint32_t m8; uint8_t flag; } Cst;
typedef struct Ent { uint32_t x; uint32_t y; } Ent;
typedef struct Outer { uint8_t pad[0x14]; Ent *ents; } Outer;
typedef struct Pair { Outer *o; uint32_t idx; } Pair;

extern void func_020095b8(void *dst, void *src);
extern void func_020288c4(void *p);
extern void *func_02023e3c(void *obj);
extern void func_02028d28(void *dst, void *src);
extern void func_020059cc(void *o);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02028d14(Pair *dst, void *q, Cst *c);
extern uint32_t func_0205816c(uint32_t first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void func_02052d98(void *o, uint32_t idx, uint32_t z, void *p, uint32_t y, uint32_t w);
extern void func_020878ac(void *p, uint32_t x);
extern void func_02022e14(void *a, uint32_t b, void *c, uint32_t d);
extern void func_02022df8(void *a, uint32_t b, void *c);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *a);
extern uint32_t data_02139450;

void func_02028bfc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, void *obj)
{
    Ast A;
    Bst B;
    Pair D;
    Cst C;
    uint8_t *p;
    uint8_t *r6;
    void *h;

    func_020095b8(&A, (void *)b);
    func_020288c4(&A);
    h = func_02023e3c(obj);
    func_020095b8(&B, &A);
    func_02028d28(&C, &B);
    func_020059cc(&B);
    func_02028d14(&D, func_02052d90(C.m4, C.m8), &C);
    r6 = (uint8_t *)func_0205816c(data_02139450, D.o->ents[D.idx].y, 0, 4, 0, 0, 0);
    func_02052d98(D.o, D.idx, 0, r6, D.o->ents[D.idx].y, 0);
    p = r6 + 0xc + (*(uint32_t *)r6) * 0x1c;
    if (a == 0) {
        p += c;
    }
    func_020878ac(r6, D.o->ents[D.idx].y);
    func_02022e14(h, c + *(uint32_t *)((uint8_t *)obj + 0xd4), p, d);
    func_02022df8(h, data_02139450, r6);
    if (D.o != 0) {
        if (B.flag != 0) {
            func_02052d3c(D.o, D.idx);
        }
        func_02052c04(D.o);
    }
    if (C.m4 != 0) {
        if (C.flag != 0) {
            func_02052d3c(C.m4, C.m8);
        }
        func_02052c04(C.m4);
    }
    func_02053290(&C);
    func_020059cc(&A);
}
