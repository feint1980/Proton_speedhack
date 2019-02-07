#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser006_GetHSteamUser(void *);
extern void cppISteamUser_SteamUser006_LogOn(void *, CSteamID);
extern void cppISteamUser_SteamUser006_LogOff(void *);
extern bool cppISteamUser_SteamUser006_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser006_GetSteamID(void *);
extern bool cppISteamUser_SteamUser006_SetRegistryString(void *, EConfigSubTree, const char *, const char *);
extern bool cppISteamUser_SteamUser006_GetRegistryString(void *, EConfigSubTree, const char *, char *, int);
extern bool cppISteamUser_SteamUser006_SetRegistryInt(void *, EConfigSubTree, const char *, int);
extern bool cppISteamUser_SteamUser006_GetRegistryInt(void *, EConfigSubTree, const char *, int *);
extern int cppISteamUser_SteamUser006_InitiateGameConnection(void *, void *, int, CSteamID, CGameID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser006_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser006_TrackAppUsageEvent(void *, CGameID, int, const char *);
#ifdef __cplusplus
}
#endif
