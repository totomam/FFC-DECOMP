#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_02090380(void *destination, const void *source, uint32_t length);

uint32_t func_ov001_02184184(uint8_t *self, const uint8_t *text)
{
    int32_t n;
    int32_t room;
    int32_t cur;

    n = (int32_t)func_02092864(text) + 1;
    cur = *(int32_t *)(self + 0x578);
    room = 0x578 - cur;
    if (n > room) {
        n = room;
    }
    if (n <= 0) {
        return 0;
    }
    func_02090380(self + cur, text, (uint32_t)n);
    cur = *(int32_t *)(self + 0x578);
    cur += n;
    *(int32_t *)(self + 0x578) = cur;
    self[cur - 1] = 0;
    return 1;
}
