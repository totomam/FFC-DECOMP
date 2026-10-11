#include "ffc/types.h"

extern int32_t func_ov000_02165160(void);
extern void func_ov000_0216507c(int32_t);
extern void func_ov007_021c006c(void);

void func_ov007_021bf450(void)
{
    if (func_ov000_02165160() != 2) {
        func_ov000_0216507c(0);
    }
    func_ov007_021c006c();
}
