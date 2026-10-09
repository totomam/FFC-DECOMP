#include "ffc/types.h"

typedef struct Vt {
    char pad[0x38];
    void (*f38)(void *self, int a, int b);
} Vt;

extern int func_ov005_02198718(void *p);
extern void func_02056c4c(void *p);
extern void *func_020655dc(void *p, int a, int b);
extern void *func_020655b8(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(int x);

void func_ov005_02198c4c(uint8_t *obj)
{
    if (func_ov005_02198718(*(void **)(obj + 0x94))) {
        void *p = *(void **)(obj + 0x98);
        Vt *vt = *(Vt **)p;
        vt->f38(p, 2, 1);
        func_02056c4c(obj + 0x14);
        void *r4 = func_020655dc(*(void **)(obj + 0x98), 1, 0);
        void *t = func_020655b8(*(void **)(obj + 0x98));
        uint8_t *q = obj + 0x14;
        func_02056bc0(q, t);
        func_02056bc0(q, r4);
        func_02021338(0xb6);
    }
}
