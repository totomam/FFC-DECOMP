#include "ffc/types.h"

extern void func_02006c84(void *p);
extern int func_02006bfc(void);
extern void func_02006bec(void *p);

void func_02008258(void *p) {
    func_02006c84(p);
    if (func_02006bfc()) {
        func_02006bec(p);
    }
}
