#include "ffc/types.h"

extern int func_0206cba4(uint32_t);
extern int func_0206cb98(uint32_t);
extern uint32_t data_0213e178;

void func_0206efd0(uint32_t *obj) {
    if (func_0206cba4(data_0213e178) == 0) {
        if (func_0206cb98(data_0213e178) == 0) {
            return;
        }
    }
    obj[3] = (obj[3] & ~0xffu) | 2;
}
