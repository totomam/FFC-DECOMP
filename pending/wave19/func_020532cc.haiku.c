#include "ffc/types.h"

extern void func_020532f0(void *p);
extern void func_0201506c(void *object, void *const *source, uint32_t value);
extern void *func_02053290(void *object);

void *func_020532cc(void *object, uint32_t unused1, uint32_t unused2, uint32_t value)
{
    void *tmp;
    func_020532f0(&tmp);
    func_0201506c(object, (void *const *)&tmp, value);
    return func_02053290(&tmp);
}
