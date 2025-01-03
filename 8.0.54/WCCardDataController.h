//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, ShareMessageConfirmLogicHelper, WCCardConfigInfo;
@protocol WCCardDataControllerDelegate;

@interface WCCardDataController : NSObject
{
    NSMutableArray *_expiringList;
    NSMutableArray *_memberCardList;
    NSMutableArray *_nearbyList;
    NSMutableArray *_recentList;
    NSMutableArray *_layoutList;
    NSMutableArray *_layoutDisplayList;
    NSMutableArray *_cardList;
    NSMutableArray *_displayCardList;
    NSMutableArray *_emptyList;
    NSMutableArray *_invoiceCardList;
    NSMutableArray *_generalCardList;
    NSMutableArray *_sectionArr;
    unsigned int _curMinUpdateTime;
    _Bool _isDeleteHandling;
    _Bool _hasMoreData;
    _Bool _isReadyToLoad;
    _Bool _isNeedScrollToShareCard;
    WCCardConfigInfo *_configInfo;
    id <WCCardDataControllerDelegate> _delegate;
    ShareMessageConfirmLogicHelper *_SendAppMsgHelper;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReadyToLoad; // @synthesize isReadyToLoad=_isReadyToLoad;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) __weak id <WCCardDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadSvrRetEntryCellSubView:(id)arg1 indexPath:(id)arg2;
- (void)hanleCardPkgElementItemClickWithIndex:(long long)arg1;
- (id)getCardPkgElementWithIndex:(long long)arg1;
- (_Bool)hasSvrRetEntry;
- (id)getSvrRetEntryList;
- (void)scrollViewDidScroll:(id)arg1;
- (int)indexOfCardInLayoutDisplayList:(id)arg1;
- (int)indexOfCardInNormalCardList:(id)arg1;
- (id)getContollerTitle:(id)arg1;
- (void)onOpenWebView;
- (void)onGiftToFriendWithIndexPath:(id)arg1;
- (void)loadEmptyCellSubView:(id)arg1 emptyIndex:(long long)arg2;
- (void)loadCardCellSubView:(id)arg1 cardIndex:(id)arg2;
- (void)loadInvoiceCardCellSubView:(id)arg1 cardIndex:(id)arg2;
- (void)delayFadeOutCard:(id)arg1;
- (void)deleteCardDataWithIndexPath:(id)arg1;
- (void)unGiftCardDataWithIndexPath:(id)arg1;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onDeleteCard:(id)arg1;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollToShareCard;
- (void)deleteCardDataWithIndexPath:(id)arg1 needDeleteDB:(_Bool)arg2;
- (unsigned int)safeAddCardList:(id)arg1;
- (void)sortWCCardList:(id)arg1;
- (void)sortLayoutInfo;
- (void)processNearBySortData;
- (void)processExpireSortData;
- (void)processMemberSortData;
- (void)genLayoutDisplayList;
- (void)genGeneralCardList;
- (void)genInvoiceCardList;
- (void)updateSectionArr;
- (void)updateInvoiceAndGeneralData;
- (void)updateDisplayList;
- (void)updateLayoutData;
- (unsigned int)removeCard:(id)arg1;
- (void)removeAllNormalCard;
- (id)getCardDataByIndexPath:(id)arg1;
- (id)getIndexPathWithCardData:(id)arg1;
- (void)insertCardData:(id)arg1 AtIndex:(id)arg2;
- (unsigned long long)getDisplayListCount;
- (void)setDeleteHandling:(_Bool)arg1;
- (void)initData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

