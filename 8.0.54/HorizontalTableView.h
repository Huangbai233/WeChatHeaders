//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMUIScrollView, NSMutableArray, NSMutableDictionary, NSString;
@protocol HorizontalTableViewDataSource, HorizontalTableViewDelegate;

@interface HorizontalTableView
{
    MMUIScrollView *m_scrollView;
    NSMutableArray *m_cellFrames;
    struct CGRect m_visibleRect;
    NSMutableDictionary *m_reusableCellListDic;
    NSMutableArray *m_visibleCells;
    id <HorizontalTableViewDataSource> m_dataSource;
    id <HorizontalTableViewDelegate> m_viewDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_visibleCells; // @synthesize m_visibleCells;
@property(nonatomic) __weak id <HorizontalTableViewDelegate> m_viewDelegate; // @synthesize m_viewDelegate;
@property(nonatomic) __weak id <HorizontalTableViewDataSource> m_dataSource; // @synthesize m_dataSource;
@property(retain, nonatomic) NSMutableDictionary *m_reusableCellListDic; // @synthesize m_reusableCellListDic;
@property(nonatomic) struct CGRect m_visibleRect; // @synthesize m_visibleRect;
@property(retain, nonatomic) NSMutableArray *m_cellFrames; // @synthesize m_cellFrames;
@property(retain, nonatomic) MMUIScrollView *m_scrollView; // @synthesize m_scrollView;
- (void)addCellAtIndex:(long long)arg1 rect:(struct CGRect)arg2;
- (void)scrollViewDidTap:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)relayoutScrollViewWithOffset:(double)arg1;
- (_Bool)rect:(struct CGRect)arg1 atRangeOf:(struct CGRect)arg2;
- (_Bool)rect:(struct CGRect)arg1 atRightOf:(struct CGRect)arg2;
- (_Bool)rect:(struct CGRect)arg1 atLeftOf:(struct CGRect)arg2;
- (void)reloadData;
- (void)setScrollViewContentEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)inqueueReusableWithCell:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)setViewDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

