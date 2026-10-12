#include "ffc/types.h"

typedef struct { uint32_t w0; uint32_t w1; } Pair;

typedef struct Obj {
    uint8_t a[0x14];
    uint8_t n14[0x6c];
    Pair pair80;
    uint8_t c88[4];
    uint32_t counter;
    void *p90;
    uint8_t d94[4];
    uint8_t sub98[0x40];
} Obj;

extern uint32_t func_0203c23c(void);
extern void func_02060e80(void *object);
extern uint32_t func_0203c250(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov012_021ce3ec(void *mem, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void func_02056c4c(void *p);
extern void func_ov011_021bd290(void *object, uint32_t v);
extern void func_ov011_021bd2c4(void *object, uint32_t v);
extern void func_0203abd0(void *object, uint32_t v, void *p);
extern void func_02036750(void *p);
extern void func_0201f1f0(void *a, uint32_t b, void *c);
extern void func_0200a630(void *a, void *b);
extern void func_02036840(void *a, void *b);
extern void *func_0200a678(void *object);
extern void func_0201f1a8(void *a, uint32_t b, void *c);
extern void func_020367a8(void *p);

extern Pair data_020aea64;
extern Pair data_020aea6c;
extern void *data_020b93b8;
extern Pair data_020aea7c;
extern Pair data_020aea74;

void func_0203a8b8(Obj *o)
{

    void *node;

    if (o->counter < 100) {
        o->pair80 = data_020aea64;
        return;
    }
    if (o->counter < 200) {
        o->counter -= 100;
        func_02060e80(func_0203c23c());
        func_02060e80(func_0203c250());
        node = func_0205681c(0x358);
        if (node) {
            node = func_ov012_021ce3ec(node, 4, o->counter, 1, 0, 0, 0);
        }
        func_02056bc0(o->n14, node);
        o->pair80 = data_020aea6c;
        return;
    }
    if (o->counter < 300) {
        uint32_t v;
        func_02056c4c(o->p90);
        v = o->counter - 200;
        o->counter = v;
        func_ov011_021bd290(o->sub98, 0);
        func_ov011_021bd2c4(o->sub98, 0);
        func_0203abd0(o, v, o->sub98);
        return;
    }
    {
        uint8_t buf1[0x58];
        uint8_t buf2[0xc];
        void *b1 = buf1;
        o->counter -= 300;
        func_02036750(b1);
        func_0201f1f0(data_020b93b8, o->counter, b1);
        func_0200a630(buf2, &data_020aea7c);
        func_02036840(b1, buf2);
        func_0200a678(buf2);
        func_0201f1a8(data_020b93b8, o->counter, b1);
        func_02060e80(func_0203c23c());
        func_02060e80(func_0203c250());
        node = func_0205681c(0x358);
        if (node) {
            node = func_ov012_021ce3ec(node, 4, o->counter, 1, 0, 0, 0);
        }
        func_02056bc0(o->n14, node);
        o->pair80 = data_020aea74;
        func_020367a8(buf1);
    }
}
