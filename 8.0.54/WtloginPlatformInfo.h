//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class MemSig, NSData, NSMutableDictionary, NSString, RemortServerList, SafeSingleItemWrapper;

@interface WtloginPlatformInfo : NSObject
{
    NSString *macAddr;
    NSString *ipStr;
    unsigned int clientIp;
    NSString *devType;
    NSString *iosVer;
    NSString *osName;
    char *if_names[32];
    char *ip_names[32];
    char *hw_addrs[32];
    unsigned long long ip_addrs[32];
    int nextAddr;
    NSString *filePath;
    NSMutableDictionary *wtloginConfigDic;
    NSData *guid;
    unsigned char cIsNew;
    unsigned char cIsDiff;
    unsigned char cIsGetGuid;
    unsigned char cGUIDSrc;
    unsigned char cReadFailFlag;
    unsigned char cDevChgFlag;
    SafeSingleItemWrapper *ksidWrapper;
    MemSig *deviceSig;
    unsigned int dwMyVer;
    unsigned int dwMyPubNo;
    unsigned int dwMyClientType;
    NSString *sigFilePath;
    NSMutableDictionary *sigDictionary;
    RemortServerList *stServerinfo;
    NSString *wtloginIosSdkVer;
    NSString *wtloginBuildTime;
    unsigned int wtloginBigVer;
    int dwDiffTime;
    unsigned int dwClientIP;
}

+ (id)wtloginCrtCarrierName;
+ (int)wtloginNetState;
+ (id)dataSafeFilePathWithName:(id)arg1;
@property unsigned int dwClientIP; // @synthesize dwClientIP;
@property int dwDiffTime; // @synthesize dwDiffTime;
@property(readonly) NSString *wtloginBuildTime; // @synthesize wtloginBuildTime;
@property(readonly) unsigned int wtloginBigVer; // @synthesize wtloginBigVer;
@property(readonly) NSString *wtloginIosSdkVer; // @synthesize wtloginIosSdkVer;
@property(readonly) RemortServerList *stServerinfo; // @synthesize stServerinfo;
@property(readonly) NSMutableDictionary *sigDictionary; // @synthesize sigDictionary;
@property unsigned int dwMyClientType; // @synthesize dwMyClientType;
@property unsigned int dwMyPubNo; // @synthesize dwMyPubNo;
@property unsigned int dwMyVer; // @synthesize dwMyVer;
@property(retain) MemSig *deviceSig; // @synthesize deviceSig;
@property(readonly) unsigned char cDevChgFlag; // @synthesize cDevChgFlag;
@property(readonly) unsigned char cReadFailFlag; // @synthesize cReadFailFlag;
@property(readonly) unsigned char cGUIDSrc; // @synthesize cGUIDSrc;
@property(readonly) unsigned char cIsGetGuid; // @synthesize cIsGetGuid;
@property(readonly) unsigned char cIsDiff; // @synthesize cIsDiff;
@property(readonly) unsigned char cIsNew; // @synthesize cIsNew;
@property(readonly) NSData *guid; // @synthesize guid;
@property(readonly) NSString *osName; // @synthesize osName;
@property(readonly) unsigned int clientIp; // @synthesize clientIp;
@property(readonly) NSString *macAddr; // @synthesize macAddr;
@property(readonly) NSString *devType; // @synthesize devType;
@property(readonly) NSString *iosVer; // @synthesize iosVer;
@property(readonly) NSString *ipStr; // @synthesize ipStr;
- (void)_checkDevice;
- (void)writeSigDataTofile;
- (id)appMainBundleIndentify;
- (id)appBundleVersion;
- (id)appBundleShortVersionString;
- (id)lastLoginAppVer;
- (id)lastLoginSdkVer;
- (unsigned int)lastLoginTime;
- (_Bool)resetLastLoginInfo;
- (unsigned int)sigVailidateBySigType:(unsigned int)arg1;
- (_Bool)setSigVailidateTime:(unsigned int)arg1 bySigType:(unsigned int)arg2;
- (void)clearNameToUin:(id)arg1;
- (_Bool)setNameToConfig:(id)arg1 forUin:(unsigned int)arg2;
@property(readonly) NSMutableDictionary *nameDictionary;
- (void)clearPwdSigUser:(unsigned int)arg1;
- (id)pwdSigUser:(unsigned int)arg1;
- (_Bool)setSavePwdSigToConfig:(id)arg1 forAccount:(unsigned int)arg2;
- (void)resetKeyChain;
- (id)ksidForUser:(id)arg1;
- (_Bool)setKsidToConfig:(id)arg1 forAccount:(id)arg2;
- (_Bool)setKsidToKeyChain:(id)arg1;
- (id)ksidFromKeyChain;
- (id)tgtgtKeyFromKeyChain;
- (id)crtCarrierName;
- (int)netState;
- (void)setConfigObject:(id)arg1 forKey:(id)arg2;
- (id)configObjectForKey:(id)arg1;
- (void)dealloc;
- (void)wtloginPlatformDataInit;
- (id)init;
- (_Bool)tryDecrypt:(id)arg1 byKey:(id)arg2 andOutData:(id)arg3;
- (id)getDeviceVersion;
- (void)genGuid;
- (id)macaddress;
- (void)GetHWAddresses;
- (void)GetIPAddresses;
- (void)FreeAddresses;
- (void)InitAddresses;

@end

