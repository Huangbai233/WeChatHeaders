//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class FinderPaidCollectionInfo, MMUIButton, MMUILabel, MMWebImageView;

@interface MMFinderLivePromotePaidCollectionContentView
{
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUIButton *_actionButton;
    FinderPaidCollectionInfo *_paidCollectionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo; // @synthesize paidCollectionInfo=_paidCollectionInfo;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateLabelsOriginY;
- (void)layoutDescLabel;
- (void)layoutTitleLabel;
- (void)layoutActionButton;
- (void)layoutTitleImgView;
- (long long)getReportActionType;
- (id)onPromoteBubbleActionExtraInfo;
- (void)onDismissed;
- (void)onShowed;
- (void)onClosed;
- (void)onTapAction:(_Bool)arg1;
- (void)onPromoteButtonClicked:(_Bool)arg1;
- (void)actionButtonClicked;
- (void)handleSingleTapGesture:(id)arg1;
- (id)accessibilityLabelString;
- (_Bool)shouldBeAccessibilityElement;
- (void)refreshData;
- (void)layoutUI;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)convertPromoteMsgInfo:(id)arg1;

@end

