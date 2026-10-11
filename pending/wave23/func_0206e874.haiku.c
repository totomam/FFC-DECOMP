#include "ffc/types.h"

extern void *data_0213e178;
extern int32_t func_0206cb98(void *p);
extern void func_0206e434(uint8_t *p);
extern void func_0206e56c(uint8_t *p);

void func_0206e874(uint8_t *p) {
    if (func_0206cb98(data_0213e178) == 0) {
        if (p[0x280]) {
            func_0206e434(p);
            func_0206e56c(p);
        }
    }
}
