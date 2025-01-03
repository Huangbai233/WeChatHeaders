//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSMutableArray, NSString, WCCardAcceptCardInfo, WCCardBulkInfo, WCCardData, WCCardPkgMsg;

@protocol IWCCardPkgExt <NSObject>

@optional
- (void)onBanUpdateOfflineCode;
- (void)onGetUpdateOfflineCode:(int)arg1;
- (void)onEnterForeground;
- (void)onShareMyCard:(NSString *)arg1 Error:(int)arg2;
- (void)onWCCardTips;
- (void)onWCCardLayoutRedDotChanged;
- (void)onGetCardLayoutStop;
- (void)onGetCardLayout;
- (void)onGetCardsItemByTpInfo:(NSArray *)arg1 ErrCode:(int)arg2;
- (void)onImportBulkCard:(WCCardAcceptCardInfo *)arg1 errCode:(int)arg2;
- (void)onGetBulkInfo:(WCCardBulkInfo *)arg1 errCode:(int)arg2;
- (void)onGetBulkCard:(NSMutableArray *)arg1 errCode:(int)arg2;
- (void)onGetAvailableCardInfo:(NSString *)arg1 isEnd:(_Bool)arg2 buff:(NSData *)arg3 ErrCode:(int)arg4;
- (void)onWCCardMessageEntryTipChanged:(WCCardPkgMsg *)arg1;
- (void)onWCCardMessageUnreadCountChanged:(WCCardPkgMsg *)arg1;
- (void)onGetSerialNumberData:(NSDictionary *)arg1 ErrCode:(int)arg2;
- (void)onGetUsedStoreList:(NSArray *)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onGetUsedStoreList:(NSArray *)arg1 ErrCode:(int)arg2;
- (void)onRetrieveLocation:(int)arg1;
- (void)onSyncEnd:(_Bool)arg1;
- (void)onWCCardUpdate:(NSArray *)arg1;
- (void)onGetNextPageWCCardList:(NSArray *)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3 HasBatchGeting:(_Bool)arg4;
- (void)onGetFirstPageWCCardList:(NSArray *)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3 HasBatchGeting:(_Bool)arg4;
- (void)onDeleteCardIDList:(NSArray *)arg1 ErrCode:(int)arg2;
- (void)onGiftCard:(NSString *)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onGiftCard:(NSString *)arg1 ErrCode:(int)arg2;
- (void)onAcceptCard:(WCCardData *)arg1 ErrCode:(int)arg2 ErrMsg:(NSString *)arg3 EventID:(unsigned int)arg4;
- (void)onAcceptCard:(WCCardData *)arg1 ErrCode:(int)arg2 ErrMsg:(NSString *)arg3;
- (void)onGetCardData:(WCCardData *)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onGetCardData:(WCCardData *)arg1 ErrCode:(int)arg2;
@end

