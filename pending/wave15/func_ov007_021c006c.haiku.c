#include "ffc/types.h"

extern int func_ov000_02159000(void);
extern void func_ov001_02173460(void);

int func_ov007_021c006c(void)
{
    if (func_ov000_02159000()) {
        return 0;
    }
    func_ov001_02173460();
    return 1;
}
