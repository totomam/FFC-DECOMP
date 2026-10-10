#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x14];
    uint8_t *flag;
} FuncOv003Obj;

void func_ov003_021659bc(FuncOv003Obj *self)
{
    *self->flag = 1;
}
