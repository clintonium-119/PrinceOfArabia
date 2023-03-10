#pragma once

/**** FX data header generated by fxdata-build.py tool version 1.15 ****/

using uint24_t = __uint24;

// Initialize FX hardware using  FX::begin(FX_DATA_PAGE); in the setup() function.

constexpr uint16_t FX_DATA_PAGE  = 0xf1b3;
constexpr uint24_t FX_DATA_BYTES = 932945;

constexpr uint16_t FX_SAVE_PAGE  = 0xfff0;
constexpr uint24_t FX_SAVE_BYTES = 2;

namespace Levels
{
  constexpr uint24_t Invaders_Items = 0x000000;
  constexpr uint24_t Level1_FG = 0x000189;
  constexpr uint24_t Level1_BG = 0x0004B3;
  constexpr uint24_t level1_Data = 0x0007DD;
  constexpr uint24_t Level1_Items = 0x000818;
  constexpr uint24_t Level2_FG = 0x0009A0;
  constexpr uint24_t Level2_BG = 0x000FB8;
  constexpr uint24_t level2_Data = 0x0015D0;
  constexpr uint24_t Level2_Items = 0x00160B;
  constexpr uint24_t Level3_FG = 0x001793;
  constexpr uint24_t Level3_BG = 0x001CD9;
  constexpr uint24_t level3_Data = 0x00221F;
  constexpr uint24_t Level3_Items = 0x00225A;
  constexpr uint24_t Level4_FG = 0x0023DA;
  constexpr uint24_t Level4_BG = 0x002812;
  constexpr uint24_t level4_Data = 0x002C4A;
  constexpr uint24_t Level4_Items = 0x002C85;
  constexpr uint24_t Level5_FG = 0x002E0D;
  constexpr uint24_t Level5_BG = 0x003353;
  constexpr uint24_t level5_Data = 0x003899;
  constexpr uint24_t Level5_Items = 0x0038D4;
  constexpr uint24_t Level6_FG = 0x003A5C;
  constexpr uint24_t Level6_BG = 0x003CD2;
  constexpr uint24_t level6_Data = 0x003F48;
  constexpr uint24_t Level6_Items = 0x003F83;
  constexpr uint24_t Level7_FG = 0x004103;
  constexpr uint24_t Level7_BG = 0x00453B;
  constexpr uint24_t level7_Data = 0x004973;
  constexpr uint24_t Level7_Items = 0x0049AE;
  constexpr uint24_t Level8_FG = 0x004B36;
  constexpr uint24_t Level8_BG = 0x00505E;
  constexpr uint24_t level8_Data = 0x005586;
  constexpr uint24_t Level8_Items = 0x0055C1;
  constexpr uint24_t Level9_FG = 0x005749;
  constexpr uint24_t Level9_BG = 0x005B09;
  constexpr uint24_t level9_Data = 0x005EC9;
  constexpr uint24_t Level9_Items = 0x005F04;
  constexpr uint24_t Level10_FG = 0x00608C;
  constexpr uint24_t Level10_BG = 0x00635C;
  constexpr uint24_t level10_Data = 0x00662C;
  constexpr uint24_t Level10_Items = 0x006667;
  constexpr uint24_t Level11_FG = 0x0067EF;
  constexpr uint24_t Level11_BG = 0x006C27;
  constexpr uint24_t level11_Data = 0x00705F;
  constexpr uint24_t Level11_Items = 0x00709A;
  constexpr uint24_t Level12_FG = 0x007222;
  constexpr uint24_t Level12_BG = 0x0078B2;
  constexpr uint24_t level12_Data = 0x007F42;
  constexpr uint24_t Level12_Items = 0x007F7D;
  constexpr uint24_t Level13_FG = 0x008105;
  constexpr uint24_t Level13_BG = 0x0081B9;
  constexpr uint24_t level13_Data = 0x00826D;
  constexpr uint24_t Level13_Items = 0x0082A8;
  constexpr uint24_t Level14_StandingJumps_FG = 0x008430;
  constexpr uint24_t Level14_StandingJumps_BG = 0x008520;
  constexpr uint24_t Level14_StandingJumps_Data = 0x008610;
  constexpr uint24_t Level14_StandingJumps_Items = 0x008619;
  constexpr uint24_t Level15_RunningJumps_FG = 0x0087A1;
  constexpr uint24_t Level15_RunningJumps_BG = 0x008963;
  constexpr uint24_t Level15_RunningJumps_Data = 0x008B25;
  constexpr uint24_t Level15_RunningJumps_Items = 0x008B2E;
  constexpr uint24_t Level16_RunningJumps_FG = 0x008CB6;
  constexpr uint24_t Level16_RunningJumps_BG = 0x008E78;
  constexpr uint24_t Level16_RunningJumps_Data = 0x00903A;
  constexpr uint24_t Level16_RunningJumps_Items = 0x009043;
  constexpr uint24_t Level17_RunningJumps_FG = 0x0091CB;
  constexpr uint24_t Level17_RunningJumps_BG = 0x00938D;
  constexpr uint24_t Level17_RunningJumps_Data = 0x00954F;
  constexpr uint24_t Level17_RunningJumps_Items = 0x009558;
  constexpr uint24_t Level18_RunningJumps_FG = 0x0096E0;
  constexpr uint24_t Level18_RunningJumps_BG = 0x0098A2;
  constexpr uint24_t Level18_RunningJumps_Data = 0x009A64;
  constexpr uint24_t Level18_RunningJumps_Items = 0x009A6D;
  constexpr uint24_t Level19_RunningJumps_FG = 0x009BF5;
  constexpr uint24_t Level19_RunningJumps_BG = 0x009DB7;
  constexpr uint24_t Level19_RunningJumps_Data = 0x009F79;
  constexpr uint24_t Level19_RunningJumps_Items = 0x009F82;
  constexpr uint24_t Level20_RunningJumps_FG = 0x00A10A;
  constexpr uint24_t Level20_RunningJumps_BG = 0x00A3DA;
  constexpr uint24_t Level20_RunningJumps_Data = 0x00A6AA;
  constexpr uint24_t Level20_RunningJumps_Items = 0x00A6B3;
  constexpr uint24_t Level21_RunningJumps_FG = 0x00A83B;
  constexpr uint24_t Level21_RunningJumps_BG = 0x00AB0B;
  constexpr uint24_t Level21_RunningJumps_Data = 0x00ADDB;
  constexpr uint24_t Level21_RunningJumps_Items = 0x00ADE4;
  constexpr uint24_t Level22_RunningJumps_FG = 0x00AF6C;
  constexpr uint24_t Level22_RunningJumps_BG = 0x00B23C;
  constexpr uint24_t Level22_RunningJumps_Data = 0x00B50C;
  constexpr uint24_t Level22_RunningJumps_Items = 0x00B515;
  constexpr uint24_t Level23_RunningJumps_FG = 0x00B69D;
  constexpr uint24_t Level23_RunningJumps_BG = 0x00B96D;
  constexpr uint24_t Level23_RunningJumps_Data = 0x00BC3D;
  constexpr uint24_t Level23_RunningJumps_Items = 0x00BC46;
  constexpr uint24_t Level24_RunningJumps_FG = 0x00BDCE;
  constexpr uint24_t Level24_RunningJumps_BG = 0x00C09E;
  constexpr uint24_t Level24_RunningJumps_Data = 0x00C36E;
  constexpr uint24_t Level24_RunningJumps_Items = 0x00C377;
  constexpr uint24_t Level25_RunningJumps_FG = 0x00C4FF;
  constexpr uint24_t Level25_RunningJumps_BG = 0x00C7CF;
  constexpr uint24_t Level25_RunningJumps_Data = 0x00CA9F;
  constexpr uint24_t Level25_RunningJumps_Items = 0x00CAA8;
  constexpr uint24_t Level26_RunningJumps_FG = 0x00CC30;
  constexpr uint24_t Level26_RunningJumps_BG = 0x00CF00;
  constexpr uint24_t Level26_RunningJumps_Data = 0x00D1D0;
  constexpr uint24_t Level26_RunningJumps_Items = 0x00D1D9;
  constexpr uint24_t Level27_RunningJumps_FG = 0x00D361;
  constexpr uint24_t Level27_RunningJumps_BG = 0x00D631;
  constexpr uint24_t Level27_RunningJumps_Data = 0x00D901;
  constexpr uint24_t Level27_RunningJumps_Items = 0x00D90A;
  constexpr uint24_t Level28_RunningJumps_FG = 0x00DA92;
  constexpr uint24_t Level28_RunningJumps_BG = 0x00DCAE;
  constexpr uint24_t Level28_RunningJumps_Data = 0x00DECA;
  constexpr uint24_t Level28_RunningJumps_Items = 0x00DED3;
  constexpr uint24_t Level29_RunningJumps_FG = 0x00E05B;
  constexpr uint24_t Level29_RunningJumps_BG = 0x00E277;
  constexpr uint24_t Level29_RunningJumps_Data = 0x00E493;
  constexpr uint24_t Level29_RunningJumps_Items = 0x00E49C;
  constexpr uint24_t Level30_RunningJumps_FG = 0x00E624;
  constexpr uint24_t Level30_RunningJumps_BG = 0x00E840;
  constexpr uint24_t Level30_RunningJumps_Data = 0x00EA5C;
  constexpr uint24_t Level30_RunningJumps_Items = 0x00EA65;
  constexpr uint24_t Level31_RunningJumps_FG = 0x00EBED;
  constexpr uint24_t Level31_RunningJumps_BG = 0x00EE09;
  constexpr uint24_t Level31_RunningJumps_Data = 0x00F025;
  constexpr uint24_t Level31_RunningJumps_Items = 0x00F02E;
  constexpr uint24_t level_FG = 0x00F1B6;
  constexpr uint24_t Level_BG = 0x00F216;
  constexpr uint24_t level_Data = 0x00F276;
  constexpr uint24_t Level_Items = 0x00F2D6;
}

namespace Sounds
{
  constexpr uint24_t Dead = 0x00F336;
  constexpr uint24_t Grab1 = 0x00F354;
  constexpr uint24_t Grab2 = 0x00F37E;
  constexpr uint24_t Grab3 = 0x00F3A8;
  constexpr uint24_t Grab4 = 0x00F3E2;
  constexpr uint24_t Seque = 0x00F438;
  constexpr uint24_t Tada = 0x00F4B2;
  constexpr uint24_t Theme = 0x00F4D0;
  constexpr uint24_t Triumph = 0x00F69E;
  constexpr uint24_t Victory = 0x00F6BC;
  constexpr uint24_t Ending = 0x00F72E;
  constexpr uint24_t OutOfTime = 0x00F880;
  constexpr uint24_t GateGoingDown = 0x00F8C6;
  constexpr uint24_t GateGoingUp = 0x00F904;
  constexpr uint24_t ChopChop = 0x00F942;
  constexpr uint24_t Thump = 0x00F954;
  constexpr uint24_t Strike = 0x00F966;
  constexpr uint24_t Invader_Wave_Start = 0x00F974;
  constexpr uint24_t Invader_Wave_Success = 0x00F9A2;
  constexpr uint24_t Invader_End_of_Game = 0x00FA48;
  constexpr uint24_t Invader_Player_Fires_Bullet = 0x00FA8E;
  constexpr uint24_t Invader_Enemy_Fires_Bullet = 0x00FA9C;
  constexpr uint24_t Invader_Player_Explosion = 0x00FAAA;
  constexpr uint24_t Invader_Enemy_Explosion = 0x00FAF4;
  constexpr uint24_t Invader_Hit_Barrier = 0x00FB3E;
}

namespace Images
{
  constexpr uint24_t PPOT = 0x00FB48;
  constexpr uint16_t PPOT_WIDTH  = 65;
  constexpr uint16_t PPOTHEIGHT  = 31;
  constexpr uint8_t  PPOT_FRAMES = 4;

  constexpr uint24_t Title_PoP = 0x00FF5C;
  constexpr uint16_t Title_PoP_width  = 128;
  constexpr uint16_t Title_PoP_height = 33;

  constexpr uint24_t Title_PoA = 0x010460;
  constexpr uint16_t Title_PoA_width  = 128;
  constexpr uint16_t Title_PoA_height = 33;

  constexpr uint24_t Title_Main_NoHigh = 0x010964;
  constexpr uint16_t Title_Main_NoHigh_width  = 128;
  constexpr uint16_t Title_Main_NoHigh_height = 88;

  constexpr uint24_t Title_Main_WithHigh = 0x010EE8;
  constexpr uint16_t Title_Main_WithHigh_width  = 128;
  constexpr uint16_t Title_Main_WithHigh_height = 88;

  constexpr uint24_t Title_Cursor = 0x01146C;
  constexpr uint16_t Title_Cursor_width  = 5;
  constexpr uint16_t Title_Cursor_height = 5;

  constexpr uint24_t Title_Credits = 0x011475;
  constexpr uint16_t Title_Credits_width  = 73;
  constexpr uint16_t Title_Credits_height = 136;

  constexpr uint24_t Saves = 0x011952;
  constexpr uint16_t SavesWidth  = 128;
  constexpr uint16_t SavesHeight = 5;

  constexpr uint24_t TimeRemaining = 0x0119D6;
  constexpr uint16_t TimeRemainingWidth  = 81;
  constexpr uint16_t TimeRemainingHeight = 15;

  constexpr uint24_t LevelNumber = 0x011B1E;
  constexpr uint16_t LevelNumberWidth  = 81;
  constexpr uint16_t LevelNumberHeight = 15;

  constexpr uint24_t GameOver = 0x011C66;
  constexpr uint16_t GameOverWidth  = 49;
  constexpr uint16_t GameOverHeight = 15;

  constexpr uint24_t PressA = 0x011D2E;
  constexpr uint16_t PressAWidth  = 79;
  constexpr uint16_t PressAHeight = 15;

  constexpr uint24_t TimeOut_PoP = 0x011E6E;
  constexpr uint16_t TimeOut_PoP_width  = 86;
  constexpr uint16_t TimeOut_PoP_height = 114;

  constexpr uint24_t TimeOut_PoA = 0x01237C;
  constexpr uint16_t TimeOut_PoA_width  = 86;
  constexpr uint16_t TimeOut_PoA_height = 114;

  constexpr uint24_t IntroGame_1A = 0x01288A;
  constexpr uint16_t IntroGame_1A_width  = 118;
  constexpr uint16_t IntroGame_1A_height = 96;

  constexpr uint24_t IntroGame_1B = 0x012E16;
  constexpr uint16_t IntroGame_1B_width  = 123;
  constexpr uint16_t IntroGame_1B_height = 96;

  constexpr uint24_t IntroGame_9_PoP = 0x0133DE;
  constexpr uint16_t IntroGame_9_PoP_width  = 123;
  constexpr uint16_t IntroGame_9_PoP_height = 160;

  constexpr uint24_t IntroGame_9_PoA = 0x013D7E;
  constexpr uint16_t IntroGame_9_PoA_width  = 123;
  constexpr uint16_t IntroGame_9_PoA_height = 160;

  constexpr uint24_t Chambers_BG = 0x01471E;
  constexpr uint16_t Chambers_BG_width  = 128;
  constexpr uint16_t Chambers_BG_height = 64;

  constexpr uint24_t Chambers_BG_01 = 0x014B22;
  constexpr uint16_t Chambers_BG_01_width  = 128;
  constexpr uint16_t Chambers_BG_01_height = 55;

  constexpr uint24_t Chambers_BG_02 = 0x014EA6;
  constexpr uint16_t Chambers_BG_02_width  = 128;
  constexpr uint16_t Chambers_BG_02_height = 9;

  constexpr uint24_t Chambers_FG = 0x014FAA;
  constexpr uint16_t Chambers_FG_width  = 128;
  constexpr uint16_t Chambers_FG_height = 64;

  constexpr uint24_t Credits_BG = 0x0157AE;
  constexpr uint16_t Credits_BG_width  = 128;
  constexpr uint16_t Credits_BG_height = 9;

  constexpr uint24_t Eeek = 0x0158B2;
  constexpr uint16_t EeekWidth  = 43;
  constexpr uint16_t EeekHeight = 19;

  constexpr uint24_t LevelRect = 0x0159B8;
  constexpr uint16_t LevelRectWidth  = 16;
  constexpr uint16_t LevelRectHeight = 8;

  constexpr uint24_t Mouse = 0x0159CC;
  constexpr uint16_t MouseWidth  = 16;
  constexpr uint16_t MouseHeight = 16;
  constexpr uint8_t  MouseFrames = 3;

  constexpr uint24_t HourGlasses = 0x015A90;
  constexpr uint16_t HourGlassesWidth  = 19;
  constexpr uint16_t HourGlassesHeight = 23;
  constexpr uint8_t  HourGlassesFrames = 6;

  constexpr uint24_t Menu = 0x015D40;
  constexpr uint16_t MenuWidth  = 42;
  constexpr uint16_t MenuHeight = 64;
  constexpr uint8_t  MenuFrames = 5;

  constexpr uint24_t Sword_Cursor = 0x0163D4;
  constexpr uint16_t Sword_Cursor_width  = 8;
  constexpr uint16_t Sword_Cursor_height = 10;

  constexpr uint24_t HUD_Backgrounds = 0x0163E8;
  constexpr uint16_t HUD_Backgrounds_width  = 8;
  constexpr uint16_t HUD_Backgrounds_height = 64;
  constexpr uint8_t  HUD_Backgrounds_frames = 3;

  constexpr uint24_t Numbers_Upright = 0x0164AC;
  constexpr uint16_t Numbers_Upright_width  = 7;
  constexpr uint16_t Numbers_Upright_height = 5;
  constexpr uint8_t  Numbers_Upright_frames = 60;

  constexpr uint24_t Numbers = 0x016654;
  constexpr uint16_t NumbersWidth  = 11;
  constexpr uint16_t NumbersHeight = 7;
  constexpr uint8_t  NumbersFrames = 60;

  constexpr uint24_t Numbers_Large = 0x0168EC;
  constexpr uint16_t Numbers_Large_width  = 22;
  constexpr uint16_t Numbers_Large_height = 14;
  constexpr uint8_t  Numbers_Large_frames = 60;

  constexpr uint24_t Numbers_Small = 0x017340;
  constexpr uint16_t Numbers_Small_width  = 5;
  constexpr uint16_t Numbers_Small_height = 7;
  constexpr uint8_t  Numbers_Small_frames = 100;

  constexpr uint24_t Numbers_Divider = 0x017538;
  constexpr uint16_t Numbers_Divider_width  = 4;
  constexpr uint16_t Numbers_Divider_height = 8;

  constexpr uint24_t Healths = 0x017540;
  constexpr uint16_t HealthsWidth  = 5;
  constexpr uint16_t HealthsHeight = 3;
  constexpr uint8_t  HealthsFrames = 2;

  constexpr uint24_t Sword_HUD = 0x01754E;
  constexpr uint16_t Sword_HUD_width  = 5;
  constexpr uint16_t Sword_HUD_height = 5;

  constexpr uint24_t Potion_Float_HUD = 0x017557;
  constexpr uint16_t Potion_Float_HUD_width  = 5;
  constexpr uint16_t Potion_Float_HUD_height = 5;

  constexpr uint24_t HighScore = 0x017560;
  constexpr uint16_t HighScoreWidth  = 52;
  constexpr uint16_t HighScoreHeight = 5;

  constexpr uint24_t Sword = 0x017598;
  constexpr uint16_t SwordWidth  = 14;
  constexpr uint16_t SwordHeight = 5;

  constexpr uint24_t Skeleton = 0x0175B8;
  constexpr uint16_t SkeletonWidth  = 15;
  constexpr uint16_t SkeletonHeight = 12;

  constexpr uint24_t Gates = 0x0175F8;
  constexpr uint16_t GatesWidth  = 9;
  constexpr uint16_t GatesHeight = 28;
  constexpr uint8_t  GatesFrames = 10;

  constexpr uint24_t Blades = 0x0178CC;
  constexpr uint16_t BladesWidth  = 9;
  constexpr uint16_t BladesHeight = 28;
  constexpr uint8_t  BladesFrames = 12;

  constexpr uint24_t ExitDoors = 0x017C30;
  constexpr uint16_t ExitDoorsWidth  = 25;
  constexpr uint16_t ExitDoorsHeight = 33;
  constexpr uint8_t  ExitDoorsFrames = 13;

  constexpr uint24_t Potions_Small = 0x01828D;
  constexpr uint16_t Potions_Small_width  = 6;
  constexpr uint16_t Potions_Small_height = 15;
  constexpr uint8_t  Potions_Small_frames = 2;

  constexpr uint24_t Potions_Large = 0x0182C1;
  constexpr uint16_t Potions_Large_width  = 6;
  constexpr uint16_t Potions_Large_height = 15;
  constexpr uint8_t  Potions_Large_frames = 2;

  constexpr uint24_t Potions_Poison = 0x0182F5;
  constexpr uint16_t Potions_Poison_width  = 6;
  constexpr uint16_t Potions_Poison_height = 15;
  constexpr uint8_t  Potions_Poison_frames = 6;

  constexpr uint24_t Potions_Float = 0x018389;
  constexpr uint16_t Potions_Float_width  = 6;
  constexpr uint16_t Potions_Float_height = 15;
  constexpr uint8_t  Potions_Float_frames = 7;

  constexpr uint24_t DecorativeDoor = 0x018435;
  constexpr uint16_t DecorativeDoorWidth  = 23;
  constexpr uint16_t DecorativeDoorHeight = 40;

  constexpr uint24_t CollapsedFloor = 0x0184AC;
  constexpr uint16_t CollapsedFloorWidth  = 21;
  constexpr uint16_t CollapsedFloorHeight = 13;

  constexpr uint24_t CollapsingFloors = 0x018504;
  constexpr uint16_t CollapsingFloorsWidth  = 21;
  constexpr uint16_t CollapsingFloorsHeight = 31;
  constexpr uint8_t  CollapsingFloorsFrames = 4;

  constexpr uint24_t FloorButtons_0and1 = 0x0187A8;
  constexpr uint16_t FloorButtons_0and1_width  = 21;
  constexpr uint16_t FloorButtons_0and1_height = 32;
  constexpr uint8_t  FloorButtons_0and1_frames = 4;

  constexpr uint24_t FloorButtons_2 = 0x018A4C;
  constexpr uint16_t FloorButtons_2_width  = 12;
  constexpr uint16_t FloorButtons_2_height = 31;
  constexpr uint8_t  FloorButtons_2_frames = 2;

  constexpr uint24_t Torches = 0x018B10;
  constexpr uint16_t TorchesWidth  = 3;
  constexpr uint16_t TorchesHeight = 11;
  constexpr uint8_t  TorchesFrames = 5;

  constexpr uint24_t Mirrors = 0x018B50;
  constexpr uint16_t MirrorsWidth  = 12;
  constexpr uint16_t MirrorsHeight = 31;
  constexpr uint8_t  MirrorsFrames = 2;

  constexpr uint24_t Spikes_FG_Full = 0x018BB4;
  constexpr uint16_t Spikes_FG_Full_width  = 19;
  constexpr uint16_t Spikes_FG_Full_height = 18;
  constexpr uint8_t  Spikes_FG_Full_frames = 5;

  constexpr uint24_t Spikes_BG_Full = 0x018DF2;
  constexpr uint16_t Spikes_BG_Full_width  = 19;
  constexpr uint16_t Spikes_BG_Full_height = 18;
  constexpr uint8_t  Spikes_BG_Full_frames = 5;

  constexpr uint24_t Spikes_FG_Half = 0x019030;
  constexpr uint16_t Spikes_FG_Half_width  = 11;
  constexpr uint16_t Spikes_FG_Half_height = 18;
  constexpr uint8_t  Spikes_FG_Half_frames = 5;

  constexpr uint24_t Spikes_BG_Half = 0x01917E;
  constexpr uint16_t Spikes_BG_Half_width  = 11;
  constexpr uint16_t Spikes_BG_Half_height = 18;
  constexpr uint8_t  Spikes_BG_Half_frames = 5;

  constexpr uint24_t Flashes = 0x0192CC;
  constexpr uint16_t FlashesWidth  = 22;
  constexpr uint16_t FlashesHeight = 20;
  constexpr uint8_t  FlashesFrames = 4;

  constexpr uint24_t Tiles_Dungeon = 0x0194E0;
  constexpr uint16_t Tiles_Dungeon_width  = 12;
  constexpr uint16_t Tiles_Dungeon_height = 31;
  constexpr uint8_t  Tiles_Dungeon_frames = 100;

  constexpr uint24_t Tile_Dungeon_97 = 0x01BA64;
  constexpr uint16_t Tile_Dungeon_97_width  = 21;
  constexpr uint16_t Tile_Dungeon_97_height = 31;

  constexpr uint24_t Tile_Dungeon_98 = 0x01BB10;
  constexpr uint16_t Tile_Dungeon_98_width  = 12;
  constexpr uint16_t Tile_Dungeon_98_height = 31;

  constexpr uint24_t Tiles_Dungeon_Torch = 0x01BB74;
  constexpr uint16_t Tiles_Dungeon_Torch_width  = 12;
  constexpr uint16_t Tiles_Dungeon_Torch_height = 31;
  constexpr uint8_t  Tiles_Dungeon_Torch_frames = 60;

  constexpr uint24_t Princess = 0x01D1F8;
  constexpr uint16_t PrincessWidth  = 32;
  constexpr uint16_t PrincessHeight = 32;
  constexpr uint8_t  PrincessFrames = 40;

  constexpr uint24_t Princess_Bounce = 0x01F9FC;
  constexpr uint16_t Princess_Bounce_width  = 48;
  constexpr uint16_t Princess_Bounce_height = 32;
  constexpr uint8_t  Princess_Bounce_frames = 20;

  constexpr uint24_t Hearts = 0x021800;
  constexpr uint16_t HeartsWidth  = 7;
  constexpr uint16_t HeartsHeight = 6;
  constexpr uint8_t  HeartsFrames = 4;

  constexpr uint24_t Jaffar = 0x021820;
  constexpr uint16_t JaffarWidth  = 32;
  constexpr uint16_t JaffarHeight = 32;
  constexpr uint8_t  JaffarFrames = 30;

  constexpr uint24_t Prince_Left = 0x023624;
  constexpr uint16_t Prince_Left_width  = 36;
  constexpr uint16_t Prince_Left_height = 36;
  constexpr uint8_t  Prince_Left_frames = 225;

  constexpr uint24_t Prince_Right = 0x037290;
  constexpr uint16_t Prince_Right_width  = 36;
  constexpr uint16_t Prince_Right_height = 36;
  constexpr uint8_t  Prince_Right_frames = 225;

  constexpr uint24_t Mirror_Right = 0x04AEFC;
  constexpr uint16_t Mirror_Right_width  = 36;
  constexpr uint16_t Mirror_Right_height = 36;
  constexpr uint8_t  Mirror_Right_frames = 225;

  constexpr uint24_t Mirror_Left = 0x05EB68;
  constexpr uint16_t Mirror_Left_width  = 36;
  constexpr uint16_t Mirror_Left_height = 36;
  constexpr uint8_t  Mirror_Left_frames = 225;

  constexpr uint24_t Enemy_Right = 0x0727D4;
  constexpr uint16_t Enemy_Right_width  = 36;
  constexpr uint16_t Enemy_Right_height = 36;
  constexpr uint8_t  Enemy_Right_frames = 225;

  constexpr uint24_t Enemy_Left = 0x086440;
  constexpr uint16_t Enemy_Left_width  = 36;
  constexpr uint16_t Enemy_Left_height = 36;
  constexpr uint8_t  Enemy_Left_frames = 225;

  constexpr uint24_t Skeleton_Right = 0x09A0AC;
  constexpr uint16_t Skeleton_Right_width  = 36;
  constexpr uint16_t Skeleton_Right_height = 36;
  constexpr uint8_t  Skeleton_Right_frames = 225;

  constexpr uint24_t Skeleton_Left = 0x0ADD18;
  constexpr uint16_t Skeleton_Left_width  = 36;
  constexpr uint16_t Skeleton_Left_height = 36;
  constexpr uint8_t  Skeleton_Left_frames = 225;

  constexpr uint24_t Invaders = 0x0C1984;
  constexpr uint16_t InvadersWidth  = 25;
  constexpr uint16_t InvadersHeight = 23;
  constexpr uint8_t  InvadersFrames = 18;

  constexpr uint24_t Barriers = 0x0C2414;
  constexpr uint16_t BarriersWidth  = 4;
  constexpr uint16_t BarriersHeight = 2;
  constexpr uint8_t  BarriersFrames = 16;

  constexpr uint24_t Barrier = 0x0C2498;
  constexpr uint16_t BarrierWidth  = 16;
  constexpr uint16_t BarrierHeight = 4;

  constexpr uint24_t Player = 0x0C24AC;
  constexpr uint16_t PlayerWidth  = 25;
  constexpr uint16_t PlayerHeight = 25;
  constexpr uint8_t  PlayerFrames = 5;

  constexpr uint24_t Bullet = 0x0C2898;
  constexpr uint16_t BulletWidth  = 1;
  constexpr uint16_t BulletHeight = 3;

  constexpr uint24_t HUD_Spaceship = 0x0C289D;
  constexpr uint16_t HUD_Spaceship_width  = 4;
  constexpr uint16_t HUD_Spaceship_height = 17;
  constexpr uint8_t  HUD_Spaceship_frames = 4;

  constexpr uint24_t Levels = 0x0C28D1;
  constexpr uint16_t LevelsWidth  = 57;
  constexpr uint16_t LevelsHeight = 13;
  constexpr uint8_t  LevelsFrames = 5;

}

namespace Constants
{
  constexpr uint24_t StanceToImageXRefFX = 0x0C2D49;
  constexpr uint24_t Stance_XYOffsetsFX = 0x0C3064;
}

namespace Constants
{
  constexpr uint24_t VertAdjustments = 0x0C3698;
  constexpr uint24_t Prince_ImageDetails = 0x0C372E;
}

constexpr uint24_t splashScreen_Frame = 0x0C3983;
constexpr uint24_t Title_Main_Game_PoP_Frame_NoHigh = 0x0C39A7;
constexpr uint24_t Title_Main_Game_PoA_Frame_NoHigh = 0x0C39C2;
constexpr uint24_t Title_Main_Game_PoP_Frame_WithHigh = 0x0C39DD;
constexpr uint24_t Title_Main_Game_PoA_Frame_WithHigh = 0x0C39F8;
constexpr uint24_t Title_Main_Credits_PoP_Frame_NoHigh = 0x0C3A13;
constexpr uint24_t Title_Main_Credits_PoA_Frame_NoHigh = 0x0C3A2E;
constexpr uint24_t Title_Main_Credits_PoP_Frame_WithHigh = 0x0C3A49;
constexpr uint24_t Title_Main_Credits_PoA_Frame_WithHigh = 0x0C3A64;
constexpr uint24_t Title_Main_High_PoP_Frame_WithHigh = 0x0C3A7F;
constexpr uint24_t Title_Main_High_PoA_Frame_WithHigh = 0x0C3A9A;
constexpr uint24_t Title_High_PoP_Frame = 0x0C3AB5;
constexpr uint24_t Title_High_PoA_Frame = 0x0C3B57;
constexpr uint24_t Invaders_HUD_frame = 0x0C3BF9;
constexpr uint24_t Title_Intro_PoP_Frame_NoHigh = 0x0C3C0B;
constexpr uint24_t Title_Intro_Last_PoP_Frame_NoHigh = 0x0C408B;
constexpr uint24_t Title_Intro_PoP_Frame_WithHigh = 0x0C409D;
constexpr uint24_t Title_Intro_Last_PoP_Frame_WithHigh = 0x0C451D;
constexpr uint24_t Title_Intro_PoA_Frame_NoHigh = 0x0C452F;
constexpr uint24_t Title_Intro_Last_PoA_Frame_NoHigh = 0x0C49AF;
constexpr uint24_t Title_Intro_PoA_Frame_WithHigh = 0x0C49C1;
constexpr uint24_t Title_Intro_Last_PoA_Frame_WithHigh = 0x0C4E41;
constexpr uint24_t Title_Main_PoP_Frame_NoHigh = 0x0C4E53;
constexpr uint24_t Title_Main_Last_PoP_Frame_NoFrame = 0x0C4FDF;
constexpr uint24_t Title_Main_PoP_Frame_WithHigh = 0x0C4FF1;
constexpr uint24_t Title_Main_Last_PoP_Frame_WithHigh = 0x0C517D;
constexpr uint24_t Title_Main_PoA_Frame_NoHigh = 0x0C518F;
constexpr uint24_t Title_Main_Last_PoA_Frame_NoFrame = 0x0C531B;
constexpr uint24_t Title_Main_PoA_Frame_WithHigh = 0x0C532D;
constexpr uint24_t Title_Main_Last_PoA_Frame_WithHigh = 0x0C54B9;
constexpr uint24_t Title_Credits_PoP_Frame = 0x0C54CB;
constexpr uint24_t Title_Credits_PoA_Frame = 0x0C8642;
constexpr uint24_t Title_TimeOut_PoP_Frame = 0x0CB7B9;
constexpr uint24_t Title_TimeOut_PoA_Frame = 0x0CE43B;
constexpr uint24_t Title_IntroGame_1A_Frame = 0x0D10BD;
constexpr uint24_t Title_CutScene_1_Frame = 0x0D1693;
constexpr uint24_t Title_IntroGame_1B_Frame = 0x0D4BA0;
constexpr uint24_t Title_CutScene_2_Frame = 0x0D5176;
constexpr uint24_t Title_CutScene_3_Frame = 0x0D65B6;
constexpr uint24_t Title_CutScene_4_Frame = 0x0D79F6;
constexpr uint24_t Title_CutScene_5_Frame = 0x0D8416;
constexpr uint24_t Title_CutScene_6_Frame = 0x0D999A;
constexpr uint24_t Title_CutScene_7_Frame = 0x0DC463;
constexpr uint24_t Title_CutScene_End_Frame = 0x0E1089;
constexpr uint24_t Title_IntroGame_End_PoP_Frame = 0x0E2AF9;
constexpr uint24_t Title_IntroGame_End_PoA_Frame = 0x0E3345;
constexpr uint24_t TitleFrameIndexTable = 0x0E3B91;
