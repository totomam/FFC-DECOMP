#include "ffc/types.h"

extern void func_02056c9c(void *object, uint32_t arg);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_0203b84c(uint32_t a, uint32_t b);
extern void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02015a38(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uintptr_t func_020159f8(void *obj);
extern void *func_0203ba60(void *a, uint32_t b, uint32_t c, uintptr_t d, uint32_t e);
extern void *func_0203b878(void *a, void *b);
extern uintptr_t func_0203b67c(void);
extern void func_02056bc0(void *object, void *node);

extern char data_ov003_0217a4b4[];
extern void *data_0213df18;
extern uint32_t data_ov003_0217a424[];
extern void *data_020b8e44;
extern uint32_t data_ov003_0217a434[];

typedef void (*VFn)(void *);

#define FIELD(p, off, T) (*(T *)((uint8_t *)(p) + (off)))
#define VCALL28(o) (((VFn)(((void **)(*(void **)(o)))[10]))(o))

void *func_ov003_02162c9c(void *self, uint32_t param)
{
    void *obj;
    void *tmp;
    void *p;
    uint32_t flag;
    void *q;
    void *o8c;

    func_02056c9c(self, 0);
    FIELD(self, 0, void *) = data_ov003_0217a4b4;
    FIELD(self, 0x80, uint32_t) = param;
    FIELD(self, 0x88, uint32_t) = 0;
    FIELD(self, 0x9c, uint32_t) = 0;
    FIELD(self, 0xa0, uint8_t) = 0;

    p = func_0203b84c(func_0204f7ec(data_0213df18), 0x10);
    obj = func_0203b95c(data_ov003_0217a424[3], p, 0, 1);
    FIELD(self, 0x8c, void *) = obj;
    VCALL28(obj);

    flag = 1;
    FIELD(self, 0x98, uint32_t) = func_02015a38(data_020b8e44, 0, 1, 10);
    obj = (void *)func_020159f8(data_020b8e44);
    flag = 1;
    tmp = func_0203ba60(p, data_ov003_0217a434[0], data_ov003_0217a434[1], (uintptr_t)obj, flag);
    tmp = func_0203b878(tmp, FIELD(self, 0x98, void *));
    FIELD(self, 0x90, void *) = tmp;
    VCALL28(tmp);

    FIELD(self, 0x94, uintptr_t) = func_0203b67c();

    q = FIELD(self, 0x90, void *);
    o8c = FIELD(self, 0x8c, void *);
    func_02056bc0((uint8_t *)self + 0x48, (void *)FIELD(self, 0x94, uintptr_t));
    func_02056bc0((uint8_t *)self + 0x48, o8c);
    func_02056bc0((uint8_t *)self + 0x48, q);
    func_02056bc0((uint8_t *)self + 0x48, p);
    return self;
}
