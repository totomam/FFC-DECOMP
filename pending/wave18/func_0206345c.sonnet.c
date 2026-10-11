#include "ffc/types.h"
extern void func_0208763c(void *obj);
extern void func_02087678(void *obj);
extern uint8_t data_0213e14c[];
typedef struct { uint8_t pad[0x34]; uint32_t counter; } Obj;
void func_0206345c(Obj *p)
{
    uint32_t l[2];
    func_0208763c(data_0213e14c);
    p->counter++;
    func_02087678(data_0213e14c);
    if (p == 0) { func_0208763c(l); }
}
