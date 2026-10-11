#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov001_0218dff4(void *obj, uint32_t zero);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t data_ov007_021c4dac[];
extern Pair data_ov007_021c4e74;

void *func_ov007_021aadf8(void *param)
{
    uint8_t *obj = (uint8_t *)param;
    uint32_t *blk;
    uint32_t val;

    func_ov001_0218dff4(obj, 0);
    *(uint32_t **)(obj + 0) = data_ov007_021c4dac;
    blk = (uint32_t *)func_0205681c(0x204);
    if (blk != 0) {
        *blk = 0x02194a64;
    }
    *(uint32_t **)(obj + 0xbc) = blk;
    val = func_0203b6f0();
    *(uint32_t *)(obj + 0xdc) = val;
    func_02056bc0(obj + 0x48, val);
    *(Pair *)(obj + 0xb0) = data_ov007_021c4e74;
    return obj;
}
