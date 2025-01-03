//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableDictionary, NSString;
@protocol MultiImageScrollViewDelegate;

@interface MultiImageScrollView
{
    NSMutableDictionary *dicVisiblePageIndex;
    int m_iNumberOfPages;
    int m_iCurrentPage;
    _Bool m_bFromPicker;
    _Bool m_bDragAnimating;
    _Bool _m_isFromWebview;
    _Bool _m_needUseWindowFrame;
    _Bool _isTilingPage;
    _Bool _isMovingToNextPage;
    int _m_iPreviousPage;
    id <MultiImageScrollViewDelegate> m_delegate;
    MMUIViewController *m_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMovingToNextPage; // @synthesize isMovingToNextPage=_isMovingToNextPage;
@property(nonatomic) _Bool isTilingPage; // @synthesize isTilingPage=_isTilingPage;
@property(nonatomic) _Bool m_needUseWindowFrame; // @synthesize m_needUseWindowFrame=_m_needUseWindowFrame;
@property(nonatomic) _Bool m_isFromWebview; // @synthesize m_isFromWebview=_m_isFromWebview;
@property(nonatomic) int m_iPreviousPage; // @synthesize m_iPreviousPage=_m_iPreviousPage;
@property(nonatomic) _Bool m_bFromPicker; // @synthesize m_bFromPicker;
@property(nonatomic) int m_iCurrentPage; // @synthesize m_iCurrentPage;
@property(nonatomic) int m_iNumberOfPages; // @synthesize m_iNumberOfPages;
@property(nonatomic) __weak MMUIViewController *m_viewController; // @synthesize m_viewController;
@property(nonatomic) __weak id <MultiImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)reloadDataWithPageCount:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)getPhotoatIndex:(unsigned long long)arg1;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (void)changeToNextPageWithCompletion:(CDUnknownBlockType)arg1;
- (void)changeToPageAtIndex:(unsigned long long)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)updatePageCount:(unsigned int)arg1;
- (void)updateTitleView;
- (unsigned long long)imageCount;
- (id)viewAtPage:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned long long)arg1;
- (void)adjustToMinimumScale;
- (void)adjustToNewSize;
- (struct CGPoint)contentOffsetForPagingScrollView;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView:(_Bool)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)tilePages;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initScrollView;
- (void)onUpdateLivePhotoIconDisplayStatus:(id)arg1;
- (void)handleLivePhotoLongPress:(long long)arg1;
- (void)ImageScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)ImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)handleViewWillDisappear;
- (void)handleViewWillAppear;
- (void)showStatusBar;
- (void)hideStatusBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

