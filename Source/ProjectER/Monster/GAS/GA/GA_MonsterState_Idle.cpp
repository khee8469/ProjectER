#include "Monster/GAS/GA/GA_MonsterState_Idle.h"

UGA_MonsterState_Idle::UGA_MonsterState_Idle()
{
	StateInitData.MonsterAssetTags = FGameplayTagContainer(FGameplayTag::RequestGameplayTag("Ability.Action.Idle"));
	StateInitData.MontageType = EMonsterMontageType::None;
	StateInitData.NiagaraCueTag = FGameplayTag::RequestGameplayTag("GameplayCue.Particle.Action.Idle");
	StateInitData.SoundCueTag = FGameplayTag::RequestGameplayTag("GameplayCue.Sound.Action.Idle");
	StateInitData.WaitTag = FGameplayTag::RequestGameplayTag("State.Action.Idle");
	bIsUseWaitTag = true;
	bIsUseMontage = false; // Idle은 애님 블루프린트 시퀀스 사용 (대기 중 몽타주 복제 제거)
	SetAssetTags(StateInitData.MonsterAssetTags);
}

void UGA_MonsterState_Idle::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

}

void UGA_MonsterState_Idle::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

}

void UGA_MonsterState_Idle::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, true, false);

}
