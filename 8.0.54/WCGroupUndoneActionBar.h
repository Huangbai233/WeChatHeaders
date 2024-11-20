//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSMutableArray, NSString, UICollectionView;
@protocol WCGroupUndoneActionDelegate;

@interface WCGroupUndoneActionBar : UIView
{
    id <WCGroupUndoneActionDelegate> _delegate;
    NSMutableArray *_undoneItems;
    UICollectionView *_collectionView;
    CAGradientLayer *_leftGradientLayer;
    CAGradientLayer *_rightGradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *rightGradientLayer; // @synthesize rightGradientLayer=_rightGradientLayer;
@property(retain, nonatomic) CAGradientLayer *leftGradientLayer; // @synthesize leftGradientLayer=_leftGradientLayer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *undoneItems; // @synthesize undoneItems=_undoneItems;
@property(nonatomic) __weak id <WCGroupUndoneActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onRevokeUndoneCell:(id)arg1;
- (void)onCompleteUndoneCell:(id)arg1;
- (void)onClickUndoneCell:(id)arg1;
- (void)onCloseUndoneCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)removeUndoneItem:(id)arg1;
- (void)updateUndoneItem:(id)arg1;
- (void)reloadGradientLayer;
- (void)layoutSubviews;
- (void)initViews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

