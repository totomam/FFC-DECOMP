#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad[0x20];
    void *field20;
} Obj;

extern Obj *data_0213df20;
extern void func_0206047c(void *o);
extern void func_02060548(void *o, uint32_t v);
extern void func_0206056c(void *o, uint32_t v);
extern void func_02060564(void *o, uint32_t v, uint32_t w);
extern void func_02060574(void *o, uint32_t v);
extern void func_02060584(void *o, uint32_t v);

void func_ov011_021c3158(uint32_t *p)
{
    void *o = data_0213df20->field20;
    func_0206047c(o);
    func_02060548(o, 3);
    func_0206056c(o, 8);
    func_02060564(o, 0x10, 0);
    func_02060574(o, 0x10);
    func_02060584(o, 0x3f);
    p[3] = (p[3] & ~0xffu) | 2;
}
