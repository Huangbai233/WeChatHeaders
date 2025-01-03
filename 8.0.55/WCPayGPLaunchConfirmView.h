//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ChatroomProfileView, MMUIView, NSString;
@protocol WCPayGPLaunchConfirmViewDelegate;

@interface WCPayGPLaunchConfirmView
{
    _Bool _bChangeHeight;
    id <WCPayGPLaunchConfirmViewDelegate> _delegate;
    CContact *_contact;
    NSString *_theme;
    double _originHeight;
    MMUIView *_contentView;
    MMUIView *_chatroomContentView;
    ChatroomProfileView *_chatroomInfoView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatroomProfileView *chatroomInfoView; // @synthesize chatroomInfoView=_chatroomInfoView;
@property(retain, nonatomic) MMUIView *chatroomContentView; // @synthesize chatroomContentView=_chatroomContentView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) _Bool bChangeHeight; // @synthesize bChangeHeight=_bChangeHeight;
@property(retain, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WCPayGPLaunchConfirmViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPressBackBtn;
- (void)showPreViewAnimate;
- (void)viewChatroomProfile:(id)arg1;
- (void)initPreViewAndBarView:(id)arg1 ContentView:(id)arg2;
- (void)onConfirm;
- (void)onCancel;
- (void)hideView;
- (void)showView;
- (double)getChatroomContentViewMaxHeight;
- (id)genNewBigButton;
- (void)setupBottomContent;
- (void)setupCenterContent;
- (void)setupHeaderContent;
- (void)setupContentView;
- (void)setupSubview;

@end

