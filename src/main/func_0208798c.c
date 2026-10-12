#include "ffc/types.h"

extern uint32_t data_02141788;
extern uint32_t func_02087aa0(uint32_t index);
extern void func_02087bfc(uint32_t index, uint32_t value);
extern uint32_t func_02087b64(uint32_t index);
extern void func_02087c08(uint32_t index, uint32_t value);

void func_0208798c(void)
{
    if (data_02141788 != 0) {
        return;
    }
    data_02141788 = 1;

    func_02087bfc(0, func_02087aa0(0));
    func_02087c08(0, func_02087b64(0));

    func_02087c08(2, 0);
    func_02087bfc(2, 0);

    func_02087bfc(3, func_02087aa0(3));
    func_02087c08(3, func_02087b64(3));

    func_02087bfc(4, func_02087aa0(4));
    func_02087c08(4, func_02087b64(4));

    func_02087bfc(5, func_02087aa0(5));
    func_02087c08(5, func_02087b64(5));

    func_02087bfc(6, func_02087aa0(6));
    func_02087c08(6, func_02087b64(6));
}
