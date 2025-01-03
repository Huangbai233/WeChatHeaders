//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class Announce, MMTableView, NSMutableArray, NSString, UIImageView, UISwitch, WCPayF2FReceiveDetailSummaryItem;
@protocol WCPayF2FReceiveDetailViewControllerDelegate;

@interface WCPayF2FReceiveDetailViewController
{
    double kRecordTableCellHeight;
    double kLeftMargin;
    double kTopMargin;
    double kSpeechSynthesizeViewTopMargin;
    double kSpeechSynthesizeViewLeftMargin;
    double kSpeechSynthesizeViewBottomMargin;
    double kSpeechSynthesizeViewImageLabelMargin;
    double kSpeechSynthesizeViewLabelSwitchMargin;
    double kBottomMargin;
    _Bool _bIsLoadingMore;
    _Bool _bIsRecordLoadEnd;
    _Bool _bIsSpeechSwitchViewShow;
    id <WCPayF2FReceiveDetailViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    Announce *_m_announcement;
    WCPayF2FReceiveDetailSummaryItem *_curSummaryItem;
    NSMutableArray *_recordList;
    UISwitch *_openSwitch;
    UIImageView *_switchImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsSpeechSwitchViewShow; // @synthesize bIsSpeechSwitchViewShow=_bIsSpeechSwitchViewShow;
@property(retain, nonatomic) UIImageView *switchImageView; // @synthesize switchImageView=_switchImageView;
@property(retain, nonatomic) UISwitch *openSwitch; // @synthesize openSwitch=_openSwitch;
@property(nonatomic) _Bool bIsRecordLoadEnd; // @synthesize bIsRecordLoadEnd=_bIsRecordLoadEnd;
@property(nonatomic) _Bool bIsLoadingMore; // @synthesize bIsLoadingMore=_bIsLoadingMore;
@property(retain, nonatomic) NSMutableArray *recordList; // @synthesize recordList=_recordList;
@property(retain, nonatomic) WCPayF2FReceiveDetailSummaryItem *curSummaryItem; // @synthesize curSummaryItem=_curSummaryItem;
@property(retain, nonatomic) Announce *m_announcement; // @synthesize m_announcement=_m_announcement;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayF2FReceiveDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showOpenSystemPushSoundTips;
- (void)showSetPushSoundResultSuccess:(_Bool)arg1 soundStatus:(_Bool)arg2;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getBannerView;
- (_Bool)isSummaryItemNeedUpdate:(id)arg1;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeRecordCellContentView:(id)arg1 recordData:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)makeReceiveDetailHeaderView;
- (void)areaButtonClick:(id)arg1;
- (void)updateSwitchStatus;
- (id)makeSpeechSynthsizeSwtichView;
- (id)makeEmptyTipsView;
- (void)setupHeaderAndContentView;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)rightBarButtonPress;
- (void)viewControllerBack;
- (void)refreshControllerAfterDeleteRecordWithSummaryItem:(id)arg1 bIsDeleteSuccess:(_Bool)arg2;
- (void)refreshControllerWithLoadRecordFail;
- (void)refreshControllerWithRecordSummaryItem:(id)arg1 recordListData:(id)arg2;
- (void)refreshControllerWithAnnounce:(id)arg1;
- (void)setupData;
- (void)setSpeechSwitchViewShow:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

