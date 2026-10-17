
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern uint32_t func_ov000_0216743c(uint32_t a);
extern uint32_t func_ov000_02167438(uint32_t a);
extern int func_ov001_02171ac0(void *a, uint32_t b, uint32_t c);
extern int func_ov001_02171b58(void *a, uint32_t b, uint32_t c);
extern void func_ov001_02171d4c(void *a);
extern int func_ov001_02171d60(void *a);
extern int func_ov001_021721f8(void *a, uint32_t b, uint32_t c);
int func_ov001_02173bcc(uint32_t **a0, uint8_t *a1)
{
  uint8_t buf[3];
  uint32_t r4;
  uint32_t r6;
  uint32_t r7;
  uint32_t *p;
  r4 = (*a0)[2];
  buf[0] = 0;
  buf[1] = 0;
  buf[2] = 0;
  r6 = 0;
  p = *((uint32_t **) (a1 + 0x164));
  if (p[5] != 0)
  {
    int t = (int) func_ov000_0216743c(r4);
    r6 = 4 - (t % 4);
    if (r6 == 4)
    {
      r6 = 0;
    }
  }
  if ((((*((uint32_t *) (a1 + 0x198))) != 0) && ((*((uint32_t *) (a1 + 0x1a8))) == 1)) != 0)
  {
    uint32_t r2;
    r7 = func_ov000_02167438(r4);
    r2 = func_ov000_0216743c(r4);
    if (((!func_ov001_02171ac0(a1 + 0x7c, r7, r2)) || (!func_ov001_02171ac0(a1 + 0x7c, (uint32_t) buf, r6))) || (!func_ov001_02171b58(a1 + 0x58, *((uint32_t *) (a1 + 0x80)), *((uint32_t *) (a1 + 0x88)))))
    {
      return 0;
    }
    {
      func_ov001_02171d4c(a1 + 0x7c);
      if (!func_ov001_02171d60(a1))
      {
        return 0;
      }
      if ((*((uint32_t *) (a1 + 0x68))) == (*((uint32_t *) (a1 + 0x64))))
      {
        func_ov001_02171d4c(a1 + 0x58);
      }
      return 1;
    }
  }
  r7 = func_ov000_02167438(r4);
  {
    uint32_t r2 = func_ov000_0216743c(r4);
    if (!func_ov001_021721f8(a1, r7, r2))
    {
      return 0;
    }
    if (!func_ov001_021721f8(a1, (uint32_t) buf, r6))
    {
      if (a1)
      {
        return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return 1;
}
