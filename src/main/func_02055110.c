#include "ffc/types.h"

extern void func_0208763c(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void func_02087678(void *obj);

typedef struct {
    void *obj;
    uint8_t flag;
} Loc;

void func_02055110(uint8_t *p, void *node)
{
    Loc loc;
    loc.obj = p + 0x150;
    ((Loc *)&loc)->flag = 1;
    if (((Loc *)&loc)->flag != 0) {
        func_0208763c(loc.obj);
    }
    func_02056bc0(p + 0xe4, node);
    if (((Loc *)&loc)->flag != 0) {
        func_02087678(loc.obj);
    }
}
