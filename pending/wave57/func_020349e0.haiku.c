#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint8_t g;
} S;

extern uint32_t data_020ae3b0[];
extern uint32_t data_020ae3c0[];
extern uint32_t data_021394fc[];
extern uint32_t data_020ae394[];
extern uint32_t data_020ae3a0[];

extern void func_02056c9c(void *obj, uint32_t v);
extern void *func_0203b77c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0206133c(void *object);
extern void *func_0203b81c(void);
extern void func_0205f818(void *obj, uint32_t v);
extern void *func_0203ba60(void *o, uint32_t x, uint32_t y, void *z, uint32_t flag);
extern void *func_0203b9cc(uint32_t x, uint32_t y, void *z, uint32_t flag);
extern void *func_0203b884(void *r, void *obj, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);

void *func_020349e0(void *this_, S s0)
{
    S *sp_ = &s0;
    uint8_t *self = (uint8_t *)this_;
    void *obj;
    void *r;
    void *tmp;
    uint32_t i;

    func_02056c9c(this_, 0);
    *(uint32_t **)self = data_020ae3b0;
    *(uint32_t *)(self + 0xc8) = sp_->a;
    *(uint32_t *)(self + 0xcc) = sp_->b;
    *(uint32_t *)(self + 0xd0) = sp_->c;
    *(uint32_t *)(self + 0xd4) = sp_->d;
    *(uint32_t *)(self + 0xd8) = 0;
    *(uint32_t *)(self + 0xdc) = 0;
    *(uint32_t *)(self + 0xe0) = 0;
    *(uint32_t *)(self + 0xe4) = sp_->f;
    *(uint8_t *)(self + 0x80) = sp_->g;
    *(void **)(self + 0x84) = func_0203b77c(data_020ae3c0, 0, 0, 0);
    func_0206133c(this_);

    if (sp_->e == 0) {
        if (sp_->f != 0) {
            *(void **)(self + 0x88) = func_0203b81c();
            func_0205f818(*(void **)(self + 0x88), 7);
        } else {
            sp_->e = 1;
        }
    }

    for (i = 0; i < sp_->f; i++) {
        if (!(data_021394fc[0] & 1)) {
            data_020ae394[3] = 0x40;
            data_020ae394[4] = 0x20;
            data_021394fc[0] |= 1;
        }
        if (sp_->e == 0) {
            obj = *(void **)(self + 0x84);
            tmp = (*(void *(**)(void *))(((uint32_t **)(*(uint32_t **)obj))[8]))(obj);
            r = func_0203ba60(*(void **)(self + 0x88), data_020ae3a0[0], data_020ae3a0[1], tmp, 1);
        } else {
            obj = *(void **)(self + 0x84);
            tmp = (*(void *(**)(void *))(((uint32_t **)(*(uint32_t **)obj))[8]))(obj);
            r = func_0203b9cc(data_020ae3a0[0], data_020ae3a0[1], tmp, 1);
        }
        r = func_0203b884(r, obj, sp_->c, sp_->d);
        *(void **)(self + 0x8c + i * 4) = r;
        (*(void (**)(void *, uint32_t))(((uint32_t **)(*(uint32_t **)r))[8]))(r, 0);
        func_02056bc0(self + 0x48, *(void **)(self + 0x8c + i * 4));
    }

    if (sp_->e == 0) {
        func_02056bc0(self + 0x48, *(void **)(self + 0x88));
    }
    return this_;
}
