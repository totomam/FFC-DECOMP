#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
typedef struct { uint8_t pad[0x14e4]; uint32_t v; } S;
extern S *data_ov006_021ba160;

void func_ov006_02199640(uint32_t a)
{
    func_02088978();
    data_ov006_021ba160->v = a;
    func_0208898c();
}
