#include "ffc/types.h"

extern char data_020b1fd8[];
extern char data_020b2034[];
extern void func_02052538(void *);
extern void func_02062868(void *);
extern void func_02056844(void *);

typedef struct Sub {
    void (**vtbl)(void);
} Sub;

typedef struct Self {
    void *vtbl;
    uint8_t pad[0x18];
    Sub *sub1;
    Sub *sub2;
} Self;

void *func_0206e97c(void *p)
{
    Self *self = (Self *)p;
    self->vtbl = data_020b1fd8;
    if (self->sub1 != 0) {
        ((void (*)(Sub *))self->sub1->vtbl[1])(self->sub1);
    }
    if (self->sub2 != 0) {
        ((void (*)(Sub *))self->sub2->vtbl[1])(self->sub2);
    }
    func_02052538(data_020b2034);
    func_02062868(self);
    func_02056844(self);
    return self;
}
