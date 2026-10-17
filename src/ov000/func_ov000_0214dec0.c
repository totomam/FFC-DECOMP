
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern int32_t func_ov000_0214ecc8(void);
extern int32_t func_020876c0(uint8_t *p);
extern void func_0208763c(uint8_t *p);
extern int32_t func_ov000_0214df84(uint8_t *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02087678(uint8_t *p);
inline static int hf(uint8_t *p, int m)
{
  return ((*((int16_t *) (p + 0xac))) & m) != 0;
}

int32_t func_ov000_0214dec0(uint8_t *a0, uint32_t a1, uint32_t a2, char a3, uint32_t a4, uint32_t a5)
{
  uint8_t *obj;
  uint32_t flag;
  uint32_t flag2;
  int32_t ret;
  if (func_ov000_0214ecc8() != 0)
  {
    return ~0x1b;
  }
  flag = 0;
  if (a0 != 0)
  {
    flag = ((*((int16_t *) (a0 + 0xac))) & 1) ? (1) : (0);
  }
  if (flag == 0)
  {
    return ~0x26;
  }
  {
    int32_t t = *((int8_t *) (a0 + 0xaf));
    uint32_t need = 1;
    if ((t != 0) && (t != 4))
    {
      need = 0;
    }
    if (need)
    {
      if ((!((*((volatile int16_t *) (a0 + 0xac))) & 4)) || ((*((volatile int16_t *) (a0 + 0xac))) & 8))
      {
        return ~0x37;
        obj = *((uint8_t **) (a0 + 0xa4));
      }
    }
  }
  obj = *((uint8_t **) (a0 + 0xa4));
  if ((a5 & 4) || ((*((int8_t *) (a0 + 0xae))) == 0))
  {
    if (func_020876c0(obj + 0xe0) == 0)
    {
      return ~0x05;
    }
    flag2 = 0;
  }
  else
  {
    func_0208763c(obj + 0xe0);
    flag2 = 1;
  }
  ret = func_ov000_0214df84(a0, a1, a2, a3, a4, flag2);
  func_02087678(obj + 0xe0);
  return ret;
}
