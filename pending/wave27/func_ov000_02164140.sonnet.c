#include "ffc/types.h"

extern uint32_t data_ov000_0217096c;
extern void func_ov000_021649a8(void *a);
extern void func_ov000_02164640(void *a, void *b, void *c);
extern void func_ov000_021646ec(void *a, void *b, void *c);

void func_ov000_02164140(void *a, void *b, void *c, void *d)
{
    if (data_ov000_0217096c != 0) {
        if (b != 0) {
            if (c != 0) {
                func_ov000_021649a8(a);
                if (d != 0) {
                    func_ov000_02164640(a, b, c);
                } else {
                    func_ov000_021646ec(a, b, c);
                }
            }
        }
    }
}
