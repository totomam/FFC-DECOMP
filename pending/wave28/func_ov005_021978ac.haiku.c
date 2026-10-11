#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x20];
    void *obj;
} OvCtx;

extern OvCtx *data_0213df20;
extern void func_0206047c(void *p);
extern void func_02060548(void *p, int v);
extern void func_0206056c(void *p, int v);
extern void func_02060564(void *p, int a, int b);
extern void func_02060574(void *p, int v);
extern void func_02060584(void *p, int v);

void func_ov005_021978ac(void)
{
    void *o = data_0213df20->obj;
    func_0206047c(o);
    func_02060548(o, 3);
    func_0206056c(o, 8);
    func_02060564(o, 0x10, 0);
    func_02060574(o, 0x10);
    func_02060584(o, 0x3f);
}
