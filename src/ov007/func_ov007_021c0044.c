#include "ffc/types.h"

extern void func_ov001_021732f0(void);
extern void func_ov007_021c0084(void);
extern int32_t data_ov007_021c9c34;

int func_ov007_021c0044(void) {
    if (data_ov007_021c9c34 <= 0) {
        return 1;
    }
    func_ov001_021732f0();
    data_ov007_021c9c34--;
    if (data_ov007_021c9c34 == 0) {
        func_ov007_021c0084();
    }
    return 1;
}
