#include "ffc/types.h"

extern void *data_021395b4;
extern void *func_0205681c(uint32_t size);
extern void *func_02037bb0(void *p);

void *func_02037700(void) {
    if (data_021395b4 == 0) {
        void *p = func_0205681c(0x344);
        if (p != 0) {
            p = func_02037bb0(p);
        }
        data_021395b4 = p;
    }
    return data_021395b4;
}
