#include "ffc/types.h"

#define FIELD(p, off, T) (*(T *)((uint8_t *)(p) + (off)))

extern void func_02056c9c(void *o, uint32_t x);
extern void *func_0203b77c(void *d, uint32_t a, uint32_t b, uint32_t c);
extern void func_0206133c(void *o);
extern void *func_0203b81c(uint32_t v);
extern void func_0205f818(void *o, uint32_t v);
extern void *func_0203ba60(void *a, uint32_t b, uint32_t c, void *d, uint32_t e);
extern void *func_0203b884(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *o, void *n);
extern char data_020ae3b0[];
extern char data_020ae3c0[];
extern uint32_t data_021394fc[];
extern uint32_t data_020ae394[];
extern uint32_t data_020ae398[];

void *func_020348a4(void *self, uint32_t a, uint32_t b, uint32_t c, ...)
{
    uint32_t i;
    void *obj;
    void *r6;
    void *elem;
    void *p48;
    uint32_t zero;

    func_02056c9c(self, 0);
    *(void **)self = data_020ae3b0;
    FIELD(self, 0xc8, uint32_t) = *(uint32_t *)&a;
    FIELD(self, 0xcc, uint32_t) = *(uint32_t *)&b;
    FIELD(self, 0xd0, uint32_t) = *(uint32_t *)&c;
    FIELD(self, 0xd4, uint32_t) = ((uint32_t *)&c)[1];
    FIELD(self, 0xd8, uint32_t) = 0;
    FIELD(self, 0xdc, uint32_t) = 0;
    FIELD(self, 0xe0, uint32_t) = 0;
    FIELD(self, 0xe4, uint32_t) = 0xf;
    FIELD(self, 0x80, uint8_t) = ((uint8_t *)&c)[8];

    FIELD(self, 0x84, void *) = func_0203b77c(data_020ae3c0, 0, 0, 0);
    func_0206133c(self);
    FIELD(self, 0x88, void *) = func_0203b81c(FIELD(self, 0xe4, uint32_t));
    func_0205f818(FIELD(self, 0x88, void *), 7);
    p48 = (uint8_t *)self + 0x48;
    zero = 0;

    if (!(data_021394fc[1] & 1)) {
        data_020ae394[1] = 0x40;
        data_020ae394[2] = 0x20;
        data_021394fc[1] |= 1;
    }

    obj = FIELD(self, 0x84, void *);
    for (i = 0; i < 16; i++) {
        r6 = ((void *(*)(void *))((void **)*(void **)obj)[8])(obj);
        elem = func_0203ba60(FIELD(self, 0x88, void *), data_020ae398[0], data_020ae398[1], r6, 1);
        elem = func_0203b884(elem, obj, *(uint32_t *)&c, ((uint32_t *)&c)[1], zero);
        FIELD(self, 0x8c + i * 4, void *) = elem;
        ((void (*)(void *, uint32_t))((void **)*(void **)elem)[8])(elem, 0);
        func_02056bc0(p48, elem);
    }
    func_02056bc0(p48, FIELD(self, 0x88, void *));
    return self;
}
