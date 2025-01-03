//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@interface LinkSpreadUtil
{
}

+ (void)reportAdPageExposureLogWithScene:(unsigned int)arg1 andStatisticsExtInfo:(id)arg2 andAppMediaUrl:(id)arg3 msgContent:(id)arg4;
+ (void)adPageExposureFromTimeLine:(id)arg1;
+ (void)adPageExposureFromMessage:(id)arg1 chatUserName:(id)arg2;
+ (void)adVideoSpread:(id)arg1 sourcePublishId:(id)arg2 sourceAdUxInfo:(id)arg3 statExtStr:(id)arg4;
+ (void)adVideoReport:(unsigned int)arg1 logExt:(id)arg2;
+ (void)adVideoSpreadFromTimeLine:(id)arg1 videoStatus:(unsigned int)arg2 sourceType:(unsigned int)arg3 scene:(unsigned int)arg4 actionType:(unsigned int)arg5 shareToChatUserName:(id)arg6;
+ (void)adVideoSpreadFromMessage:(id)arg1 currMsgId:(id)arg2 videoStatus:(unsigned int)arg3 sourceType:(unsigned int)arg4 actionType:(unsigned int)arg5 chatUserName:(id)arg6 shareToChatUserName:(id)arg7;
+ (void)adVideoSpreadFromMessage:(id)arg1 videoStatus:(unsigned int)arg2 sourceType:(unsigned int)arg3 actionType:(unsigned int)arg4 chatUserName:(id)arg5 shareToChatUserName:(id)arg6;
+ (unsigned int)getActionTypeWithShareToUserName:(id)arg1;
+ (void)onAdVideoStateChange:(unsigned int)arg1;
+ (void)adVideoClickFromTimeLine:(id)arg1 videoStatus:(unsigned int)arg2 sourceType:(unsigned int)arg3 scene:(unsigned int)arg4 destination:(unsigned int)arg5 actionType:(unsigned int)arg6;
+ (void)adVideoClickFromMessage:(id)arg1 videoStatus:(unsigned int)arg2 sourceType:(unsigned int)arg3 actionType:(unsigned int)arg4 destination:(unsigned int)arg5 chatUserName:(id)arg6;
+ (void)adVideoExposureFromTimeLine:(id)arg1 sourceType:(unsigned int)arg2 isAutoPlay:(unsigned int)arg3 fromScene:(unsigned int)arg4;
+ (void)adVideoExposureFromMessage:(id)arg1 chatUserName:(id)arg2 sourceType:(unsigned int)arg3 isAutoPlay:(unsigned int)arg4;
+ (id)getAdUxInfoWithDataItem:(id)arg1;
+ (id)getPublishIdWithDataItem:(id)arg1;
+ (unsigned int)getChatMemberCount:(id)arg1;
+ (unsigned int)getFromScene:(id)arg1;
+ (void)logWebViewLoad:(unsigned int)arg1 costTime:(unsigned int)arg2 url:(id)arg3 isSuccess:(_Bool)arg4 getA8KeyScene:(unsigned int)arg5 webViewExtralInfo:(id)arg6;
+ (int)getStatSessionTypeWithUserName:(id)arg1;
+ (void)logViewWebView:(id)arg1 getA8KeyScene:(unsigned int)arg2 enterTime:(unsigned int)arg3 stayTimeInMS:(unsigned long long)arg4 adId:(id)arg5 appId:(id)arg6 referUrl:(id)arg7 webViewTitle:(id)arg8 webViewDesc:(id)arg9 urlList:(id)arg10;
+ (id)getAdStatExtLogStr:(id)arg1;
+ (void)logLinkSpead:(id)arg1 currId:(id)arg2 preUserName:(id)arg3 preChatUserName:(id)arg4 currUrl:(id)arg5 preMsgIndex:(unsigned int)arg6 getA8KeyScene:(unsigned int)arg7 referUrl:(id)arg8 statExtStr:(id)arg9 title:(id)arg10 appId:(id)arg11 desc:(id)arg12;
+ (void)logLinkSpead:(id)arg1 currId:(id)arg2 preUserName:(id)arg3 preChatUserName:(id)arg4 currUrl:(id)arg5 preMsgIndex:(unsigned int)arg6 currChatName:(id)arg7 currChatTitle:(id)arg8 currChatMemberCount:(unsigned int)arg9 sendAppMsgScene:(unsigned int)arg10 getA8KeyScene:(unsigned int)arg11 referUrl:(id)arg12 statExtStr:(id)arg13 title:(id)arg14 appId:(id)arg15 desc:(id)arg16;
+ (void)openRealTimeReport;
+ (id)getFromSceneForSendAppMsg:(id)arg1 statExtStr:(id)arg2;
+ (void)logLinkSpead:(id)arg1;
+ (id)getDicStatParas:(id)arg1 currUrl:(id)arg2 preMsgIndex:(unsigned int)arg3 sendMsgScene:(int)arg4;

@end

