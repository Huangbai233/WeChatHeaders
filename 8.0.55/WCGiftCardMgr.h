//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCCardCDNDownloadHelper;

@interface WCGiftCardMgr
{
    NSMutableDictionary *_successDic;
    NSMutableDictionary *_failureDic;
    WCCardCDNDownloadHelper *_helper;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (id)sourceTempPath;
+ (id)sourceLocalPath;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCardCDNDownloadHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) NSMutableDictionary *failureDic; // @synthesize failureDic=_failureDic;
@property(retain, nonatomic) NSMutableDictionary *successDic; // @synthesize successDic=_successDic;
- (id)handleGiftCard:(id)arg1;
- (id)handleAccept:(id)arg1;
- (id)handlePreAccept:(id)arg1;
- (id)giftFileTempPathByFileName:(id)arg1;
- (id)giftFilePathByFileName:(id)arg1;
- (void)uploadKVByType:(long long)arg1 orderId:(id)arg2 BizUin:(unsigned int)arg3 giftUserName:(id)arg4;
- (void)getPicbyUrl:(id)arg1 aeskey:(id)arg2 length:(unsigned int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)getVideoByUrl:(id)arg1 aesKey:(id)arg2 length:(unsigned int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelAllGiftCardCgi;
- (void)getGiftCardWithBizUin:(unsigned int)arg1 orderId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)acceptGiftCardWithBizUin:(unsigned int)arg1 orderId:(id)arg2 chatroomName:(id)arg3 doNotAccept:(_Bool)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)preAcceptGiftCardWithBizUin:(unsigned int)arg1 orderId:(id)arg2 chatroomName:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

