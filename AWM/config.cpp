class CfgPatches
{
	class seis_AWM
	{
		units[]={};
		weapons[]={seis_awm};
		magazines[] = {"seis_AWM_mag_338_5rnd"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Optics",
			"DZ_Weapons_Supports",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition"
		};
	};
};
class CfgMods
{
	class seis_awm
	{
		dir = "AWM";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "AWM OpenSource, CC-BY";
		credits = "Erhan Matur, Yevgen Avramenko, Tweaks";
		author = "Spaghettieis";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"AWM\scripts\4_World"};
			};

		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class seis_AWM_base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		animName="cz527";
		weight=4000;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		opticsFlare=0;
		winchesterTypeOpticsMount=1;
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic",
			"ACOGOptic_6x",
			"ACOGOptic"
		};
		WeaponLength=1.1;
		barrelArmor=2.2;
		initSpeedMultiplier=1.15;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_CZ550_10rnd",
			"seis_AWM_mag_308_10rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,1.2};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"Win_Shot_SoundSet",
				"Win_Tail_SoundSet",
				"Win_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Win_silencerHomeMade_SoundSet",
					"Win_silencerHomeMadeTail_SoundSet",
					"Win_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_Winchester";
			recoilProne="recoil_Winchester_prone";
			dispersion=0.00050000002;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=200;
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,-0.02,-0.029999999};
				orientation[]={0,-30,0};
			};
			class Melee
			{
				position[]={0,-0.029999999,0.02};
				orientation[]={0,30,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_cz527_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=1;
				shotsToStartOverheating=1;
				overheatingDecayInterval=0.5;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0.1,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\cz550\w_cz550_states.anm";
	};
	class seis_AWS: seis_AWM_base
	{
		scope=2;
		displayName="AWS";
		descriptionShort="#STR_AWS_DESC"; //The Arctic Warfare Suppressed (AWS) is specifically designed for use with subsonic ammunition which, depending on the target, gives an effective maximum range of around 300 metres. Its noise levels are similar to those generated by .22 LR match ammunition. The weapon is fitted with a special .308 Winchester long barrel and has been modified to also accept CR-550 Savanna magazines.";
		model="AWM\data\seis_awm.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"weaponOptics"
		};
		itemSize[]={10,3};
		hiddenSelectionsTextures[]=
		{
			"AWM\data\seis_awm_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"AWM\data\seis_awm.rvmat"
		};
		modes[]=
		{
			"Single"
		};

		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"Ruger1022_Shot_SoundSet",
				"Ruger1022_Tail_SoundSet",
				"Ruger1022_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Ruger1022_silencerHomeMade_SoundSet",
					"Ruger1022_silencerHomeMadeTail_SoundSet",
					"Ruger1022_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_Winchester";
			recoilProne="recoil_Winchester_prone";
			dispersion=0.00050000002;
			magazineSlot="magazine";
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"AWM\data\seis_awm_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class seis_AWS_orange: seis_AWS
	{
		hiddenSelectionsTextures[]=
		{
			"AWM\data\seis_awm_orange_co.paa"
		};
	};
	class seis_AWS_oxblood: seis_AWS
	{
		hiddenSelectionsTextures[]=
		{
			"AWM\data\seis_awm_oxblood_co.paa"
		};
	};
	
	class seis_AWP: seis_AWM_base
	{
		scope=2;
		displayName="AWP";
		descriptionShort="#STR_AWP_DESC"; //The AWP is a version intended for use by law enforcement as opposed to military, with AWP standing for Arctic Warfare Police. The most notable feature is that the distinctive frame is dark blue instead of light green. It also has a shorter 24 in (610 mm) barrel than the AW model. This AWP is chambered for .308 Winchester and has slightly reduced recoil. It can be fitted with a standardized (Nato) suppressor. ";
		model="AWM\data\seis_awm.p3d";
		attachments[]=
		{
			"weaponOptics",
			"weaponMuzzleM4"
		};
		itemSize[]={10,3};
		hiddenSelectionsTextures[]=
		{
			"AWM\data\seis_awm_police_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"AWM\data\seis_awm.rvmat"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"Win_Shot_SoundSet",
				"Win_Tail_SoundSet",
				"Win_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Win_silencerHomeMade_SoundSet",
					"Win_silencerHomeMadeTail_SoundSet",
					"Win_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_scout";
			recoilProne="recoil_scout_prone";
			dispersion=0.00050000002;
			magazineSlot="magazine";
		};
		recoil="recoil_scout";
		recoilProne="recoil_scout_prone";

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"AWM\data\seis_awm_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	
	class seis_AWP_grey: seis_AWP
	{
		hiddenSelectionsTextures[]=
		{
			"AWM\data\seis_awm_grey_co.paa"
		};
	};
	class seis_AWM: seis_AWM_base
	{
		scope=2;
		displayName="AWM";
		descriptionShort="#STR_AWM_DESC"; //The AWM (Arctic Warfare Magnum) is a bolt-action sniper rifle manufactured by Accuracy International designed for .338 Lapua magnum rifle cartridges. ";
		model="AWM\data\seis_awm.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
		itemSize[]={10,3};
		initSpeedMultiplier=1.25;
		chamberableFrom[]=
		{
			"seis_Ammo_338",
			"Arzzz_Ammo_338",		//Arzz Weapons
			"Ammo_AE338",         	//AmmunitionExpansion
			"SNAFU_Ammo_338",		//SNAFU
			"TTC_Ammo_338",			//Morty´s Weapons
			"CPB_Ammo_338",			//[Remastered] Arma Weapon Pack
			"TWP_Ammo_338Lapua_Magnum" // Teddy´s Weapon Pack
		};
		magazines[]=
		{
			"seis_AWM_mag_338_5rnd",
			"TTC_338mag_5rnd",		//Morty´s Weapons
			"TTC_338mag_10rnd",
			"CPB_ASR338_Magazine",	//[Remastered] Arma Weapon Pack
			"TWP_ASW338_mag_5Rnd",	// Teddy´s Weapon Pack
			"TWP_AWM_mag_5Rnd"
			
		};
		hiddenSelectionsTextures[]=
		{
			"AWM\data\seis_awm_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"AWM\data\seis_awm.rvmat"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"AWM_Shot_SoundSet",
				"AWM_Shot_SoundSet",
				"AWM_Shot_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AWM_SilencedShot_SoundSet",
					"AWM_SilencedShot_SoundSet",
					"AWM_SilencedShot_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_Winchester";
			recoilProne="recoil_Winchester_prone";
			dispersion=0.00050000002;
			magazineSlot="magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"AWM\data\seis_awm_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	
	class seis_AWM_black: seis_AWM
	{
		hiddenSelectionsTextures[]=
		{
			"AWM\data\seis_awm_black_co.paa"
		};
	};
	class seis_AWM_darkwood: seis_AWM
	{
		hiddenSelectionsTextures[]=
		{
			"AWM\data\seis_awm_darkwood_co.paa"
		};
	};
	

	
	
};
class cfgVehicles
{
	// Ammo box
	class Box_Base;
	//class AmmoBox_308Win_20Rnd;
	class seis_AmmoBox_338_10Rnd: Box_Base
	{
		scope=2;
		displayName="Ammo 10rnd .338 Lapua Magnum";
		descriptionShort="#STR_AmmoBox_338_10Rnd_DESC";
		model="\dz\weapons\ammunition\762_20roundbox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=450;
		lootCategory = "Ammo";
		hiddenSelections[]=
		{
			"zbytek",
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"AWM\data\ammo\338\data\seis_338_box_co.paa",
			"AWM\data\ammo\338\data\seis_338_box_co.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{1,{"DZ\weapons\ammunition\data\762_box.rvmat"}},
						{0.69999999,{"DZ\weapons\ammunition\data\762_box.rvmat"}},
						{0.5,{"DZ\weapons\ammunition\data\762_box_damage.rvmat"}},
						{0.30000001,{"DZ\weapons\ammunition\data\762_box_damage.rvmat"}},
						{0,{"DZ\weapons\ammunition\data\762_box_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class seis_Ammo_338
			{
				value=10;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
	
};

	
class CfgAmmo
{
	class Bullet_Base;
	class seis_Bullet_338: Bullet_Base
	{
		scope=2;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="seis_Ammo_338";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=900;
		typicalSpeed=940;
		tracerScale=1.2;
		tracerStartTime=-1;
		tracerEndTime=1;
		airFriction=-0.001;
		caliber=1;
		deflecting=10;
		damageBarrel=500;					// this should be higher, but then barrel armor would
		// also have to increase. It´s simpler to pattern this on .308Win ammo/rifles
		damageBarrelDestroyed=500;
		impactBehaviour=1;
		hitAnimation=1;
		unconRefillModifier=2.75;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 4;

		weight = 0.045;  //45g
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage = 500; 		//bear has 800hp, 250 in the head, so 300 should be enough for a headshot. - But was not. Try 350 ... 
				// much later: 450 is not enough apparently.
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};





};
class CfgMagazines
{
	class Ammunition_Base;
	class seis_Ammo_338: Ammunition_Base
	{
		scope = 2;
		displayName = ".338 Lapua Magnum Rounds";
		descriptionShort = "#STR_Ammo_338_DESC"; //The .338 Lapua Magnum is a rimless, bottlenecked, centerfire rifle cartridge. It was developed during the 1980s as a high-powered, long-range cartridge for military snipers.";
		model = "AWM\data\ammo\338\data\ammo_338.p3d";
		weight=45;
		count = 10;
		ammo = "seis_Bullet_338";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {
						{1.0,{"AWM\data\ammo\338\data\ammo_338.rvmat"}},
						{0.7,{"AWM\data\ammo\338\data\ammo_338.rvmat"}},
						{0.5,{"AWM\data\ammo\338\data\ammo_338_damage.rvmat"}},
						{0.3,{"AWM\data\ammo\338\data\ammo_338_damage.rvmat"}},
						{0.0,{"AWM\data\ammo\338\data\ammo_338_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_CZ550_10rnd;
	class seis_AWM_mag_308_10rnd: Mag_CZ550_10rnd
	{
		scope = 2;
		displayName = "10rnd AW mag";
		descriptionShort = "#STR_AWM_mag_308_10rnd"; //10 round .308 magazine for Arctic Warfare rifles";
		model = "AWM\data\seis_awm_mag.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 10;
		ammo = "Bullet_308Win";
		ammoItems[] = {
			"Ammo_308Win",
			"Ammo_308WinTracer"
			};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
						healthLevels[]=
					{
						
						{
							1,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"AWM\data\seis_awm_destruct.rvmat"
							}
						}
					};
				
				};
			};
		};
	};
	class seis_AWM_mag_338_5rnd: Mag_CZ550_10rnd
	{
		scope = 2;
		displayName = "5rnd AWM mag";
		descriptionShort = "#STR_AWM_mag_338_5rnd"; // 5 round .338 Lapua Magnum magazine for Arctic Warfare Magnum rifles";
		model = "\AWM\data\seis_awm_mag.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 5;
		ammo = "seis_Bullet_338";
		ammoItems[] = {
			"seis_Ammo_338"
			};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
						healthLevels[]=
					{
						
						{
							1,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"AWM\data\seis_awm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"AWM\data\seis_awm_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"AWM\data\seis_awm_destruct.rvmat"
							}
						}
					};
				
				};
			};
		};
	};

};

class cfgAmmoTypes
{
	class AType_seis_Bullet_338
	{
		name = "seis_Bullet_338";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyseis_awm_mag: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "AWM\data\seis_awm_mag.p3d";
	};

};

