#include "ffc/types.h"

extern void func_ov000_02165104(void);
extern void func_ov000_0216507c(int x);
extern int func_ov000_02165160(void);

void func_ov007_021bf9f4(void)
{
    func_ov000_02165104();
    func_ov000_0216507c(0);
    if (func_ov000_02165160() != 2) {
        func_ov000_0216507c(0);
    }
}
