//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UIView.h>

@class FinderDirectAddPreviousLiveProductsPageInfo, FinderShopShelfLabelClassifyInfo, MMFinderLiveCouponsView, MMFinderLiveGoodsItem, MMFinderLiveGoodsManagerViewController, MMFinderLiveHotSaleInfosView, MMFinderLiveShopContext, MMFinderLiveShopGoodsSectionHeaderClassifyView, MMFinderLiveShopSelfOpenParams, MMFinderLiveShopShelfContainerView, MMFinderLiveShopShelfCoordinator, MMFinderLiveShopShelfExtraHeaderCell, MMFinderLiveShopShelfGoodsWithCouponView, MMFinderLiveShopShelfHeaderContainerView, MMFinderLiveShopShelfPagesManageView, MMFinderLiveShopShelfTipsView, MMFinderLiveTaskId, MMFinderLiveWithCallbackSet, MMLoadingView, MMTableView, NSDate, NSDictionary, NSMutableArray, NSMutableSet, NSObject, NSString, OrderedDictionary, UIButton;
@protocol MMFinderLiveShopShelfViewDelegate;

@interface MMFinderLiveShopShelfView : UIView
{
    _Bool _isOpening;
    _Bool _ignoreNextTipsBeforeOpen;
    unsigned int _currentGetShopShelfPullScene;
    MMFinderLiveCouponsView *_couponsView;
    MMFinderLiveTaskId *_taskId;
    id <MMFinderLiveShopShelfViewDelegate> _delegate;
    NSDate *_lastFetchSuccessTime;
    MMFinderLiveShopShelfCoordinator *_coordinator;
    MMFinderLiveShopSelfOpenParams *_params;
    MMFinderLiveShopShelfContainerView *_containerView;
    MMFinderLiveShopShelfPagesManageView *_pagesManageView;
    UIView *_mainPageContentView;
    MMFinderLiveShopShelfHeaderContainerView *_headerView;
    MMFinderLiveShopShelfExtraHeaderCell *_tableHeaderView;
    MMTableView *_goodsListTableView;
    MMFinderLiveShopShelfTipsView *_tipsView;
    MMFinderLiveShopShelfGoodsWithCouponView *_goodsWithCouponView;
    MMLoadingView *_loadingView;
    UIButton *_addGoodsButton;
    MMFinderLiveGoodsManagerViewController *_goodsManagerViewController;
    OrderedDictionary *_goodsViewModelOrderedDict;
    NSMutableArray *_currentTabGoodsViewModels;
    MMFinderLiveGoodsItem *_currentGoodsItem;
    MMFinderLiveGoodsItem *_currentPromtingGoodsItem;
    NSObject *_currentGetShopShelf;
    NSMutableArray *_classifyInfos;
    FinderShopShelfLabelClassifyInfo *_currentClassifyInfo;
    MMFinderLiveShopGoodsSectionHeaderClassifyView *_classifyView;
    NSMutableSet *_exposedProductIdSet;
    NSMutableArray *_addExposedProductIdArr;
    NSMutableArray *_afterRefreshed;
    FinderDirectAddPreviousLiveProductsPageInfo *_addPreviousLiveProductsPageInfo;
    MMFinderLiveHotSaleInfosView *_hotSaleInfosView;
    MMFinderLiveWithCallbackSet *_hotSaleInfosHiddenReasons;
    unsigned long long _draggingTag;
    NSDictionary *_hotSaleLikeAnimationMaskViewsWillReuse;
    NSDate *_enterCurrentClassifyDate;
    NSDate *_enterDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *enterDate; // @synthesize enterDate=_enterDate;
@property(retain, nonatomic) NSDate *enterCurrentClassifyDate; // @synthesize enterCurrentClassifyDate=_enterCurrentClassifyDate;
@property(retain, nonatomic) NSDictionary *hotSaleLikeAnimationMaskViewsWillReuse; // @synthesize hotSaleLikeAnimationMaskViewsWillReuse=_hotSaleLikeAnimationMaskViewsWillReuse;
@property(nonatomic) unsigned long long draggingTag; // @synthesize draggingTag=_draggingTag;
@property(retain, nonatomic) MMFinderLiveWithCallbackSet *hotSaleInfosHiddenReasons; // @synthesize hotSaleInfosHiddenReasons=_hotSaleInfosHiddenReasons;
@property(retain, nonatomic) MMFinderLiveHotSaleInfosView *hotSaleInfosView; // @synthesize hotSaleInfosView=_hotSaleInfosView;
@property(retain, nonatomic) FinderDirectAddPreviousLiveProductsPageInfo *addPreviousLiveProductsPageInfo; // @synthesize addPreviousLiveProductsPageInfo=_addPreviousLiveProductsPageInfo;
@property(nonatomic) _Bool ignoreNextTipsBeforeOpen; // @synthesize ignoreNextTipsBeforeOpen=_ignoreNextTipsBeforeOpen;
@property(retain, nonatomic) NSMutableArray *afterRefreshed; // @synthesize afterRefreshed=_afterRefreshed;
@property(retain, nonatomic) NSMutableArray *addExposedProductIdArr; // @synthesize addExposedProductIdArr=_addExposedProductIdArr;
@property(retain, nonatomic) NSMutableSet *exposedProductIdSet; // @synthesize exposedProductIdSet=_exposedProductIdSet;
@property(retain, nonatomic) MMFinderLiveShopGoodsSectionHeaderClassifyView *classifyView; // @synthesize classifyView=_classifyView;
@property(retain, nonatomic) FinderShopShelfLabelClassifyInfo *currentClassifyInfo; // @synthesize currentClassifyInfo=_currentClassifyInfo;
@property(retain, nonatomic) NSMutableArray *classifyInfos; // @synthesize classifyInfos=_classifyInfos;
@property(nonatomic) unsigned int currentGetShopShelfPullScene; // @synthesize currentGetShopShelfPullScene=_currentGetShopShelfPullScene;
@property(retain, nonatomic) NSObject *currentGetShopShelf; // @synthesize currentGetShopShelf=_currentGetShopShelf;
@property(retain, nonatomic) MMFinderLiveGoodsItem *currentPromtingGoodsItem; // @synthesize currentPromtingGoodsItem=_currentPromtingGoodsItem;
@property(retain, nonatomic) MMFinderLiveGoodsItem *currentGoodsItem; // @synthesize currentGoodsItem=_currentGoodsItem;
@property(retain, nonatomic) NSMutableArray *currentTabGoodsViewModels; // @synthesize currentTabGoodsViewModels=_currentTabGoodsViewModels;
@property(retain, nonatomic) OrderedDictionary *goodsViewModelOrderedDict; // @synthesize goodsViewModelOrderedDict=_goodsViewModelOrderedDict;
@property(nonatomic) __weak MMFinderLiveGoodsManagerViewController *goodsManagerViewController; // @synthesize goodsManagerViewController=_goodsManagerViewController;
@property(retain, nonatomic) UIButton *addGoodsButton; // @synthesize addGoodsButton=_addGoodsButton;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMFinderLiveShopShelfGoodsWithCouponView *goodsWithCouponView; // @synthesize goodsWithCouponView=_goodsWithCouponView;
@property(retain, nonatomic) MMFinderLiveShopShelfTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) MMTableView *goodsListTableView; // @synthesize goodsListTableView=_goodsListTableView;
@property(retain, nonatomic) MMFinderLiveShopShelfExtraHeaderCell *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMFinderLiveShopShelfHeaderContainerView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *mainPageContentView; // @synthesize mainPageContentView=_mainPageContentView;
@property(retain, nonatomic) MMFinderLiveShopShelfPagesManageView *pagesManageView; // @synthesize pagesManageView=_pagesManageView;
@property(retain, nonatomic) MMFinderLiveShopShelfContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMFinderLiveShopSelfOpenParams *params; // @synthesize params=_params;
@property(retain, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) NSDate *lastFetchSuccessTime; // @synthesize lastFetchSuccessTime=_lastFetchSuccessTime;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(nonatomic) __weak id <MMFinderLiveShopShelfViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveCouponsView *couponsView; // @synthesize couponsView=_couponsView;
- (double)tryShowAddToShoppingCartAnimationForProduct:(unsigned long long)arg1;
- (unsigned long long)willHandleProductHintAnimationFor:(unsigned long long)arg1;
- (void)receiveHintAnimationInfo:(id)arg1 withProductID:(unsigned long long)arg2;
- (id)visibleGoodsCellWithProductID:(unsigned long long)arg1;
- (void)onWeAppWithHotSaleInfosComplete;
- (void)onWeAppWithHotSaleInfosLaunchSuccess;
- (void)onAddPreviousLiveGoodsClicked;
- (void)reportDidSelectClassifyInfoBeforeSwitch:(id)arg1;
- (void)didSelectClassifyInfo:(id)arg1;
- (void)willDisplayClassifyInfo:(id)arg1;
- (id)buildExtraHeaderInfos;
- (void)showTipsViewWithHintInfo:(id)arg1 onWillShow:(CDUnknownBlockType)arg2;
- (void)showHintInfoIfNeeded;
- (void)onWillJumpToMiniAppAfterBackNativeWithContext:(id)arg1;
- (void)mainPageDidCompletelyAppearAndFetch;
- (void)mainPageDidCompletelyAppear;
- (void)mainPageWillAppear;
- (void)didCompletelyAppear;
- (void)willAppear;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)reportGoodsExposeForCell:(id)arg1 goods:(id)arg2;
- (void)cell:(id)arg1 willDisplayForModel:(id)arg2;
- (void)reportExposedProductIds;
- (_Bool)isAnchor;
- (_Bool)isAudience;
- (_Bool)isNormalAudience;
- (void)collectExposedProductIds;
- (void)reportHeaderElementsExpose;
- (void)reportAnchorAction:(long long)arg1 productId:(unsigned long long)arg2 result:(id)arg3;
- (void)reportAnchorAction:(long long)arg1 productId:(unsigned long long)arg2 extraParams:(id)arg3;
- (void)reportAnchorAction:(long long)arg1 productId:(unsigned long long)arg2;
- (void)onEdgeGestureEnded;
- (void)closeShopShelfContainerForTapGesture;
- (void)closeShopShelfContainerForPanGesture;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)handleContentGestureEnd;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)onDeleteRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onOpenRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onStopRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)internalStartRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onStartRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onLiveGoodsCellLimitDiscountArriveTime:(id)arg1 goodsViewModel:(id)arg2;
- (void)onMayNeedChangeSizeForImageLoaded:(id)arg1;
- (void)onAskForPromoteProductButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onAddToShoppingCartButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)cell:(id)arg1 didReleaseMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 didClickMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 willShowMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 model:(id)arg2 didSelectSKU:(id)arg3;
- (void)cell:(id)arg1 model:(id)arg2 willShowSKUCellForIndex:(unsigned long long)arg3;
- (void)onActionButtonClicked:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onCoupon:(id)arg1 successIssueOrCancel:(_Bool)arg2;
- (void)onHasUploadedChange;
- (void)onAddFromStore;
- (void)onHeaderViewBackButtonClicked;
- (void)onHeaderViewBackButtonClicked:(long long)arg1;
- (void)onSectionHeaderManageGoodsClicked;
- (void)onSectionHeaderFlashSaleClicked;
- (void)onSectionHeaderAddGoodsClicked;
- (void)updateMainPage;
- (void)hideSecondaryPage:(_Bool)arg1 duringOpening:(_Bool)arg2;
- (void)hideSecondaryPage:(_Bool)arg1;
- (void)onScrollViewDidEndScroll;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forProductGoodsViewModel:(id)arg2;
- (void)deleteGoods:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)cell:(id)arg1 didSelectedForModel:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onAddGoodsButtonClicked;
- (void)onDeleteFinderShopShelfProduct:(id)arg1 productIds:(id)arg2;
- (void)onSetTopFinderShopShelfProduct:(id)arg1 productId:(unsigned long long)arg2;
- (void)onEndPromoteProductResult:(id)arg1;
- (long long)getPromoteUserType;
- (void)onSendPromoteProductResult:(id)arg1;
- (void)updatePromotProductStatusWithGoodsItem:(id)arg1;
- (void)toCanUseCouponItemList:(id)arg1 coupon:(id)arg2 backmode:(long long)arg3 animated:(_Bool)arg4;
- (void)toCanUseCouponItemList:(id)arg1 coupon:(id)arg2;
- (void)openWithCanUseCouponItemList:(id)arg1 coupon:(id)arg2;
- (id)buildBaseClassifyInfo;
- (void)loadGoodsWithCurrentClassifyInfo;
- (void)loadDataWithItemList:(id)arg1;
- (void)appendGoodsItem:(id)arg1;
- (_Bool)isAnchorOrAssistant;
- (id)liveTask;
- (void)reportCurrentPromotionReplaySetting;
- (void)beginEditMode;
@property(readonly, nonatomic) MMFinderLiveShopContext *shopContext;
- (void)showCouponsView;
- (void)onSearchViewBackButtonClicked;
- (void)showSearchView;
- (void)dismissCouponsView;
- (void)stopLoading;
- (void)stopLoading:(_Bool)arg1;
- (void)startLoading;
- (void)deviceDidRotate:(id)arg1;
- (void)reloadData;
- (void)checkShoppingAnchorStatusItem;
- (_Bool)showClassifyInfoSwitchOpen;
- (void)loadClassifyInfos:(id)arg1;
- (void)fetchDataInPullScene:(unsigned int)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDataInPullScene:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDataInPullScene:(unsigned int)arg1;
- (void)fetchData;
- (void)openWithAnimation:(_Bool)arg1 params:(id)arg2;
- (void)cleanOpenWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)manullyCloseWithAnimation:(_Bool)arg1;
- (void)closeWithAnimation:(_Bool)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)closeWithAnimation:(_Bool)arg1 reason:(long long)arg2;
- (void)closeWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)layoutSubviews;
- (void)layoutMainPage;
- (void)layoutContentView;
- (void)layoutAddGoodsButton;
- (void)initAddGoodsButton;
- (void)checkAndInitAddGoodsButton;
- (void)initView;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

