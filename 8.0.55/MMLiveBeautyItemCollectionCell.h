//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, MMBadgeView, MMLiveBeautyItem, NSString, UIButton, UIImageView, UILabel, UIView;

@interface MMLiveBeautyItemCollectionCell : UICollectionViewCell
{
    _Bool _isSelected;
    _Bool _hasAdjust;
    MMLiveBeautyItem *_beautyItem;
    UIView *_imageBackgroundView;
    UIImageView *_coverImageView;
    UIButton *_coverImageButton;
    UILabel *_titleLabel;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_shapeLayer;
    UIView *_adjustLogo;
    MMBadgeView *_badgeView;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *adjustLogo; // @synthesize adjustLogo=_adjustLogo;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *coverImageButton; // @synthesize coverImageButton=_coverImageButton;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(nonatomic) _Bool hasAdjust; // @synthesize hasAdjust=_hasAdjust;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMLiveBeautyItem *beautyItem; // @synthesize beautyItem=_beautyItem;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)fitTitleLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
