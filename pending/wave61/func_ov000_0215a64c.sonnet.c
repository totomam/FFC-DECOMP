#include "ffc/types.h"
typedef struct { uint32_t pad[5]; void (*fn)(void*, int, uint32_t); uint32_t arg; } S;
extern S *data_ov000_02170060;
extern void func_ov000_02159014(void);
extern void func_ov000_0215a698(void);
void func_ov000_0215a64c(void *p) {
    if (data_ov000_02170060 == 0) return;
    if (p == 0) return;
    func_ov000_02159014();
    if (data_ov000_02170060->fn != 0) {
        data_ov000_02170060->fn(p, 0, data_ov000_02170060->arg);
    }
    func_ov000_0215a698();
}
