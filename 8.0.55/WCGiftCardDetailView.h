//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView, WCFitLayoutView, WCGiftCardData, WCGiftCardLetterView, WCMultiGiftPersonView, WCMultiGiftView;
@protocol WCGiftCardDetailViewDelegate;

@interface WCGiftCardDetailView
{
    _Bool _isFirstOpen;
    _Bool _isOpened;
    WCGiftCardData *_giftCardData;
    double _viewWidth;
    id <WCGiftCardDetailViewDelegate> _delegate;
    WCFitLayoutView *_descriptView;
    UILabel *_desLabel;
    UILabel *_cardTitleLabel;
    UILabel *_priceLabel;
    MMWebImageView *_cardPic;
    UIView *_cardBackShadowPic;
    UIView *_topBarView;
    UIScrollView *_scrollView;
    UIView *_giftHeadView;
    UIImageView *_leftBackGround;
    UIImageView *_rightBackGround;
    UILabel *_toUserLaebl;
    WCGiftCardLetterView *_letterView;
    MMWebImageView *_headImageView;
    UILabel *_fromUserLabel;
    UIButton *_jumpButton;
    UIButton *_operationButton;
    UIView *_divideLine;
    UIView *_edgeLine;
    UIView *_operationLine;
    UIButton *_centerJumpBtn;
    UILabel *_headerTitleLabel;
    WCMultiGiftView *_multiGiftView;
    WCMultiGiftPersonView *_multiGiftPersonView;
    UIView *_maskbackView;
    struct CGSize _topSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskbackView; // @synthesize maskbackView=_maskbackView;
@property(retain, nonatomic) WCMultiGiftPersonView *multiGiftPersonView; // @synthesize multiGiftPersonView=_multiGiftPersonView;
@property(retain, nonatomic) WCMultiGiftView *multiGiftView; // @synthesize multiGiftView=_multiGiftView;
@property(retain, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIButton *centerJumpBtn; // @synthesize centerJumpBtn=_centerJumpBtn;
@property(retain, nonatomic) UIView *operationLine; // @synthesize operationLine=_operationLine;
@property(retain, nonatomic) UIView *edgeLine; // @synthesize edgeLine=_edgeLine;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UIButton *operationButton; // @synthesize operationButton=_operationButton;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UILabel *fromUserLabel; // @synthesize fromUserLabel=_fromUserLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCGiftCardLetterView *letterView; // @synthesize letterView=_letterView;
@property(retain, nonatomic) UILabel *toUserLaebl; // @synthesize toUserLaebl=_toUserLaebl;
@property(retain, nonatomic) UIImageView *rightBackGround; // @synthesize rightBackGround=_rightBackGround;
@property(retain, nonatomic) UIImageView *leftBackGround; // @synthesize leftBackGround=_leftBackGround;
@property(retain, nonatomic) UIView *giftHeadView; // @synthesize giftHeadView=_giftHeadView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) UIView *cardBackShadowPic; // @synthesize cardBackShadowPic=_cardBackShadowPic;
@property(retain, nonatomic) MMWebImageView *cardPic; // @synthesize cardPic=_cardPic;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *cardTitleLabel; // @synthesize cardTitleLabel=_cardTitleLabel;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) WCFitLayoutView *descriptView; // @synthesize descriptView=_descriptView;
@property(nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(nonatomic) _Bool isFirstOpen; // @synthesize isFirstOpen=_isFirstOpen;
@property(nonatomic) struct CGSize topSize; // @synthesize topSize=_topSize;
@property(nonatomic) __weak id <WCGiftCardDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(retain, nonatomic) WCGiftCardData *giftCardData; // @synthesize giftCardData=_giftCardData;
- (void)centerJumpBtnClick;
- (void)doRefresh;
- (void)scrollViewDidScroll:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)doGiftOpening;
- (void)backGroundDidClikced:(id)arg1;
- (void)createFooter:(double)arg1;
- (void)createMaskBackView:(double)arg1;
- (void)createMultiGiftPersonView:(double)arg1;
- (void)createLetterView:(double)arg1;
- (void)createSendView;
- (void)createReceiveView;
- (void)createOutOfCardView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

