//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, MMUILabel, MMUIView, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UIScrollView, WCShareCardData;
@protocol WCNewShareCardConsumedViewDelegate;

@interface WCNewShareCardConsumedView
{
    double _enterTimeForState;
    _Bool _followCheckBoxSelected;
    _Bool _bIsStatusBarBlack;
    _Bool _isSelectTagGroup;
    id <WCNewShareCardConsumedViewDelegate> _delegate;
    NSArray *_shareCardTPInfoList;
    WCShareCardData *_curShareCardData;
    NSString *_consumedBoxId;
    NSString *_subAppUserName;
    NSString *_subAppWording;
    NSString *_retMsg;
    UIScrollView *_contentView;
    MMUIView *_topContainerView;
    MMUIView *_bottomContainerView;
    MMUIView *_whoCanSeeContainerView;
    MMUIView *_shareInfoContainerView;
    UIButton *_closeBtn;
    UIImageView *_line1ImageView;
    UIImageView *_line2ImageView;
    MMLoadingView *_loadingViewX;
    MMUILabel *_whoCanSeeResultLabel;
    NSMutableArray *_arrGroupUser;
    NSMutableArray *_arrBlackUser;
    NSMutableArray *_arrGroupUserLabelID;
    NSMutableArray *_arrBlackUserLabelID;
    unsigned long long _fromScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSMutableArray *arrBlackUserLabelID; // @synthesize arrBlackUserLabelID=_arrBlackUserLabelID;
@property(retain, nonatomic) NSMutableArray *arrGroupUserLabelID; // @synthesize arrGroupUserLabelID=_arrGroupUserLabelID;
@property(retain, nonatomic) NSMutableArray *arrBlackUser; // @synthesize arrBlackUser=_arrBlackUser;
@property(retain, nonatomic) NSMutableArray *arrGroupUser; // @synthesize arrGroupUser=_arrGroupUser;
@property(nonatomic) _Bool isSelectTagGroup; // @synthesize isSelectTagGroup=_isSelectTagGroup;
@property(nonatomic) _Bool bIsStatusBarBlack; // @synthesize bIsStatusBarBlack=_bIsStatusBarBlack;
@property(nonatomic) _Bool followCheckBoxSelected; // @synthesize followCheckBoxSelected=_followCheckBoxSelected;
@property(retain, nonatomic) MMUILabel *whoCanSeeResultLabel; // @synthesize whoCanSeeResultLabel=_whoCanSeeResultLabel;
@property(retain, nonatomic) MMLoadingView *loadingViewX; // @synthesize loadingViewX=_loadingViewX;
@property(retain, nonatomic) UIImageView *line2ImageView; // @synthesize line2ImageView=_line2ImageView;
@property(retain, nonatomic) UIImageView *line1ImageView; // @synthesize line1ImageView=_line1ImageView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUIView *shareInfoContainerView; // @synthesize shareInfoContainerView=_shareInfoContainerView;
@property(retain, nonatomic) MMUIView *whoCanSeeContainerView; // @synthesize whoCanSeeContainerView=_whoCanSeeContainerView;
@property(retain, nonatomic) MMUIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) MMUIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(retain, nonatomic) NSString *subAppWording; // @synthesize subAppWording=_subAppWording;
@property(retain, nonatomic) NSString *subAppUserName; // @synthesize subAppUserName=_subAppUserName;
@property(retain, nonatomic) NSString *consumedBoxId; // @synthesize consumedBoxId=_consumedBoxId;
@property(retain, nonatomic) WCShareCardData *curShareCardData; // @synthesize curShareCardData=_curShareCardData;
@property(retain, nonatomic) NSArray *shareCardTPInfoList; // @synthesize shareCardTPInfoList=_shareCardTPInfoList;
@property(nonatomic) __weak id <WCNewShareCardConsumedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 andCardInfo:(id)arg3;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoading;
- (void)startLoadingNonBlock;
- (void)startLoadingBlocked;
- (void)clickWhoCanSeeBtn:(id)arg1;
- (void)onAttentionBtnClicked:(id)arg1;
- (void)onShareBtnClicked:(id)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (void)initWhoCanSeeEntranceView;
- (void)initShareInfoContainerView;
- (void)initBottomContainerView;
- (void)initTopContainerViewWithError:(_Bool)arg1;
- (void)initNormalView;
- (void)initView;
- (void)layoutSubviews;
- (void)closeConsumedView;
- (void)showConsumedViewWithAnimation:(_Bool)arg1 isStatusBarBlack:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withConsumedInfo:(id)arg2 consumedCardID:(id)arg3 consumedBoxId:(id)arg4 subscribeAppUserName:(id)arg5 subscribeWording:(id)arg6 fromScene:(unsigned long long)arg7 retMsg:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

