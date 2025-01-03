//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSString, ShareMessageConfirmLogicHelper, UICollectionViewFlowLayout, UIScrollView, WCCardCollectionView, WCCardEmptyBackView, WCCardMemberCardListLogicController;

@interface WCCardMemberCardListViewController
{
    WCCardCollectionView *_collectionView;
    UIScrollView *_emptyScrollView;
    WCCardEmptyBackView *_emptyBackView;
    UICollectionViewFlowLayout *_collectionLayout;
    WCCardMemberCardListLogicController *_logicViewController;
    ShareMessageConfirmLogicHelper *_sendAppMsgHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ShareMessageConfirmLogicHelper *sendAppMsgHelper; // @synthesize sendAppMsgHelper=_sendAppMsgHelper;
@property(retain, nonatomic) WCCardMemberCardListLogicController *logicViewController; // @synthesize logicViewController=_logicViewController;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) WCCardEmptyBackView *emptyBackView; // @synthesize emptyBackView=_emptyBackView;
@property(retain, nonatomic) UIScrollView *emptyScrollView; // @synthesize emptyScrollView=_emptyScrollView;
@property(retain, nonatomic) WCCardCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)memberCardListLogicUpdateMemberCard:(id)arg1 atIdx:(unsigned long long)arg2;
- (void)delayFadeOutCard:(id)arg1;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onDeleteCard:(id)arg1;
- (void)OnSendMessageOK:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onBackDidSelected;
- (void)reloadCollectionView;
- (void)onGiftToFriendWithIndexPath:(id)arg1;
- (void)confiData;
- (void)confiNavigationBar;
- (void)confiView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

