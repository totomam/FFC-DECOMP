#include "ffc/types.h"

typedef struct {
    uint32_t field_00;
    uint8_t pad_04[0x1e - 4];
    uint8_t field_1e;
    uint8_t field_1f;
} ObjA;

typedef struct {
    uint8_t pad_00[0xc];
    ObjA *ptr_0c;
} GlobA;

extern GlobA data_ov000_0217004c;

void func_ov000_02159b50(void)
{
    if (data_ov000_0217004c.ptr_0c != 0) {
        data_ov000_0217004c.ptr_0c->field_00 = 0;
        data_ov000_0217004c.ptr_0c->field_1e = 0;
        data_ov000_0217004c.ptr_0c->field_1f = 0;
    }
}
