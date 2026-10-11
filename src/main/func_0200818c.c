#include "ffc/types.h"

typedef struct {
    int32_t a : 9;
    int32_t b : 11;
    uint32_t type : 4;
    uint32_t pad : 8;
} Rec;

extern Rec *func_02008358(int16_t id);
extern void func_02006b74(int32_t a, int32_t b, int32_t c);

void func_0200818c(int32_t id, int32_t arg) {
    Rec *p = func_02008358((int16_t)id);
    if (p != 0 && p->type == 9) {
        func_02006b74(p->a, p->b, arg);
    }
}
