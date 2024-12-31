//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface WCMomentsPrivacyTypeCell
{
    UIImageView *_leftCheckMark;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_lineView;
}

+ (double)heightForTitle:(id)arg1 subTitle:(id)arg2 cellWidth:(double)arg3;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftCheckMark; // @synthesize leftCheckMark=_leftCheckMark;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 subTitle:(id)arg2 isChecked:(_Bool)arg3;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

