//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UIView.h>

@class FinderLiveShareLiveQRCodeInfo, MMFinderLiveNoticePosterModel, MMFinderLiveTask, MMLiveTaskId, MMWebImageView, NSString, UIButton, UIImage, UIImageView, UILabel, WCFinderContact, WCFinderHeadImageView;
@protocol MMFinderLiveGenericQrCodeViewDelegate;

@interface MMFinderLiveGenericQrCodeView : UIView
{
    _Bool _previewBackgroundImageSet;
    _Bool _backgroundImageSettingsButtonHidden;
    _Bool _isNormalAudience;
    MMLiveTaskId *_taskId;
    id <MMFinderLiveGenericQrCodeViewDelegate> _delegate;
    NSString *_backgroundImageUri;
    UIImage *_previewBackgroundImage;
    WCFinderContact *_anchorContact;
    FinderLiveShareLiveQRCodeInfo *_qrCodeInfo;
    MMFinderLiveNoticePosterModel *_posterModel;
    unsigned long long _currentStyleIndex;
    unsigned long long _committedStyleIndex;
    UIView *_roundedCornerContainerView;
    UIView *_masterContainerView;
    UIView *_backgroundImageContainer;
    UIImageView *_backgroundImageView;
    UIView *_backgroundImageShadingView;
    UIImageView *_brandLogoView;
    UILabel *_brandLabel;
    UIButton *_backgroundImageSettingsButton;
    WCFinderHeadImageView *_anchorAvatarView;
    UILabel *_anchorDisplayNameLabel;
    MMWebImageView *_anchorVerificationStatusView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_qrCodeContainer;
    UIImageView *_qrCodeImageView;
    UILabel *_scanTipsLabel;
    UIView *_posterBackgroundImageContainer;
    UIImageView *_posterBackgroundImageView;
    UIView *_posterBackgroundImageShadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *posterBackgroundImageShadingView; // @synthesize posterBackgroundImageShadingView=_posterBackgroundImageShadingView;
@property(retain, nonatomic) UIImageView *posterBackgroundImageView; // @synthesize posterBackgroundImageView=_posterBackgroundImageView;
@property(retain, nonatomic) UIView *posterBackgroundImageContainer; // @synthesize posterBackgroundImageContainer=_posterBackgroundImageContainer;
@property(retain, nonatomic) UILabel *scanTipsLabel; // @synthesize scanTipsLabel=_scanTipsLabel;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) UIView *qrCodeContainer; // @synthesize qrCodeContainer=_qrCodeContainer;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *anchorVerificationStatusView; // @synthesize anchorVerificationStatusView=_anchorVerificationStatusView;
@property(retain, nonatomic) UILabel *anchorDisplayNameLabel; // @synthesize anchorDisplayNameLabel=_anchorDisplayNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *anchorAvatarView; // @synthesize anchorAvatarView=_anchorAvatarView;
@property(retain, nonatomic) UIButton *backgroundImageSettingsButton; // @synthesize backgroundImageSettingsButton=_backgroundImageSettingsButton;
@property(retain, nonatomic) UILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(retain, nonatomic) UIImageView *brandLogoView; // @synthesize brandLogoView=_brandLogoView;
@property(retain, nonatomic) UIView *backgroundImageShadingView; // @synthesize backgroundImageShadingView=_backgroundImageShadingView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *backgroundImageContainer; // @synthesize backgroundImageContainer=_backgroundImageContainer;
@property(retain, nonatomic) UIView *masterContainerView; // @synthesize masterContainerView=_masterContainerView;
@property(retain, nonatomic) UIView *roundedCornerContainerView; // @synthesize roundedCornerContainerView=_roundedCornerContainerView;
@property(nonatomic) unsigned long long committedStyleIndex; // @synthesize committedStyleIndex=_committedStyleIndex;
@property(nonatomic) unsigned long long currentStyleIndex; // @synthesize currentStyleIndex=_currentStyleIndex;
@property(nonatomic) _Bool isNormalAudience; // @synthesize isNormalAudience=_isNormalAudience;
@property(retain, nonatomic) MMFinderLiveNoticePosterModel *posterModel; // @synthesize posterModel=_posterModel;
@property(retain, nonatomic) FinderLiveShareLiveQRCodeInfo *qrCodeInfo; // @synthesize qrCodeInfo=_qrCodeInfo;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(nonatomic) _Bool backgroundImageSettingsButtonHidden; // @synthesize backgroundImageSettingsButtonHidden=_backgroundImageSettingsButtonHidden;
@property(retain, nonatomic) UIImage *previewBackgroundImage; // @synthesize previewBackgroundImage=_previewBackgroundImage;
@property(nonatomic) _Bool previewBackgroundImageSet; // @synthesize previewBackgroundImageSet=_previewBackgroundImageSet;
@property(retain, nonatomic) NSString *backgroundImageUri; // @synthesize backgroundImageUri=_backgroundImageUri;
@property(nonatomic) __weak id <MMFinderLiveGenericQrCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)showBGImageSettingBtnShow:(_Bool)arg1;
- (void)transformMasterContainerToCenter;
- (CDStruct_76c2da79)currentTitleLayoutAttributes;
- (void)layoutWithoutBackgroundImage;
- (void)layoutWithBackgroundImage;
- (void)configureBackgroundImage:(_Bool)arg1;
- (id)getLiveCreateTimeString:(unsigned int)arg1;
- (void)updateWithQrCodeInfo:(id)arg1;
- (void)updateWithAnchorFinderContact:(id)arg1;
- (void)configureComponentsStyle;
- (void)initUI;
- (void)onImageSettingsButtonTapped;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIImage *snapshotContainerImage;
- (void)revertPreviewStyle;
- (void)commitPreviewStyle;
- (void)advancePreviewStyle;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setPreviewBackgroundImage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setBackgroundImageUrl:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateWithAnchorContact:(id)arg1 qrCodeInfo:(id)arg2 posterModel:(id)arg3 isNormalAudience:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) NSString *currentStyleId;
@property(readonly, nonatomic) _Bool hasBackgroundImage;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) double aspectRatio;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
