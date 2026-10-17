/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/call_field14_status2.c, externs renamed. */
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


/* func_ov002_021b6070(self->field14); self->fC = (self->fC & ~0xFF) | 2.  -O4, 24B.
   Serves: 02198E68, 021AAD94, 021B7E98, 021C56F4 */
extern void func_ov002_021b6070(u32);
void func_ov002_021b7e98(void* s){
    func_ov002_021b6070(*(u32*)((u8*)s + 0x14));
    *(u32*)((u8*)s + 0xC) = (*(u32*)((u8*)s + 0xC) & ~0xFF) | 2;
}
