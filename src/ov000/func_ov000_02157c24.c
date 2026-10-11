#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t *p;
} G;

extern G data_ov000_0216ff6c;
extern void func_0208763c(void *p);
extern void func_02087678(void *p);

void func_ov000_02157c24(uint32_t v)
{
    func_0208763c(data_ov000_0216ff6c.p + 0x11dc);
    *(uint32_t *)(data_ov000_0216ff6c.p + (1 << 12)) = v;
    func_02087678(data_ov000_0216ff6c.p + 0x11dc);
}
