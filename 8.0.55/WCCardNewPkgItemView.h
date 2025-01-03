//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, MMUIImageView, MMUILabel, MMWebImageView, NSArray;

@interface WCCardNewPkgItemView
{
    long long _state;
    MMWebImageView *_headImageView;
    MMUILabel *_subTitleLabel;
    MMUIImageView *_readPockImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_numberLabel;
    MMUILabel *_timeLabel;
    MMUILabel *_stateLabel;
    CALayer *_shadowLayer;
    NSArray *_sameTpCardDataList;
    double _stateX;
    double _rightBaseLineX;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(nonatomic) double rightBaseLineX; // @synthesize rightBaseLineX=_rightBaseLineX;
@property(nonatomic) double stateX; // @synthesize stateX=_stateX;
@property(retain, nonatomic) NSArray *sameTpCardDataList; // @synthesize sameTpCardDataList=_sameTpCardDataList;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *readPockImageView; // @synthesize readPockImageView=_readPockImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)stringWithTime:(double)arg1;
- (void)configDataToUI;
- (void)layoutSubviews;
- (void)initData;
- (id)initWithSameTpCardDataList:(id)arg1;

@end

