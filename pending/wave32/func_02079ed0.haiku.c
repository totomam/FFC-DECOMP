#include "ffc/types.h"

extern uint8_t data_0213e258[];
extern uint8_t *func_02077b70(uint8_t *list, uint8_t *prev);
extern void func_02077afc(uint8_t *list, uint8_t *p, uint8_t *a);

void func_02079ed0(uint8_t *a) {
    uint8_t *p = func_02077b70(data_0213e258, 0);
    while (p) {
        if (a[0x3d] < p[0x3d]) {
            break;
        }
        p = func_02077b70(data_0213e258, p);
    }
    func_02077afc(data_0213e258, p, a);
}
