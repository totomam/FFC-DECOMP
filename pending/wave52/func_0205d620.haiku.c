#include "ffc/types.h"

extern void func_02056858(void *a);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

typedef struct Obj {
    uint32_t pad0;
    void *p4;
    void *p8;
    uint8_t f0c;
    uint8_t pad0d[3];
    void *p10;
    void *p14;
    uint8_t f18;
    uint8_t pad19[3];
    void *p1c;
    void *p20;
    uint8_t f24;
    uint8_t pad25[3];
    void *p28;
    void *p2c;
    uint8_t f30;
    uint8_t pad31[3];
    void *p34;
} Obj;

void *func_0205d620(Obj *p)
{
    if (p->p34 != 0) {
        func_02056858(p->p34);
    }
    if (p->p28 != 0) {
        if (p->f30 != 0) {
            func_02052d3c(p->p28, p->p2c);
        }
        func_02052c04(p->p28);
    }
    if (p->p1c != 0) {
        if (p->f24 != 0) {
            func_02052d3c(p->p1c, p->p20);
        }
        func_02052c04(p->p1c);
    }
    if (p->p10 != 0) {
        if (p->f18 != 0) {
            func_02052d3c(p->p10, p->p14);
        }
        func_02052c04(p->p10);
    }
    if (p->p4 != 0) {
        if (p->f0c != 0) {
            func_02052d3c(p->p4, p->p8);
        }
        func_02052c04(p->p4);
    }
    func_02053290(p);
    return p;
}
