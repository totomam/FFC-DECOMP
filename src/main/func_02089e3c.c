#include "ffc/types.h"

extern uint32_t data_02141988;
extern uint32_t data_0214198c;
extern void func_02087620(void *object);
extern void func_02089e84(void);
extern void func_0208a300(void);

void func_02089e3c(void) {
    if (data_02141988 == 0) {
        data_02141988 = 1;
        func_02087620(&data_0214198c);
        func_02089e84();
        func_0208a300();
    }
}
