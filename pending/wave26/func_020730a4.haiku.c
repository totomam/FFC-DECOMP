#include "ffc/types.h"

extern void func_02056858(void *p);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02092878(void *p, const uint8_t *text);

typedef struct {
    uint32_t pad[2];
    void *buf;
} Obj;

void func_020730a4(Obj *self, const uint8_t *text)
{
    
    uint32_t n;
    if (self->buf != 0) {
        func_02056858(self->buf);
        self->buf = 0;
    }
    n = func_02092864(text) + 1;

    self->buf = func_02056830((uint8_t)n * 1);
    func_02092878(self->buf, text);
}
