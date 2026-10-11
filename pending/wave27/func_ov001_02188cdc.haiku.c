#include "ffc/types.h"

extern void func_ov001_021898f8(void);
extern void func_0204e128(void *p);
extern int func_0204dfd8(void *p);
extern void func_ov001_02189908(void);

int func_ov001_02188cdc(void *volatile p, int a, int b, int c)
{
    int r = 1;
    func_ov001_021898f8();
    if (p) {
        func_0204e128(p);
        if (func_0204dfd8(p)) {
            r = 0;
        } else {
            p = 0;
        }
    }
    func_ov001_02189908();
    return r;
}
