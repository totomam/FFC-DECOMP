#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x8c];
    uint32_t val;
} FuncOv004Obj;

int func_ov004_021495a8(FuncOv004Obj *p) {
    if (p->val == 0) {
        return 1;
    }
    return 0;
}
