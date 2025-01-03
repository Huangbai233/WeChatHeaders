//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableDictionary, NSString, UIViewController;

@interface MMURLHandler
{
    UIViewController *m_viewController;
    NSMutableDictionary *m_urlToViewController;
    NSMutableDictionary *m_urlToBackupURL;
    NSString *m_url;
    unsigned int m_urlPermittedSet;
    _Bool m_bPresentViewController;
    _Bool m_isDisableShare;
    _Bool m_disalbeStartLoadGetA8Key;
    _Bool m_isShouldShowGoBackBtn;
    _Bool _m_bOpenInNewWindow;
    _Bool _m_shouldShowDomain;
    _Bool _isShowingSaftyTips;
    int m_urlSource;
    NSDictionary *_extraInfo;
}

+ (_Bool)canHandleNativeUrl:(id)arg1;
+ (id)grepSMSNumberAndBody:(id)arg1;
+ (id)grepAppStoreIDFromUrl:(id)arg1;
+ (id)grepTextNumber:(id)arg1;
+ (id)grepPhoneNumber:(id)arg1;
+ (id)grepString:(id)arg1 withRegex:(id)arg2;
+ (_Bool)containsProtocalHead:(id)arg1;
+ (_Bool)containsApplePodcastsLinkString:(id)arg1;
+ (_Bool)containsAppMusicLinkString:(id)arg1;
+ (_Bool)containsAppStoreLinkString:(id)arg1;
+ (_Bool)containsTextLinkString:(id)arg1;
+ (_Bool)containsPhoneLinkString:(id)arg1;
+ (_Bool)containEmailString:(id)arg1;
+ (_Bool)containsMoaString:(id)arg1;
+ (_Bool)containsWXPayLinkString:(id)arg1;
+ (_Bool)containsWeixinString:(id)arg1;
+ (_Bool)containsLocalPathString:(id)arg1;
+ (_Bool)containsHTTPSString:(id)arg1;
+ (_Bool)containsHTTPString:(id)arg1;
+ (_Bool)containsString:(id)arg1 withRegex:(id)arg2;
+ (void)handleUrl:(id)arg1 withBackupURL:(id)arg2 withExtraInfo:(id)arg3;
+ (void)presentUrlWithoutShare:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool isShowingSaftyTips; // @synthesize isShowingSaftyTips=_isShowingSaftyTips;
@property(nonatomic) _Bool m_shouldShowDomain; // @synthesize m_shouldShowDomain=_m_shouldShowDomain;
@property(nonatomic) _Bool m_bOpenInNewWindow; // @synthesize m_bOpenInNewWindow=_m_bOpenInNewWindow;
@property(nonatomic) _Bool m_isShouldShowGoBackBtn; // @synthesize m_isShouldShowGoBackBtn;
@property(nonatomic) unsigned int m_urlPermittedSet; // @synthesize m_urlPermittedSet;
@property(nonatomic) int m_urlSource; // @synthesize m_urlSource;
@property(nonatomic) _Bool m_disalbeStartLoadGetA8Key; // @synthesize m_disalbeStartLoadGetA8Key;
@property(nonatomic) _Bool m_isDisableShare; // @synthesize m_isDisableShare;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(nonatomic) _Bool m_bPresentViewController; // @synthesize m_bPresentViewController;
@property(nonatomic) __weak UIViewController *m_viewController; // @synthesize m_viewController;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)nextFeedback:(id)arg1;
- (void)openRankMyHomepage;
- (void)openDeviceRankView;
- (void)openWeixinHB;
- (void)handleNativeUrl:(id)arg1 withViewController:(id)arg2;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendEmailTo:(id)arg1 withSubject:(id)arg2 withBody:(id)arg3;
- (void)writeEmailWithSystemMail;
- (void)writeEmailWithQQMail;
- (_Bool)isURLRegistered:(id)arg1;
- (void)handleURL:(id)arg1 withBackupURL:(id)arg2 withExtraInfo:(id)arg3;
- (id)handlePreviewURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)showConfirmAlertViewWithTitle:(id)arg1 andMessage:(id)arg2 url:(id)arg3;
- (void)handleOutterAppURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleSystemAppURL:(id)arg1;
- (void)handleInnerAppURL:(id)arg1;
- (void)handleInnerWXPayURL:(id)arg1 withExtraInfo:(id)arg2;
- (_Bool)isSystemAppURL:(id)arg1;
- (_Bool)isInnerAppURL:(id)arg1;
- (_Bool)isInnerWXPayURL:(id)arg1;
- (void)handleLocalResource:(id)arg1;
- (void)handleEmailURL:(id)arg1;
- (void)handleDeepLinkURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleHttpURL:(id)arg1 withExtraInfo:(id)arg2;
- (void)handleInnerJumpURL:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)showAlert:(id)arg1;
- (void)showAppStore;
- (id)showBlackList:(id)arg1;
- (id)openQQMailPlugin:(id)arg1;
- (id)constructSetHeaderImageViewController:(id)arg1;
- (id)constructContactInfoView:(id)arg1 withUserName:(id)arg2;
- (void)popViewController:(id)arg1;
- (id)getNavigationController;
- (id)getViewController;
- (id)init;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

