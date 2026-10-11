#include "ffc/types.h"

typedef struct Obj {
    void *vt;
    uint32_t pad0[4];
    void *vt2;
    uint32_t pad1[2];
    void *arr;
} Obj;

extern char data_020b0cdc[];
extern char data_020b0cf0[];
extern void func_02054738(void *p);
extern void func_0209d06c(void *arr, uint32_t size, uint32_t count, void *fn);
extern void func_02057934(void *p);
extern void func_02056844(void *p);
extern void func_02057658(void);

Obj *func_02057aa8(Obj *p)
{
    p->vt = data_020b0cdc;
    p->vt2 = data_020b0cf0;
    func_02054738(&p->vt2);
    func_0209d06c(p->arr, 0x2c, 8, func_02057658);
    func_02057934(p);
    func_02056844(p);
    return p;
}
