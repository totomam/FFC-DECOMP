
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern uint32_t func_0208619c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t x);
extern uint32_t func_02086234(void);
extern void func_02087058(uint32_t *p);
extern uint32_t data_02141400[];
extern uint32_t data_02141450[];
uint32_t func_02085c4c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
  uint32_t irq;
  uint32_t *g;
  if (func_0208619c(a, b, c, d) == 0)
  {
    return 4;
  }
  irq = func_02088978();
  ;
  if (data_02141400[0] != 0)
  {
    func_0208898c(irq);
    return 1;
  }
  data_02141400[0] = 2;
  func_0208898c(irq);
  data_02141400[1] = d;
  data_02141400[2] = e;
  data_02141400[17] = a;
  data_02141400[18] = b;
  data_02141400[19] = c;
  data_02141400[16] = 0;
  irq = func_02088978();
  if (func_02086234() == 1)
  {
    func_0208898c(irq);
    return 0;
  }
  data_02141400[0] = 0;
  func_0208898c(irq);
  func_02087058(data_02141450);
  return 3;
}
