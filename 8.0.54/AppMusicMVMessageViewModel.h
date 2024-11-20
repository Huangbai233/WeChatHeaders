//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMMusicShareItem;

@interface AppMusicMVMessageViewModel
{
    double m_titleHeight;
    double m_detailHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) double detailHeight; // @synthesize detailHeight=m_detailHeight;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=m_titleHeight;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (void)onMessageDownloadThumbImageOK;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (id)customJumpAppId;
- (_Bool)isSupportSourceViewBottomClick;
- (id)sourceTitle;
- (id)sourceIcon;
@property(readonly, nonatomic) MMMusicShareItem *shareItem;
- (_Bool)isShowSourceView;
- (_Bool)shouldShowSourceViewInContent;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

