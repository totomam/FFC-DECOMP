#include "ffc/types.h"

typedef void (*FnPtr)(void *);

typedef struct { FnPtr fn[5]; } FnTable;
typedef struct { uint8_t b[5]; } Bytes5;
typedef struct { uint32_t idx; Bytes5 sel; uint8_t pad[3]; FnTable tbl; } Frame;

typedef struct { uint8_t body[12]; } Body;
typedef struct { void *w0; void *w4; Body body; uint8_t flag; } Obj;
typedef struct { uint8_t pad[4]; uint16_t h4; } Ctl;

extern FnTable data_ov006_021b9534;
extern Bytes5 data_ov006_021b8630;
extern Obj *data_ov006_021bc784;
extern uint8_t data_ov006_021b955c[];

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_ov006_021a6508(void *p, uint32_t x);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void *func_02084b2c(void *dst, int c, uint32_t n);
extern void func_ov006_021aa71c(void);
extern void func_ov006_021a3e78(uint32_t x);
extern void func_ov006_021a3aa0(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021a3bb0(uint32_t x);
extern void *func_ov006_021b42f8(uint32_t a, uint32_t b);
extern void *func_ov006_021b3e6c(uint32_t a, uint32_t b);
extern void func_ov006_021aac00(void);
extern void func_ov006_021aab88(void);
extern void func_ov006_021a64c8(void *f);
extern void func_ov006_021aa79c(void);

void func_ov006_021aa62c(void)
{
    Frame f;
    Obj *obj;
    Ctl *c;

    f.tbl = data_ov006_021b9534;
    f.sel = data_ov006_021b8630;
    data_ov006_021bc784 = func_ov006_021b49e4(0x18, 4);
    func_ov006_021a6508(&f, 0);
    f.tbl.fn[f.idx]((void *)&data_ov006_021bc784->body);

    obj = data_ov006_021bc784;
    if (func_02090410((const uint8_t *)&obj->body, data_ov006_021b955c, 3) != 0) {
        obj->flag = 3;
    } else {
        func_02084b2c(&obj->body, 0, 12);
        data_ov006_021bc784->flag = 0;
    }

    func_ov006_021aa71c();
    func_ov006_021a3e78(f.idx + 0xb);
    func_ov006_021a3aa0(f.sel.b[f.idx], 0xffffffff, 0);
    func_ov006_021a3bb0(2);

    data_ov006_021bc784->w0 = func_ov006_021b42f8(0, 0);
    data_ov006_021bc784->w4 = func_ov006_021b3e6c(0, 0x3f);
    c = data_ov006_021bc784->w4;
    c->h4 = (c->h4 & 0xfffff3ff) | (3 << 10);

    func_ov006_021aac00();
    func_ov006_021aab88();
    func_ov006_021a64c8(func_ov006_021aa79c);
}
