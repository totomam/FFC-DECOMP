#include "ffc/types.h"

typedef struct {
    void *f0;
    uint8_t pad[4];
    void *f8;
    uint8_t rest[64 - 12];
} Entry;

extern Entry *data_ov006_021bc884;
extern void func_ov006_021b5064(void *p);
extern void func_ov006_021b3ef8(void *p);
extern void func_ov006_021b49fc(void *p);

void func_ov006_021b5678(void)
{
    int i;
    for (i = 0; i < 2; i++) {
        func_ov006_021b5064(data_ov006_021bc884[i].f8);
        func_ov006_021b3ef8(data_ov006_021bc884[i].f0);
    }
    func_ov006_021b49fc(&data_ov006_021bc884);
}
