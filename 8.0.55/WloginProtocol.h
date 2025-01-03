//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WloginPkgHead;

@interface WloginProtocol : NSObject
{
    WloginPkgHead *pkgHead;
    NSMutableDictionary *basicInfoTlvList;
    unsigned int dwSrcSigAppid;
    unsigned int dwSrcSigSubAppid;
    unsigned int dwDstSigAppid;
    unsigned int dwDstSigSubAppid;
    NSMutableDictionary *reslutSigTlvList;
    char sKey[16];
    char A1_Key[16];
    CDStruct_e485254d stRetValue;
}

@property(readonly) NSMutableDictionary *reslutSigTlvList; // @synthesize reslutSigTlvList;
- (unsigned int)pkgHeadUin;
- (void)setPkgHeadUin:(unsigned int)arg1;
- (_Bool)genEncryptBody_0x144:(id)arg1 subCmd:(unsigned short)arg2;
- (_Bool)genTGTGTbyPasswd:(const char *)arg1 andUin:(unsigned int)arg2 andFlag:(int)arg3 outTGTGT:(id)arg4;
- (void)setSrcAppid:(unsigned int)arg1 andSrcSubAppid:(unsigned int)arg2 andDstAppid:(unsigned int)arg3 andDstSubAppid:(unsigned int)arg4;
- (_Bool)decodeTlvList:(const char *)arg1 andLeftLen:(int *)arg2;
- (id)sigTlvDictByTag:(unsigned short)arg1;
- (id)basicTlvByTag:(unsigned short)arg1;
- (_Bool)addBasicTlv:(id)arg1;
- (CDStruct_e485254d *)resolveSvrPkg:(id)arg1;
- (void)recvPkgError;
- (int)exchangeSig:(id)arg1 retData:(id)arg2;
- (int)refreshPic:(id)arg1;
- (int)checkPic:(id)arg1;
- (int)loginWithPasswd:(id)arg1 retData:(id)arg2;
- (void)dealloc;
- (_Bool)resetProtocol;
- (id)initWithClientVer:(unsigned short)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3;

@end

