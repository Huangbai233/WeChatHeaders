//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AppRegisterInfo : NSObject
{
    _Bool needUpdateInfo;
    _Bool needUpdateIcon;
    _Bool needUpdateWatermark;
    _Bool appAddedByUser;
    _Bool appCanShowNew;
    _Bool isNewApp;
    _Bool isAppIconUrlChanged;
    _Bool isAppWatermarkUrlChanged;
    unsigned int lastUpdateInfoTime;
    unsigned int lastUpdateWatermarkTime;
    unsigned int lastUpdateIconTime;
    unsigned int appInfoFlag;
    unsigned int appUpdateVersion;
    unsigned int nextUpdateInfoTime;
    unsigned int rankWeight;
    unsigned int uiShowInShareList;
    unsigned long long appInfoVer;
    NSString *appName;
    NSString *appName4ZhTw;
    NSString *appName4EnUs;
    NSString *appID;
    NSString *appIdentifier;
    NSString *appDescription;
    NSString *appDescription4ZhTw;
    NSString *appDescription4EnUs;
    NSString *appInstallUrl;
    NSString *appIconUrl;
    NSString *appWatermarkUrl;
    NSString *appTypeList;
    NSString *appDevInfo;
    NSString *appDownloadUrl;
    NSString *appDownloadUrlMD5;
    NSMutableDictionary *dicShowInShareListSeq;
    unsigned long long appSupportContentType;
    unsigned long long appSupportContentTypeBy3rdApp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAppWatermarkUrlChanged; // @synthesize isAppWatermarkUrlChanged;
@property(nonatomic) _Bool isAppIconUrlChanged; // @synthesize isAppIconUrlChanged;
@property(nonatomic) unsigned long long appSupportContentTypeBy3rdApp; // @synthesize appSupportContentTypeBy3rdApp;
@property(nonatomic) unsigned long long appSupportContentType; // @synthesize appSupportContentType;
@property(nonatomic) unsigned int uiShowInShareList; // @synthesize uiShowInShareList;
@property(retain, nonatomic) NSMutableDictionary *dicShowInShareListSeq; // @synthesize dicShowInShareListSeq;
@property(nonatomic) unsigned int rankWeight; // @synthesize rankWeight;
@property(nonatomic) unsigned int nextUpdateInfoTime; // @synthesize nextUpdateInfoTime;
@property(retain, nonatomic) NSString *appDownloadUrlMD5; // @synthesize appDownloadUrlMD5;
@property(retain, nonatomic) NSString *appDownloadUrl; // @synthesize appDownloadUrl;
@property(nonatomic) _Bool isNewApp; // @synthesize isNewApp;
@property(nonatomic) _Bool appCanShowNew; // @synthesize appCanShowNew;
@property(nonatomic) unsigned int appUpdateVersion; // @synthesize appUpdateVersion;
@property(nonatomic) unsigned int appInfoFlag; // @synthesize appInfoFlag;
@property(retain, nonatomic) NSString *appDevInfo; // @synthesize appDevInfo;
@property(retain, nonatomic) NSString *appTypeList; // @synthesize appTypeList;
@property(nonatomic) unsigned int lastUpdateIconTime; // @synthesize lastUpdateIconTime;
@property(nonatomic) unsigned int lastUpdateWatermarkTime; // @synthesize lastUpdateWatermarkTime;
@property(nonatomic) unsigned int lastUpdateInfoTime; // @synthesize lastUpdateInfoTime;
@property(retain, nonatomic) NSString *appWatermarkUrl; // @synthesize appWatermarkUrl;
@property(retain, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl;
@property(retain, nonatomic) NSString *appInstallUrl; // @synthesize appInstallUrl;
@property(retain, nonatomic) NSString *appDescription4EnUs; // @synthesize appDescription4EnUs;
@property(retain, nonatomic) NSString *appDescription4ZhTw; // @synthesize appDescription4ZhTw;
@property(retain, nonatomic) NSString *appDescription; // @synthesize appDescription;
@property(nonatomic) _Bool appAddedByUser; // @synthesize appAddedByUser;
@property(nonatomic) _Bool needUpdateWatermark; // @synthesize needUpdateWatermark;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *appName4EnUs; // @synthesize appName4EnUs;
@property(retain, nonatomic) NSString *appName4ZhTw; // @synthesize appName4ZhTw;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(nonatomic) _Bool needUpdateIcon; // @synthesize needUpdateIcon;
@property(nonatomic) _Bool needUpdateInfo; // @synthesize needUpdateInfo;
@property(nonatomic) unsigned long long appInfoVer; // @synthesize appInfoVer;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

