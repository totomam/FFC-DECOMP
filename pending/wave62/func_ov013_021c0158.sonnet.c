/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void *func_02056aec(void *o);
extern void *func_0203b708(int n);
extern void func_02056bc0(void *object, void *node);
void func_ov013_021c0158(uint8_t *self) {
    **(int32_t **)(self + 0xd8) = -1;
    void *a = func_02056aec(self);
    void *b = func_0203b708(0x1e);
    uint8_t *p = self + 0x14;
    func_02056bc0(p, b);
    func_02056bc0(p, a);
}
