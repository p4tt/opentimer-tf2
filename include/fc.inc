#if defined _fc_included
  #endinput
#endif
#define _fc_included

//Natives
/**
 * Set Bunny Hopping for client(s).
 *
 * @param client			Client to set bunny hopping.
 * @param enabled		Bool value for status: (1 = Enabled, 0 = Disabled)
 * @param lazymode		Bool value for lazy mode: (1 = Hold Space bar, 0 = Don't hold Space bar)
 * @param multi			Float value for horizontal velocity.
 * @param zmulti			Float value for vertical velocity.
 **/
native FC_SetBhop(client, bool:enabled = false, bool:lazymode = false, Float:multi = 0.0, Float:zmulti = 0.0);

/**
 * Set Bunny Hopping for client(s).
 *
 * @param client			Client to check for bunny hopping.
 *
 * @return				True if enabled, false otherwise.
 * @error				Invalid client or fields.
 **/
native FC_BhopStatus(client);

public SharedPlugin:__pl_fc = 
{
	name = "fc",
	file = "fc.smx",
#if defined REQUIRE_PLUGIN
	required = 0,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public __pl_fc_SetNTVOptional()
{
	MarkNativeAsOptional("FC_SetBhop");
	MarkNativeAsOptional("FC_BhopStatus");
}
#endif