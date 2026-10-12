#include "ffc/types.h"
extern void func_0208763c(void *object);
extern void func_020553c4(uint32_t value);
typedef struct { uint8_t b; } B;
extern void func_0200d5d4(void *object, void *value, B flag);
extern void func_02087678(void *object);
typedef struct { uint32_t f0; uint32_t *items; uint32_t count; uint32_t cap; uint32_t pad[3]; uint32_t tail; } Obj;
typedef struct { uint32_t a, b, c; } Val;
typedef struct { uint8_t y0; volatile uint8_t z; uint16_t y1; uint32_t *p; volatile uint8_t flag;  } Loc;
void func_02055914(Obj *self, Val value) {
    Loc loc;
    uint32_t n;
    loc.p = &self->tail;
    loc.flag = 1;
    if (loc.flag) func_0208763c(loc.p);
    func_020553c4(value.a);
    n = self->count;
    if (n < self->cap) {
        self->count = n + 1;
        self->items[self->count - 1] = value.a;
    } else {
        B bb; loc.z = 0; bb.b = loc.z;
        func_0200d5d4(&self->items, &value, bb);
    }
    if (loc.flag) func_02087678(loc.p);
}
