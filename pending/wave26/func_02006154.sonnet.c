#include "ffc/types.h"
typedef struct { int8_t *buf; int32_t pad; int32_t count; uint8_t flag; } FuncObj;
void func_02006154(FuncObj *p, int8_t x)
{
    if (p->flag != 0) {
        int32_t i;
        int8_t v = -x;
        for (i = 0; i < p->count; i++) {
            p->buf[i] = v;
        }
    }
}
