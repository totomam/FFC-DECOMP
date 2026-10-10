#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;

extern void func_02062930(void *self, S s, void *obj);
extern void *func_020095b8(void *obj, void *p);
extern void func_0205d508(void *obj, void *p, uint32_t z);
extern void *func_020059cc(void *object);
extern void func_0205df08(void *self, void *p2, void *p3, uint8_t p4);
extern char data_020b0fd8[];
extern uint32_t data_0213df20;

typedef struct {
    S s;
    uint32_t obj[3];
} L;

void *func_0205dc80(void *self, void *p1, void *p2, void *p3, uint8_t p4)
{
    L l;

    l.s.a = 5;
    l.s.b = 5;
    func_02062930(self, l.s, l.obj);
    *(void **)self = data_020b0fd8;
    func_020095b8(l.obj, p1);
    func_0205d508((char *)self + 0x34, l.obj, 0);
    func_020059cc(l.obj);
    *(uint32_t *)((char *)self + 0x1c) = data_0213df20;
    func_0205df08(self, p2, p3, p4);
    return self;
}
