#include "ffc/types.h"
typedef struct { uint8_t pad[0x14e4]; uint32_t v; } S;
int func_02088978(void);void func_0208898c(int);
extern S *data_ov006_021ba160;
void func_ov006_02199640(uint32_t a)
{
    int t=func_02088978();
    data_ov006_021ba160->v = a;
    func_0208898c(t);
}
