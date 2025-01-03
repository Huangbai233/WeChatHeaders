//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NewUserGuideConfig;

@interface NewUserGuideLogic : NSObject
{
    NSMutableDictionary *m_dicCurrentTips;
    NewUserGuideConfig *m_config;
}

+ (id)shareLogic;
+ (void)removeNewUserGuide;
+ (void)loadNewUserGuide;
+ (void)createNewUserGuide;
+ (void)setReg;
+ (void)saveConfig:(id)arg1;
+ (void)removeConfig;
+ (id)loadConfig;
+ (id)getConfigPath;
- (void).cxx_destruct;
- (void)removeVoipAndPhoneTip:(_Bool)arg1;
- (void)showVoipAndPhoneTip:(id)arg1 frame:(struct CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)removeVoiceTip:(_Bool)arg1;
- (void)showVoiceTip:(id)arg1 frame:(struct CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)removeContactsTip:(_Bool)arg1;
- (void)showContactsTip:(id)arg1 frame:(struct CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)removeMainFrameTip:(_Bool)arg1;
- (void)showMainFrameTip:(id)arg1 frame:(struct CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (id)makeTip:(id)arg1 Left:(_Bool)arg2 Top:(_Bool)arg3 closeSel:(SEL)arg4 target:(id)arg5;
- (void)makeAnimate:(id)arg1;
- (_Bool)checkEnd;
- (_Bool)existTip:(unsigned long long)arg1;
- (void)removeTip:(unsigned long long)arg1;
- (id)initWithConfig:(id)arg1;
- (id)getConfig;
- (void)removeNearByRedDot;
- (_Bool)showNearByRedDot;
- (void)removeShakeRedDot;
- (_Bool)showShakeRedDot;

@end

