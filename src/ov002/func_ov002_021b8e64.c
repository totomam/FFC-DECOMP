/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_calls_loop_8e64.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

/* Matched: 021B8E64 (70B). F2(F1(*(self+0xbc)),1); F3(self); F4(self,0); F5(self);
   then for i in 0..2: if *(self+i*4+0x110)!=0 F6(that,1). */
extern void* func_ov002_02198dec(void* p);
extern void func_ov002_0219f568(void* x, s32 one);
extern void func_ov002_021b90b0(void* self);
extern void func_ov002_021b8df8(void* self, s32 z);
extern void func_020696f8(void* self);
extern void func_02069330(void* p, s32 one);
void func_ov002_021b8e64(void* self){
  u32 i;
  func_ov002_0219f568(func_ov002_02198dec(*(void**)((u8*)self + 0xbc)), 1);
  func_ov002_021b90b0(self);
  func_ov002_021b8df8(self, 0);
  func_020696f8(self);
  for(i = 0; i < 3; i++){
    void* p = *(void**)((u8*)self + i * 4 + 0x110);
    if(p != 0) func_02069330(p, 1);
  }
}
