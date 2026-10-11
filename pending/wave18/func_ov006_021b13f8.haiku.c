#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x14];
    void *field14;
} OvState;

extern OvState *data_ov006_021bc7f8;
extern void func_ov006_021b5774(uint32_t a, void *b);
extern void *func_ov006_021b570c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_ov006_021b17d4(void);

void func_ov006_021b13f8(void)
{
    func_ov006_021b5774(0, data_ov006_021bc7f8->field14);
    data_ov006_021bc7f8->field14 = func_ov006_021b570c(1, (void *)func_ov006_021b17d4, 0, 0x78);
}
