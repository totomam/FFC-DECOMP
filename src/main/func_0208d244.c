#include "ffc/types.h"

extern int func_0208cef8(void);
extern uint32_t data_02143580[];

int func_0208d244(void) {
    if (func_0208cef8() != 0) {
        return 0;
    }
    return (int)((uint32_t *)data_02143580[1])[1];
}
