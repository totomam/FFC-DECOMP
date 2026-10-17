/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/call_2fields_status2.c, externs renamed. */
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


/* Call(self->field14, self->field18); self->fC = (self->fC & ~0xFF) | 2.  -O4, 26B.
   Serves: 0219B000, 021A0D00, 021A13B4, 021A17F8, 021B1310,
           021B36A8, 021B7E60, 021B7E7C, 021BC548 */
extern void func_020591f4(u32, u32);
void func_ov002_021b36a8(void* s){
    func_020591f4(*(u32*)((u8*)s + 0x14), *(u32*)((u8*)s + 0x18));
    *(u32*)((u8*)s + 0xC) = (*(u32*)((u8*)s + 0xC) & ~0xFF) | 2;
}
