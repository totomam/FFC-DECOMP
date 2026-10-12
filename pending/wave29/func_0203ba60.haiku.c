#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
} S4;

extern void *func_0205681c(uint32_t size);
extern void func_02067220(void *obj, uint32_t x, void *self, S4 s);
extern char data_020aeb2c[];

void *func_0203ba60(uint32_t *self, S4 s)
{
    void *obj = func_0205681c(0x50);
    if (obj) {
        func_02067220(obj, self[5], self, s);
        *(void **)obj = (void *)data_020aeb2c;
    }
    return obj;
}
