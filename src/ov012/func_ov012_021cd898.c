/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void *func_0203b6fc(void);
extern void *func_0203bf7c(int);
extern void *func_0203bf90(int);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *);
}
struct Cfg { uint8_t pad[4]; uint8_t flag; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10();
    uint8_t pad[0xf0 - 4];
    uint32_t state;
    uint8_t pad2[0x108 - 0xf4];
    Cfg *cfg;
    uint16_t padx; int16_t id;
    uint8_t pad3[0x14 - 0x10];
};
extern "C" void func_ov012_021cd898(Obj *self)
{
    if (self->state != 1) return;
    self->v10();
    self->id = -1;
    void *n = func_0203b6fc();
    func_02056bc0(n, func_0203bf7c(0x1e));
    if (self->cfg->flag != 0) func_02056bc0(n, func_0203bf90(0x1e));
    void *t = func_02056aec(self);
    char *q = (char *)self + 0x14;
    func_02056bc0(q, n);
    func_02056bc0(q, t);
}
