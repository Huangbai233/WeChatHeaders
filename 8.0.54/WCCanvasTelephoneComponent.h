//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class UIImageView, UILabel, UIView;

@interface WCCanvasTelephoneComponent
{
    UIImageView *_m_lbsIcon;
    UIImageView *_m_rightIcon;
    UILabel *_m_phoneLabel;
    UIView *_topLineView;
    UIView *_bottomLineView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UILabel *m_phoneLabel; // @synthesize m_phoneLabel=_m_phoneLabel;
@property(retain, nonatomic) UIImageView *m_rightIcon; // @synthesize m_rightIcon=_m_rightIcon;
@property(retain, nonatomic) UIImageView *m_lbsIcon; // @synthesize m_lbsIcon=_m_lbsIcon;
- (void)updateFrame:(id)arg1;
- (void)configureLineView:(id)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

