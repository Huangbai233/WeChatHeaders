//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMFinderLiveFansGroupSignView, MMFinderLiveGameEsportSignView, MMFinderLiveGlobalRankSignView, MMFinderLiveLiveRoleSignView, MMUILabel, MMWebImageView, NSMutableArray;

@interface MMFinderLiveTableStyleComboLiveRewardCell
{
    unsigned long long _badgeSignCnt;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMFinderLiveGameEsportSignView *_gameEsportSignView;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
    MMWebImageView *_giftImageView;
    MMUILabel *_giftCountLabel;
    NSMutableArray *_signViewArraryForLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *signViewArraryForLayout; // @synthesize signViewArraryForLayout=_signViewArraryForLayout;
@property(retain, nonatomic) MMUILabel *giftCountLabel; // @synthesize giftCountLabel=_giftCountLabel;
@property(retain, nonatomic) MMWebImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) MMFinderLiveGameEsportSignView *gameEsportSignView; // @synthesize gameEsportSignView=_gameEsportSignView;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(nonatomic) unsigned long long badgeSignCnt; // @synthesize badgeSignCnt=_badgeSignCnt;
- (id)getSelfAccessibility;
- (void)updateGiftCountLabelOrigin;
- (void)layoutGiftCountLabel;
- (void)updateGiftImageViewOrigin;
- (void)layoutGiftImageView;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (void)layoutGameEsportSignView;
- (void)layoutFansGroupSignView;
- (void)layoutGlobalRankSignView;
- (void)layoutMysteriousSignView;
- (void)updateSignViewOrigins;
- (void)layoutSignLabel;
- (void)layoutUI;
- (_Bool)reuseWithCellFrame:(id)arg1;
- (_Bool)isUITypeValid;
- (id)signText;

@end

