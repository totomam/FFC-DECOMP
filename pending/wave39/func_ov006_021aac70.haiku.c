#include "ffc/types.h"

typedef struct Obj {
    uint32_t w0;
    uint32_t *p4;
    uint32_t w8;
    uint32_t w12;
    uint32_t w16;
    uint8_t b14;
    uint8_t b15;
} Obj;

typedef struct Table {
    void *f[5];
} Table;

extern int func_ov006_021b1430(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021a6508(int *out, int arg);
extern void func_ov006_021aa7d4(void);
extern void func_ov006_021aab10(void);
extern Table data_ov006_021b9548;
extern Obj *data_ov006_021bc784;

void func_ov006_021aac70(void)
{
    int idx;
    Table t = data_ov006_021b9548;
    Obj *obj;

    if (func_ov006_021b1430() != 0) {
        return;
    }
    obj = data_ov006_021bc784;
    if (obj->b15 == 0) {
        uint32_t *p = obj->p4;
        *p = *p & 0xc1fffcffu;
        func_ov006_021a64c8((void *)func_ov006_021aa7d4);
        return;
    }
    func_ov006_021a6508(&idx, 0);
    ((void (*)(void *))t.f[idx])((void *)&data_ov006_021bc784->w8);
    func_ov006_021a64c8((void *)func_ov006_021aab10);
}
