//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNewUserPrepareResponse, MMCommonActionSheetPicker, MMFInderLiveCreateNoticeSelectModeView, MMFinderHeaderInfoView, MMFinderLiveCreateNoticeReporter, MMFinderLiveModNoticeView, MMFinderLiveNoticeDetailChooseView, MMFinderLiveNoticeModReminderView, MMFinderLiveNoticeShowReminderBottomView, MMLiveScrollGradientMaskingView, MMTextView, MMUIActivityIndicatorView, MMUIButton, MMUIView, NSArray, NSDate, NSDateFormatter, NSMutableArray, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, UIGestureRecognizer, UIImageView, UILabel, UIScrollView, UIView, WCFinderContact, WCFinderCreateLiveViewModel;
@protocol MMFinderLiveCreateNoticeViewControllerDelegate;

@interface MMFinderLiveCreateNoticeViewController
{
    _Bool _inAdaptedPageSheet;
    _Bool _ready;
    _Bool _noticeTimed;
    _Bool _bindToCoupons;
    _Bool _untimedNoticeAvailable;
    _Bool _untimedNoticeCreationEnabled;
    _Bool _enableDescExtend;
    int _triggerType;
    id <MMFinderLiveCreateNoticeViewControllerDelegate> _delegate;
    WCFinderContact *_finderContact;
    WCFinderCreateLiveViewModel *_createLiveVM;
    MMFinderLiveCreateNoticeReporter *_reporter;
    NSString *_descriptionPromptWording;
    long long _srcScene;
    CDUnknownBlockType _prepareCompletionBlock;
    NSDate *_startTime;
    NSDate *_untimedNoticeExpirationTime;
    NSArray *_couponsStockIDs;
    UIView *_scrollContainerView;
    UIScrollView *_scrollContentView;
    MMLiveScrollGradientMaskingView *_scrollMaskingView;
    UIGestureRecognizer *_backgroundViewGestureRecognizer;
    double _keyboardHeight;
    MMUIActivityIndicatorView *_prepareIndicatorView;
    MMFinderHeaderInfoView *_headerInfoView;
    UICollectionViewFlowLayout *_timingOptionsCollectionViewLayout;
    UICollectionView *_timingOptionsCollectionView;
    UIView *_timedStartTimeView;
    UILabel *_startTimeTitleLabel;
    UILabel *_startTimeLabel;
    UIImageView *_startTimeArrowView;
    NSDateFormatter *_timedOptionTodayDescriptionFormatter;
    NSDateFormatter *_timedOptionTomorrowDescriptionFormatter;
    NSDateFormatter *_timedOptionDayAfterTomorrowDescriptionFormatter;
    NSDateFormatter *_timedOptionGenericDescriptionFormatter;
    NSDateFormatter *_timedOptionGenericLongDescriptionFormatter;
    NSDateFormatter *_untimedOptionDescriptionFormatter;
    UILabel *_timingOptionsDescriptionLabel;
    MMCommonActionSheetPicker *_startTimePicker;
    MMCommonActionSheetPicker *_specificTimePicker;
    UIView *_topicView;
    UIView *_topicGestureContainer;
    UIView *_shortTopicGestureContainer;
    UIView *_seperatorLine;
    MMTextView *_topicTextView;
    MMTextView *_shortTopicTextView;
    UILabel *_topicCharacterNumberLabel;
    UILabel *_shortTopicCharacterNumberLabel;
    UIGestureRecognizer *_topicViewGestureRecognizer;
    UIGestureRecognizer *_shortTopicViewGestureRecognizer;
    UIButton *_createButton;
    MMUIButton *_tipsButton;
    UIView *_bindToCouponsView;
    UIView *_bindToCouponsSwitch;
    UIView *_bindToCouponsTitle;
    UIView *_chooseCouponsView;
    UIView *_couponsViewsLine;
    UIView *_chooseCouponsTitle;
    UILabel *_chosenCouponName;
    UIImageView *_chooseCouponsArrowView;
    UIView *_couponsViewsBottomLine;
    UIView *_bottomContentView;
    MMFInderLiveCreateNoticeSelectModeView *_selectModeView;
    MMFinderLiveNoticeModReminderView *_modReminderView;
    MMFinderLiveNoticeShowReminderBottomView *_reminderBottomView;
    MMUIView *_functionView;
    NSMutableArray *_functionViewArray;
    MMFinderLiveNoticeDetailChooseView *_timeModView;
    FinderNewUserPrepareResponse *_userPrepareResponse;
    MMFinderLiveModNoticeView *_modNoticeView;
}

+ (id)adaptedPageSheetWithFinderContact:(id)arg1 createLiveVM:(id)arg2 defaultsToUntimedNotice:(_Bool)arg3 src:(long long)arg4 reporter:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableDescExtend; // @synthesize enableDescExtend=_enableDescExtend;
@property(retain, nonatomic) MMFinderLiveModNoticeView *modNoticeView; // @synthesize modNoticeView=_modNoticeView;
@property(nonatomic) _Bool untimedNoticeCreationEnabled; // @synthesize untimedNoticeCreationEnabled=_untimedNoticeCreationEnabled;
@property(nonatomic) _Bool untimedNoticeAvailable; // @synthesize untimedNoticeAvailable=_untimedNoticeAvailable;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepareResponse; // @synthesize userPrepareResponse=_userPrepareResponse;
@property(retain, nonatomic) MMFinderLiveNoticeDetailChooseView *timeModView; // @synthesize timeModView=_timeModView;
@property(retain, nonatomic) NSMutableArray *functionViewArray; // @synthesize functionViewArray=_functionViewArray;
@property(retain, nonatomic) MMUIView *functionView; // @synthesize functionView=_functionView;
@property(nonatomic) int triggerType; // @synthesize triggerType=_triggerType;
@property(retain, nonatomic) MMFinderLiveNoticeShowReminderBottomView *reminderBottomView; // @synthesize reminderBottomView=_reminderBottomView;
@property(retain, nonatomic) MMFinderLiveNoticeModReminderView *modReminderView; // @synthesize modReminderView=_modReminderView;
@property(nonatomic) _Bool bindToCoupons; // @synthesize bindToCoupons=_bindToCoupons;
@property(retain, nonatomic) MMFInderLiveCreateNoticeSelectModeView *selectModeView; // @synthesize selectModeView=_selectModeView;
@property(retain, nonatomic) UIView *bottomContentView; // @synthesize bottomContentView=_bottomContentView;
@property(retain, nonatomic) UIView *couponsViewsBottomLine; // @synthesize couponsViewsBottomLine=_couponsViewsBottomLine;
@property(retain, nonatomic) UIImageView *chooseCouponsArrowView; // @synthesize chooseCouponsArrowView=_chooseCouponsArrowView;
@property(retain, nonatomic) UILabel *chosenCouponName; // @synthesize chosenCouponName=_chosenCouponName;
@property(retain, nonatomic) UIView *chooseCouponsTitle; // @synthesize chooseCouponsTitle=_chooseCouponsTitle;
@property(retain, nonatomic) UIView *couponsViewsLine; // @synthesize couponsViewsLine=_couponsViewsLine;
@property(retain, nonatomic) UIView *chooseCouponsView; // @synthesize chooseCouponsView=_chooseCouponsView;
@property(retain, nonatomic) UIView *bindToCouponsTitle; // @synthesize bindToCouponsTitle=_bindToCouponsTitle;
@property(retain, nonatomic) UIView *bindToCouponsSwitch; // @synthesize bindToCouponsSwitch=_bindToCouponsSwitch;
@property(retain, nonatomic) UIView *bindToCouponsView; // @synthesize bindToCouponsView=_bindToCouponsView;
@property(retain, nonatomic) MMUIButton *tipsButton; // @synthesize tipsButton=_tipsButton;
@property(retain, nonatomic) UIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) UIGestureRecognizer *shortTopicViewGestureRecognizer; // @synthesize shortTopicViewGestureRecognizer=_shortTopicViewGestureRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *topicViewGestureRecognizer; // @synthesize topicViewGestureRecognizer=_topicViewGestureRecognizer;
@property(retain, nonatomic) UILabel *shortTopicCharacterNumberLabel; // @synthesize shortTopicCharacterNumberLabel=_shortTopicCharacterNumberLabel;
@property(retain, nonatomic) UILabel *topicCharacterNumberLabel; // @synthesize topicCharacterNumberLabel=_topicCharacterNumberLabel;
@property(retain, nonatomic) MMTextView *shortTopicTextView; // @synthesize shortTopicTextView=_shortTopicTextView;
@property(retain, nonatomic) MMTextView *topicTextView; // @synthesize topicTextView=_topicTextView;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIView *shortTopicGestureContainer; // @synthesize shortTopicGestureContainer=_shortTopicGestureContainer;
@property(retain, nonatomic) UIView *topicGestureContainer; // @synthesize topicGestureContainer=_topicGestureContainer;
@property(retain, nonatomic) UIView *topicView; // @synthesize topicView=_topicView;
@property(retain, nonatomic) MMCommonActionSheetPicker *specificTimePicker; // @synthesize specificTimePicker=_specificTimePicker;
@property(retain, nonatomic) MMCommonActionSheetPicker *startTimePicker; // @synthesize startTimePicker=_startTimePicker;
@property(retain, nonatomic) UILabel *timingOptionsDescriptionLabel; // @synthesize timingOptionsDescriptionLabel=_timingOptionsDescriptionLabel;
@property(retain, nonatomic) NSDateFormatter *untimedOptionDescriptionFormatter; // @synthesize untimedOptionDescriptionFormatter=_untimedOptionDescriptionFormatter;
@property(retain, nonatomic) NSDateFormatter *timedOptionGenericLongDescriptionFormatter; // @synthesize timedOptionGenericLongDescriptionFormatter=_timedOptionGenericLongDescriptionFormatter;
@property(retain, nonatomic) NSDateFormatter *timedOptionGenericDescriptionFormatter; // @synthesize timedOptionGenericDescriptionFormatter=_timedOptionGenericDescriptionFormatter;
@property(retain, nonatomic) NSDateFormatter *timedOptionDayAfterTomorrowDescriptionFormatter; // @synthesize timedOptionDayAfterTomorrowDescriptionFormatter=_timedOptionDayAfterTomorrowDescriptionFormatter;
@property(retain, nonatomic) NSDateFormatter *timedOptionTomorrowDescriptionFormatter; // @synthesize timedOptionTomorrowDescriptionFormatter=_timedOptionTomorrowDescriptionFormatter;
@property(retain, nonatomic) NSDateFormatter *timedOptionTodayDescriptionFormatter; // @synthesize timedOptionTodayDescriptionFormatter=_timedOptionTodayDescriptionFormatter;
@property(retain, nonatomic) UIImageView *startTimeArrowView; // @synthesize startTimeArrowView=_startTimeArrowView;
@property(retain, nonatomic) UILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
@property(retain, nonatomic) UILabel *startTimeTitleLabel; // @synthesize startTimeTitleLabel=_startTimeTitleLabel;
@property(retain, nonatomic) UIView *timedStartTimeView; // @synthesize timedStartTimeView=_timedStartTimeView;
@property(retain, nonatomic) UICollectionView *timingOptionsCollectionView; // @synthesize timingOptionsCollectionView=_timingOptionsCollectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *timingOptionsCollectionViewLayout; // @synthesize timingOptionsCollectionViewLayout=_timingOptionsCollectionViewLayout;
@property(nonatomic) _Bool noticeTimed; // @synthesize noticeTimed=_noticeTimed;
@property(retain, nonatomic) MMFinderHeaderInfoView *headerInfoView; // @synthesize headerInfoView=_headerInfoView;
@property(retain, nonatomic) MMUIActivityIndicatorView *prepareIndicatorView; // @synthesize prepareIndicatorView=_prepareIndicatorView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIGestureRecognizer *backgroundViewGestureRecognizer; // @synthesize backgroundViewGestureRecognizer=_backgroundViewGestureRecognizer;
@property(retain, nonatomic) MMLiveScrollGradientMaskingView *scrollMaskingView; // @synthesize scrollMaskingView=_scrollMaskingView;
@property(retain, nonatomic) UIScrollView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(retain, nonatomic) UIView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(retain, nonatomic) NSArray *couponsStockIDs; // @synthesize couponsStockIDs=_couponsStockIDs;
@property(retain, nonatomic) NSDate *untimedNoticeExpirationTime; // @synthesize untimedNoticeExpirationTime=_untimedNoticeExpirationTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType prepareCompletionBlock; // @synthesize prepareCompletionBlock=_prepareCompletionBlock;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic) _Bool inAdaptedPageSheet; // @synthesize inAdaptedPageSheet=_inAdaptedPageSheet;
@property(nonatomic) long long srcScene; // @synthesize srcScene=_srcScene;
@property(retain, nonatomic) NSString *descriptionPromptWording; // @synthesize descriptionPromptWording=_descriptionPromptWording;
@property(retain, nonatomic) MMFinderLiveCreateNoticeReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM; // @synthesize createLiveVM=_createLiveVM;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(nonatomic) __weak id <MMFinderLiveCreateNoticeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getModifyFieldFlag:(id)arg1;
- (id)genNewNoticeInfo;
- (void)modNotice:(id)arg1;
- (void)handleModNotice;
- (void)loadModData;
- (_Bool)isModRole;
- (_Bool)shouldShowPreview;
- (void)onPreviewCreateNoticeFinished:(id)arg1;
- (void)onPreviewCreateNoticeWithCompletion:(CDUnknownBlockType)arg1;
- (id)timedOptionDescriptionForDate:(id)arg1;
- (void)onDescriptionActionInvokedOnCreateNoticeTimingOptionCell:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)useCompactLayout;
- (_Bool)isLiveThemeReminderSwitchOpen;
- (void)reminderBottomViewClick;
- (void)onModReminderViewSelectWithLiveNoticeInfo:(id)arg1 selectType:(int)arg2;
- (_Bool)supportsMember;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)commonPickerDismissed:(id)arg1;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)tipsButtonClicked:(id)arg1;
- (void)createButtonClicked:(id)arg1;
- (void)handleTimeModClick;
- (void)handleTopicViewGestureRecognizer:(id)arg1;
- (void)handleStartTimeViewGestureRecognizer:(id)arg1;
- (void)handleBackgroundViewGestureRecognizer:(id)arg1;
- (void)cancelBarButtonItemClicked:(id)arg1;
- (void)didCancelCreateNotice;
- (void)didFailToCreateLiveNoticeWithErrorCode:(long long)arg1 errorMessage:(id)arg2;
- (void)didFinishCreateExtentedNoticeWithInfo:(id)arg1;
- (void)didFinishCreateNoticeWithInfo:(id)arg1;
- (void)startCreateNoticeWithCompletion:(CDUnknownBlockType)arg1;
- (void)startPreviewNotice;
- (void)dismisAllTimePicker;
- (void)dismissSpecificTimePicker;
- (void)dismissStartTimePicker;
- (void)showTodayStartTimePicker;
- (void)showStartTimePicker;
- (id)createTimerPicker;
- (void)letAllTextViewResignFirstResponder;
- (void)letTopicTextViewResignFirstResponder;
- (void)letShortTopicTextViewResignFirstResponder;
- (void)letTopicTextViewBecomeFirstResponder;
- (void)letShortTopicTextViewBecomeFirstResponder;
- (id)stringByRemovingOverflowedLinesInString:(id)arg1 limitedLineCount:(unsigned long long)arg2;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (id)stringByRemovingMultipleEmptyLinesInString:(id)arg1;
- (void)fixTopicText:(_Bool)arg1 textView:(id)arg2 maxLength:(unsigned int)arg3 maxLineCount:(unsigned int)arg4 characterNumberLabel:(id)arg5;
- (void)fixShortTopicText:(_Bool)arg1;
- (void)fixTopicText:(_Bool)arg1;
- (void)updateStartTimeLabel;
- (void)layoutEnableDescExtendTopicView;
- (void)layoutTopicView;
- (void)layoutStartTimeView;
- (void)layoutTimeModView;
- (void)layoutHeaderInfoView;
- (void)layoutFunctionViewSubView;
- (void)layoutContentView;
- (void)loadCreateButton;
- (void)loadTipsButton;
- (void)loadEnableDescExtendTopicView;
- (void)loadTopicView;
- (void)loadStartTimeView;
- (void)loadTimeModView;
- (void)loadHeaderInfoView;
- (void)chooseCoupons;
- (void)loadBindToCouponsView;
- (void)loadReminderBottomView;
- (void)loadBottomContentView;
- (void)updateUIForSelectModeChanged;
- (void)updateCreateButtonEnable;
- (void)loadSelectModeView;
- (void)loadFunctionView;
- (void)loadViewsDependOnPrepare;
- (void)loadContentView;
- (id)navigationBarBackgroundColor;
- (void)loadNavigationItems;
- (void)viewDidLayoutSubviews;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFinderContact:(id)arg1 createLiveVM:(id)arg2 defaultsToUntimedNotice:(_Bool)arg3 src:(long long)arg4 reporter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

