#include "ffc/types.h"

extern void *func_02056b10(void *owner);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_0215b024(uint8_t *self)
{
    void *a = func_02056b10(*(void **)(self + 0xf8));
    void *b = func_02056b10(*(void **)(self + 0xfc));
    void *m = func_0203b6fc();
    func_02056bc0(m, b);
    func_02056bc0(m, a);
    return m;
}
