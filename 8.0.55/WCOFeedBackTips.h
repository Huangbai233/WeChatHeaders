//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, MMGrowTextView, NSMutableArray, NSString, UIButton, UIImageView, UIView, WCInputController, WCOutFeedbackCgi;

@interface WCOFeedBackTips
{
    _Bool _hasInputSth;
    int _roomid;
    long long _callSeq;
    UIView *_starView;
    UIView *_feedWordingSubView;
    UIView *_inviteView;
    UIImageView *_backgroundView;
    double _tipsHeight;
    UIButton *_backgroundBtn;
    double _feedWordingSubViewHeight;
    NSMutableArray *_starBtnArr;
    NSMutableArray *_wordingBtnArr;
    UIView *_bottomBtnView;
    UIImageView *_inputView;
    EmoticonBoardView *_moticonBoardView;
    UIButton *_expressionButton;
    MMGrowTextView *_textView;
    UIView *_textBackgroundImage;
    WCInputController *_inputController;
    NSMutableArray *_resitemArr;
    long long _currStarTag;
    NSString *_defaultShowText;
    WCOutFeedbackCgi *_cgi;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) WCOutFeedbackCgi *cgi; // @synthesize cgi=_cgi;
@property(nonatomic) _Bool hasInputSth; // @synthesize hasInputSth=_hasInputSth;
@property(retain, nonatomic) NSString *defaultShowText; // @synthesize defaultShowText=_defaultShowText;
@property(nonatomic) long long currStarTag; // @synthesize currStarTag=_currStarTag;
@property(retain, nonatomic) NSMutableArray *resitemArr; // @synthesize resitemArr=_resitemArr;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) UIView *textBackgroundImage; // @synthesize textBackgroundImage=_textBackgroundImage;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) EmoticonBoardView *moticonBoardView; // @synthesize moticonBoardView=_moticonBoardView;
@property(retain, nonatomic) UIImageView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *bottomBtnView; // @synthesize bottomBtnView=_bottomBtnView;
@property(retain, nonatomic) NSMutableArray *wordingBtnArr; // @synthesize wordingBtnArr=_wordingBtnArr;
@property(retain, nonatomic) NSMutableArray *starBtnArr; // @synthesize starBtnArr=_starBtnArr;
@property(nonatomic) double feedWordingSubViewHeight; // @synthesize feedWordingSubViewHeight=_feedWordingSubViewHeight;
@property(retain, nonatomic) UIButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
@property(nonatomic) double tipsHeight; // @synthesize tipsHeight=_tipsHeight;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *inviteView; // @synthesize inviteView=_inviteView;
@property(retain, nonatomic) UIView *feedWordingSubView; // @synthesize feedWordingSubView=_feedWordingSubView;
@property(retain, nonatomic) UIView *starView; // @synthesize starView=_starView;
@property(nonatomic) long long callSeq; // @synthesize callSeq=_callSeq;
@property(nonatomic) int roomid; // @synthesize roomid=_roomid;
- (void)parseConfigXml:(id)arg1;
- (id)getInputText;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)showLoadingOk;
- (void)onCancelFeedback;
- (void)onConfirm;
- (void)onClickWordingBtn:(id)arg1;
- (void)onClickStarBtn:(id)arg1;
- (void)onHideView:(id)arg1;
- (void)resignInput;
- (void)becomeInput;
- (void)initInputController;
- (void)initInputToolView;
- (void)initBottomButtons;
- (void)initInputView;
- (id)genBackgroundView;
- (void)initStarView;
- (void)initData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

