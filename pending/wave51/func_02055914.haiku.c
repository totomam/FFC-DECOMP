#include "ffc/types.h"

extern void func_0208763c(void *object);
extern void func_020553c4(uint32_t value);
extern void func_0200d5d4(void *object, void *value, uint32_t flag);
extern void func_02087678(void *object);

typedef struct {
    uint32_t f0;
    uint32_t *items;
    uint32_t count;
    uint32_t cap;
    uint32_t pad[3];
    uint32_t tail;
} Obj;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Val;

typedef struct {
    uint32_t w0;
    uint32_t *p;
    volatile uint8_t flag;
} Loc;

void func_02055914(Obj *self, Val value) {
    Loc loc;
    loc.p = &self->tail;
    loc.flag = 1;
    if (loc.flag) {
        func_0208763c(loc.p);
    }
    func_020553c4(value.a);
    if (self->count < self->cap) {
        self->items[self->count] = value.a;
        self->count++;
    } else {
        volatile uint8_t g = 0;
        func_0200d5d4(&self->items, &value, g);
    }
    if (loc.flag) {
        func_02087678(loc.p);
    }
}
