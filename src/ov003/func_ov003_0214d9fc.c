#include "ffc/types.h"
typedef struct S { uint8_t pad[0x39c]; void *x; } S;
extern int func_0203b75c(void *arg);
extern int func_ov003_02163ed8(void *arg);
int func_ov003_0214d9fc(S *p) {
    if (p->x == 0) {
        return func_0203b75c(0);
    }
    func_ov003_02163ed8(p->x);
    p->x = 0;
}
