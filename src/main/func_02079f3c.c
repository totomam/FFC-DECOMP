#include "ffc/types.h"

extern void *func_02077b70(void *a, int b);
extern void func_02077b34(void *a, void *b);
extern void func_02079f0c(void *a);
extern void func_02079ed0(void *a);
extern uint32_t data_0213e24c[];
extern uint32_t data_0213e258[];

void *func_02079f3c(int a) {
    uint8_t *p = (uint8_t *)func_02077b70(data_0213e24c, 0);
    if (p == 0) {
        p = (uint8_t *)func_02077b70(data_0213e258, 0);
        if (a < p[0x3d]) {
            return 0;
        }
        func_02079f0c(p);
    }
    func_02077b34(data_0213e24c, p);
    p[0x3d] = (uint8_t)a;
    func_02079ed0(p);
    return p;
}
