//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMTimer, NSString, UITextField, UIView;

@interface MMWebViewPlugin_SearchInPage
{
    _Bool _bEnableSearchInPage;
    CDUnknownBlockType _inputTextCallbackBlock;
    unsigned long long _maxInputLen;
    UIView *_inputToolBarView;
    UITextField *_inputTextField;
    unsigned long long _currentIndex;
    struct CGRect _keyboardFrameInScreen;
    double _fKeyboardHeight;
    double _fKeyboardAnimationDuration;
    long long _iKeyboardAnimationCurve;
    MMTimer *_textChangeCheckTimer;
    NSString *_finishText;
    NSString *_currentText;
    _Bool _bEnableAction;
    unsigned long long m_uiResultCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_uiResultCount; // @synthesize m_uiResultCount;
- (void)onSearchCloseBtnClicked:(id)arg1;
- (void)searchNext:(id)arg1;
- (void)searchPrev:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldSearchBtnDone:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)doOnceSearchBeforeTimerInvalidate;
- (void)textChangeTimerCheck;
- (void)makeInputAccessoryView;
- (void)searchInputKeyboardDidChangeFrame:(id)arg1;
- (void)searchInputKeyboardWillChangeFrame:(id)arg1;
- (void)searchInputKeyboardDidHide:(id)arg1;
- (void)searchInputKeyboardWillHide:(id)arg1;
- (void)showKeyBoardWithPlaceholder:(id)arg1 defaultText:(id)arg2 maxTextLen:(unsigned long long)arg3 contentOffsetY:(double)arg4 callBackBlock:(CDUnknownBlockType)arg5;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)resizeInputTextFieldWidth;
- (void)resignResponder;
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

