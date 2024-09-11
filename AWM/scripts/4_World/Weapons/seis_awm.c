class seis_AWM_base : BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Winchester70Recoil(this);
	}
};

class seis_AWS : seis_AWM_base {};
class seis_AWS_orange : seis_AWS {};
class seis_AWS_oxblood : seis_AWS {};

class seis_AWP : seis_AWM_base {};
class seis_AWP_grey : seis_AWP {};

class seis_AWM: seis_AWM_base {};
class seis_AWM_black: seis_AWM {};
class seis_AWM_darkwood: seis_AWM {};