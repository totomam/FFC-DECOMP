/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t func_0207eb34(void *p);
extern uint32_t func_0207eb3c(void *p);

typedef struct {
    uint32_t unk0;
    uint32_t f4;
    uint32_t f8;
    void *fc;
    uint8_t f10;
} FfcObj;

int func_ov014_02146b80(FfcObj *self, void *arg)
{
    self->fc = arg;
    self->f4 = func_0207eb34(arg);
    self->f8 = func_0207eb3c(self->fc);
    self->f10 = 0;
    return 1;
}
