#include "ffc/types.h"

typedef struct {
    uint32_t f0, f1, f2, f3, f4, f5;
} S;

extern int32_t func_02097d00(S *p);
extern int32_t func_02097d78(S *p);

int32_t func_02097c90(S *p) {
    if (p->f5 != 0) {
        if (func_02097d00(p) < 0) {
            return -1;
        }
    } else if (p->f2 != 0) {
        if (func_02097d78(p) < 0) {
            return -1;
        }
    }
    return 0;
}
