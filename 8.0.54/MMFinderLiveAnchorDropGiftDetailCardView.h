//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMUILabel, UIColor, UIFont;

@interface MMFinderLiveAnchorDropGiftDetailCardView
{
    MMUILabel *_titleLabel;
    UIFont *_titleFont;
    UIColor *_titleColor;
    MMUILabel *_descLabel;
    UIFont *_descFont;
    UIColor *_descColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) UIFont *descFont; // @synthesize descFont=_descFont;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)refreshLayout;
- (void)updateViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)setup;

@end

