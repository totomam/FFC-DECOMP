#include "ffc/types.h"

extern void func_0206bf5c(uint32_t *buf);
extern uint32_t func_0206c184(uint32_t *first, uint32_t second);
extern void *func_0206c030(void *object);

struct T { uint8_t pad[0xf0]; uint32_t *arr; int32_t count; };
struct S {
    uint8_t pad[0xf0];
    uint32_t *arr;
    uint32_t count;
};

void func_ov007_021bba68(struct S *self) {
    uint32_t buf[2];
    uint32_t i;
    func_0206bf5c(buf);
    for (i = 0; i < self->count; i++) {
        uint32_t j = func_0206c184(buf, ((struct T *)self)->count);
        uint32_t *p = self->arr; uint32_t a = p[i];
        uint32_t b = p[j];
        p[i] = b;
        p[j] = a;
    }
    func_0206c030(buf);
}
