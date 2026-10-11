/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_02056858(void *p);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02092878(void *p, const uint8_t *text);
}
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline uint32_t mul(const Num &a, uint32_t b) { return b * a.v; }
typedef struct { uint32_t pad[2]; void *buf; } Obj;
extern "C" void func_020730a4(Obj *self, const uint8_t *text)
{
    if (self->buf != 0) { func_02056858(self->buf); self->buf = 0; }
    uint32_t n = func_02092864(text) + 1;
    self->buf = func_02056830(mul(1, n));
    func_02092878(self->buf, text);
}
