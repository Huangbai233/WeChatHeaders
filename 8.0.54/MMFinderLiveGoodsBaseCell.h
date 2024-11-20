//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class UIImageView, UIView;
@protocol MMFinderLiveGoodsBaseCellDelegate;

@interface MMFinderLiveGoodsBaseCell
{
    _Bool m_bIsEditting;
    _Bool m_bShowSelectedFlag;
    _Bool m_bSelected;
    _Bool m_bAnimated;
    unsigned int m_iAnimatedCount;
    UIImageView *m_selectedImageView;
    UIView *_reorderView;
    id <MMFinderLiveGoodsBaseCellDelegate> _multiSelectDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveGoodsBaseCellDelegate> multiSelectDelegate; // @synthesize multiSelectDelegate=_multiSelectDelegate;
@property(retain, nonatomic) UIView *reorderView; // @synthesize reorderView=_reorderView;
@property(retain, nonatomic) UIImageView *m_selectedImageView; // @synthesize m_selectedImageView;
@property(nonatomic) _Bool m_bAnimated; // @synthesize m_bAnimated;
@property(nonatomic) unsigned int m_iAnimatedCount; // @synthesize m_iAnimatedCount;
@property(nonatomic) _Bool m_bSelected; // @synthesize m_bSelected;
@property(nonatomic) _Bool m_bShowSelectedFlag; // @synthesize m_bShowSelectedFlag;
@property(nonatomic) _Bool m_bIsEditting; // @synthesize m_bIsEditting;
- (id)unSelectedImageForSelectedButton;
- (id)selectedImageForSelectedButton;
- (struct CGSize)selectedButtonSize;
- (double)selectedButtonLeftMargin;
- (double)adjustedLeftOffsetForEditing;
- (void)changeSelectdStatus:(_Bool)arg1;
- (void)customTableViewCellRecorderControl;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addSelectedImageViewIfNeeded;
- (void)resetState;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

