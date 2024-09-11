modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms(pType, pBehavior);

  		pType.AddItemInHandsProfileIK("seis_AWM_base",
		"dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi",
		pBehavior, 
		"dz/anims/anm/player/ik/weapons/cz550.anm", 
		"dz/anims/anm/player/reloads/cz550/w_CZ550_states.anm");
		/* pType.AddItemInHandsProfileIK("seis_AWS",
		"dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi",
		pBehavior, 
		"dz/anims/anm/player/ik/weapons/cz550.anm", 
		"dz/anims/anm/player/reloads/cz550/w_CZ550_states.anm");
		pType.AddItemInHandsProfileIK("seis_AWP",
		"dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi",
		pBehavior, 
		"dz/anims/anm/player/ik/weapons/cz550.anm", 
		"dz/anims/anm/player/reloads/cz550/w_cz550_states.anm");
  		pType.AddItemInHandsProfileIK("seis_AWM",
		"dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi",
		pBehavior, 
		"dz/anims/anm/player/ik/weapons/cz550.anm", 
		"dz/anims/anm/player/reloads/cz550/w_CZ550_states.anm"); */
	};	
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);
        
		// magazine
        pType.AddItemInHandsProfileIK("seis_AWM_mag_308_10rnd",
		"dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi",
		pBehavior,
		"dz/anims/anm/player/ik/attachments/magazines/magazine_cz550.anm");
		
		pType.AddItemInHandsProfileIK("seis_AWM_mag_338_5rnd",
		"dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi",
		pBehavior,
		"dz/anims/anm/player/ik/attachments/magazines/magazine_cz550.anm");

		// ammo
		pType.AddItemInHandsProfileIK("seis_Ammo_338",
		"dz/anims/workspaces/player/player_main/player_main_1h.asi",
		pBehavior,
		"dz/anims/anm/player/ik/ammunition/9x39_LooseRounds.anm");
		// ammo box
		pType.AddItemInHandsProfileIK("seis_AmmoBox_338_10Rnd",
		"dz/anims/workspaces/player/player_main/player_main_1h.asi",
		pBehavior,
		"dz/anims/anm/player/ik/ammunition/308Win_20RoundBox.anm");
    };
};



