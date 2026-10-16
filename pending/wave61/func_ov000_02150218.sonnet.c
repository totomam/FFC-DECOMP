#include "ffc/types.h"
typedef struct { uint32_t pad[10]; void (*fn)(void); } S;
extern S data_ov000_0216e21c;
void func_ov000_02150218(void)
{
    void (*f)(void) = data_ov000_0216e21c.fn;
    if (f != 0) f();
}
