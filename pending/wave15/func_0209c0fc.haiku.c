#include "ffc/types.h"

typedef struct {
    uint32_t pad[2];
    uint8_t *p;
} FuncObj;

uint8_t func_0209c0fc(FuncObj *obj) {
    int r;
    if (obj->p != 0) {
        r = *obj->p & 0x1f;
    } else {
        r = 0;
    }
    return (uint8_t)r;
}
