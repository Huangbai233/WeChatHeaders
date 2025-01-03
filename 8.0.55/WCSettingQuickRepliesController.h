//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, NSArray, NSIndexPath, NSMutableArray, NSString, UITapGestureRecognizer, UITextField, UIView;

@interface WCSettingQuickRepliesController
{
    MMTableView *_mainTableView;
    MMUILabel *_footerLabel;
    UIView *_replyAddedView;
    UITextField *_textField;
    struct CGRect _keyboardRect;
    _Bool _edited;
    UITapGestureRecognizer *_hideKeyboardGesture;
    NSArray *_defaultQuickReplies;
    NSIndexPath *_selectedIndexPath;
    float _lastContenOffsetY;
    _Bool _editing;
    NSMutableArray *_quickReplies;
    struct UIEdgeInsets _contentInsetWhenKeyBoardHide;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInsetWhenKeyBoardHide; // @synthesize contentInsetWhenKeyBoardHide=_contentInsetWhenKeyBoardHide;
@property(retain, nonatomic) NSMutableArray *quickReplies; // @synthesize quickReplies=_quickReplies;
- (void)saveQuickRepliesInFileAndTransferToWatch;
- (void)updateTextField;
- (void)updateFooterLabel;
- (void)setDefaultReply;
- (void)initUI;
- (void)setNavItemWithTitle:(id)arg1 action:(SEL)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateQuickReplies:(id)arg1;
- (void)addQuickReplyAction:(id)arg1;
- (void)resetQuickRepliesAction:(id)arg1;
- (void)editingFinishedAction:(id)arg1;
- (void)editingBeginAction:(id)arg1;
- (void)hideKeyboardAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
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

