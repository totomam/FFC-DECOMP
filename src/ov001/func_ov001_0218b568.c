#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201fd38(void *h, uint32_t *buf);
extern void func_0201fd20(void *h, uint32_t *buf);

void func_ov001_0218b568(int x, int flag)
{
    uint32_t buf[4];

    func_0201fd38(data_020b93b8, buf);
    buf[2]++;
    if (flag) {
        buf[3]++;
    }
    func_0201fd20(data_020b93b8, buf);
}
