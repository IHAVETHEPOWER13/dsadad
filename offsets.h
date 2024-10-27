#pragma once
#include <Windows.h>



namespace offsets
{
    uintptr_t GWORLD = 0x1221B738;
    uintptr_t Viewpoint = 0x10F90A10;

    uintptr_t OwningWorld = 0xc0;
    uintptr_t LocalPawn = 0x338;
    uintptr_t PlayerController = 0x30;
    uintptr_t LocalPlayers = 0x38;
    uintptr_t PlayerState = 0x298;
    uintptr_t GameState = 0x160;
    uintptr_t GameInstance = 0x1D8;
    uintptr_t PlayerArray = 0x2A8;
    uintptr_t TeamIndex = 0x1201;
    uintptr_t RootC = 0x198;
    uintptr_t CameraManager = 0x348;
    uintptr_t CachedActor = 0x308;
    uintptr_t RootComponent = 0x198;
    uintptr_t ActorCount = 0xA8;
    uintptr_t BoneArray = 0x570;
    uintptr_t BoneCache = 0x600; // fresh dump
    uintptr_t C2W = 0x1c0;
    uintptr_t Actor = 0xA0; // discord.gg/saturniv
    uintptr_t ActorMesh = 0x310;
    uintptr_t AActor = 0xA8;
    uintptr_t PersistentLevel = 0x30;
    uintptr_t RelativeLocation = 0x120;
    uintptr_t DisplayName = 0x90;
    uintptr_t ComponetToWorld = 0x1c0;
    uintptr_t PawnPrivate = 0x308;
    uintptr_t Last_Render_Time = 0x2E8;
    uintptr_t Last_Render_Time_On_Screen = 0x2F0;
    uintptr_t Velocity = 0x168;
    uintptr_t DefaultFOV = 0x170;
    uintptr_t CurrentWeapons = 0xA68;
    uintptr_t bIsReloadingWeapon = 0x398; // fresh dump
    uintptr_t bIsEquippingWeapon = 0x350; // payson was here
    uintptr_t bIsChargingWeapon = 0x369;
    uintptr_t WeaponData = 0x510; // fresh dump
    uintptr_t AmmoCount = 0xEEC; // fresh dump
    uintptr_t bIsTargeting = 0x581;
    uintptr_t GunName = 0x98;
    uintptr_t Tier = 0x9A; // fresh dump
    uintptr_t bIsCrouched = 0x45C;
    uintptr_t bIsDying = 0x758;
    uintptr_t bIsHiddenForDeath = 0x758;
    uintptr_t bIsKnockedback = 0x758;
    uintptr_t bIsStaggered = 0x759; // discord.gg/saturniv
    uintptr_t bIsInvulnerable = 0x75A;
    uintptr_t bSpotted = 0x75A;
    uintptr_t bIsSliding = 0x75B;
    uintptr_t bWeaponHolstered = 0x939;
    uintptr_t bIsDBNO = 0x93A;
    uintptr_t LastRevivedFromDBNOTime = 0x4C30;
    uintptr_t bIsJumping = 0xA60; // fresh dump
    uintptr_t bIsABot = 0x29a;
    uintptr_t GlobalAnimRateScale = 0xA18;
    uintptr_t CustomTimeDilation = 0x68; // fresh dump
    uintptr_t LastSubmitTime = 0x2E0;
    uintptr_t LastRenderTimeOnScreen = 0x2E8;
    uintptr_t LocalActorPos = 0x120;
    uintptr_t PlayerName = 0xA98;
    uintptr_t PlatformESP = 0x3f0; //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerState&member=Platform
}