#include "ffc/types.h"

extern void func_020866dc(uint32_t mask);
extern void func_02081944(uint32_t flag);
extern void func_0208191c(uint32_t flag);

void func_02054194(uint32_t idx)
{
    uint32_t one = 1;
    func_020866dc(one << idx);
    switch (idx) {
    case 0:
        func_02081944(one);
        break;
    case 1:
        func_0208191c(one);
        break;
    }
}
