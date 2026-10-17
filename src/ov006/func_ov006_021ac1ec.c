
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern int func_ov006_021b4d94(void *p);
extern int func_0208130c(uint16_t a, int b);
extern int func_ov006_021b4eb4(uint16_t *p);
extern uint8_t data_ov006_021b8acc[];
extern uint8_t data_ov006_021bc78c[];
extern uint16_t data_ov006_021b866c[];
extern uint8_t data_ov006_021b868e[];
extern uint8_t data_ov006_021b86cc[];
int func_ov006_021ac1ec(void)
{
  uint16_t v[4];
  int r4;
  uint16_t *new_var;
  int i;
  int s;
  if (func_ov006_021b4d94(data_ov006_021b8acc) == 0)
  {
    return 14;
  }
  r4 = func_0208130c(*((uint16_t *) (data_ov006_021bc78c + 4)), 0x1d);
  v[0] = data_ov006_021b866c[5];
  v[1] = data_ov006_021b866c[6];
  new_var = v;
  v[2] = data_ov006_021b866c[7];
  v[3] = data_ov006_021b866c[8];
  for (i = 0; i < 4; i++)
  {
    if ((r4 != 2) && (r4 != 6))
    {
      if (func_ov006_021b4eb4(new_var) != 0)
      {
        return data_ov006_021b868e[r4];
      }
    }
    v[1] += 0x1d;
    r4++;
  }

  s = func_0208130c(*((uint16_t *) (data_ov006_021bc78c + 4)), 0x1d);
  for (i = 0; i < 4; i++)
  {
    if (s == 2)
    {
      int k = i;
      v[0] = data_ov006_021b866c[0xd];
      v[1] = data_ov006_021b866c[0xe];
      v[2] = data_ov006_021b866c[0xf];
      v[3] = data_ov006_021b866c[0x10];
      k *= 0x1d;
      v[1] += (uint16_t) k;
      if (func_ov006_021b4eb4(v) != 0)
      {
        return 2;
      }
      v[0] = data_ov006_021b866c[9];
      v[1] = data_ov006_021b866c[10];
      v[2] = data_ov006_021b866c[11];
      v[3] = data_ov006_021b866c[12];
      v[1] += (uint16_t) k;
      if (func_ov006_021b4eb4(v) != 0)
      {
        return 3;
      }
      break;
    }
    s++;
  }

  s = func_0208130c(*((uint16_t *) (data_ov006_021bc78c + 4)), 0x1d);
  for (i = 0; i < 4; i++)
  {
    if (s == 6)
    {
      int k = i;
      v[0] = data_ov006_021b866c[0xd];
      v[1] = data_ov006_021b866c[0xe];
      v[2] = data_ov006_021b866c[0xf];
      v[3] = data_ov006_021b866c[0x10];
      k *= 0x1d;
      v[1] += (uint16_t) k;
      if (func_ov006_021b4eb4(v) != 0)
      {
        return 7;
      }
      v[0] = data_ov006_021b866c[9];
      v[1] = data_ov006_021b866c[10];
      v[2] = data_ov006_021b866c[11];
      v[3] = data_ov006_021b866c[12];
      v[1] += (uint16_t) k;
      if (func_ov006_021b4eb4(v) != 0)
      {
        return 8;
      }
      break;
    }
    s++;
  }

  for (i = 0; i < 3; i++)
  {
    if (func_ov006_021b4d94(data_ov006_021b86cc + (i * 8)) != 0)
    {
      return i + 11;
    }
  }

  return 14;
}
