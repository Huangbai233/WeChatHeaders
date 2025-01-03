//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMGrowTextViewExtConfig, MMTextView, NSAttributedString, NSMutableArray, NSString, UIFont, UIImageView, UIResponder;
@protocol MMGrowTextViewCustomeTagDelegate, MMGrowTextViewDelegate;

@interface MMGrowTextView
{
    id <MMGrowTextViewDelegate> m_delegate;
    UIImageView *_backgroundView;
    struct CGSize textViewMaxSize;
    double _textViewMinHeight;
    double _textViewOriginHeight;
    struct UIEdgeInsets backgroundImageInsets;
    MMTextView *_textView;
    _Bool enabled;
    struct _NSRange _selectedRange;
    NSString *_extensionKey;
    double _fKeyboardAnimationDuration;
    long long _iKeyboardAnimationCurve;
    _Bool _isKeyboardOwner;
    struct CGRect _keyboardFrameInScreen;
    struct timeval _last3rdKeyboardStartEventTime;
    int _changeCount;
    int _deleteCount;
    unsigned long long _firstInputTime;
    unsigned long long _lastInputTime;
    unsigned long long _sendTime;
    double _cachedKeyboardHeight;
    _Bool _usesRedesignLineSpacing;
    _Bool _donotNeedTextViewContentTopBottomInset;
    _Bool _hideCursor;
    _Bool _reportInput;
    _Bool _keepHeightWhenTextChange;
    _Bool _bShowChangeLineMenu;
    _Bool _bCenterAndAutoHidePlaceHolder;
    _Bool _bKeepTextWhenReturnDone;
    _Bool _shouldTreatEmoAsOneChar;
    _Bool _bShowEmoticon;
    _Bool _canShowTranslateTool;
    _Bool _bShowingTranslateTool;
    _Bool _shouldDisableAdjustSize;
    _Bool _canSendEmptyText;
    _Bool _textViewFixedClipToBounds;
    _Bool _textViewFixedNoClipToBounds;
    _Bool _bMatchInnerViewHeightWithFrame;
    int _lastAttributeCount;
    NSString *text;
    NSString *placeHolder;
    long long maxLength;
    long long maxFontSize;
    id <MMGrowTextViewCustomeTagDelegate> _customTagDelegate;
    long long _emoticonCount;
    UIFont *_placeholderFont;
    MMGrowTextViewExtConfig *_extConfig;
    NSMutableArray *_arrTopicMenuItem;
    NSAttributedString *_lastAttributedContent;
    struct _NSRange _lastMarkedRange;
    struct UIEdgeInsets _touchInsets;
}

+ (struct UIEdgeInsets)defaultBackgroundImageInsets;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *lastAttributedContent; // @synthesize lastAttributedContent=_lastAttributedContent;
@property(nonatomic) struct _NSRange lastMarkedRange; // @synthesize lastMarkedRange=_lastMarkedRange;
@property(nonatomic) _Bool bMatchInnerViewHeightWithFrame; // @synthesize bMatchInnerViewHeightWithFrame=_bMatchInnerViewHeightWithFrame;
@property(nonatomic) int lastAttributeCount; // @synthesize lastAttributeCount=_lastAttributeCount;
@property(retain, nonatomic) NSMutableArray *arrTopicMenuItem; // @synthesize arrTopicMenuItem=_arrTopicMenuItem;
@property(retain, nonatomic) MMGrowTextViewExtConfig *extConfig; // @synthesize extConfig=_extConfig;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(nonatomic) _Bool textViewFixedNoClipToBounds; // @synthesize textViewFixedNoClipToBounds=_textViewFixedNoClipToBounds;
@property(nonatomic) _Bool textViewFixedClipToBounds; // @synthesize textViewFixedClipToBounds=_textViewFixedClipToBounds;
@property(nonatomic) _Bool canSendEmptyText; // @synthesize canSendEmptyText=_canSendEmptyText;
@property(nonatomic) _Bool shouldDisableAdjustSize; // @synthesize shouldDisableAdjustSize=_shouldDisableAdjustSize;
@property(nonatomic) _Bool bShowingTranslateTool; // @synthesize bShowingTranslateTool=_bShowingTranslateTool;
@property(nonatomic) _Bool canShowTranslateTool; // @synthesize canShowTranslateTool=_canShowTranslateTool;
@property(nonatomic) _Bool bShowEmoticon; // @synthesize bShowEmoticon=_bShowEmoticon;
@property(nonatomic) _Bool shouldTreatEmoAsOneChar; // @synthesize shouldTreatEmoAsOneChar=_shouldTreatEmoAsOneChar;
@property(nonatomic) _Bool bKeepTextWhenReturnDone; // @synthesize bKeepTextWhenReturnDone=_bKeepTextWhenReturnDone;
@property(nonatomic) _Bool bCenterAndAutoHidePlaceHolder; // @synthesize bCenterAndAutoHidePlaceHolder=_bCenterAndAutoHidePlaceHolder;
@property(nonatomic) _Bool bShowChangeLineMenu; // @synthesize bShowChangeLineMenu=_bShowChangeLineMenu;
@property(nonatomic) _Bool keepHeightWhenTextChange; // @synthesize keepHeightWhenTextChange=_keepHeightWhenTextChange;
@property(nonatomic) _Bool reportInput; // @synthesize reportInput=_reportInput;
@property(nonatomic) long long emoticonCount; // @synthesize emoticonCount=_emoticonCount;
@property(nonatomic) _Bool hideCursor; // @synthesize hideCursor=_hideCursor;
@property(nonatomic) _Bool donotNeedTextViewContentTopBottomInset; // @synthesize donotNeedTextViewContentTopBottomInset=_donotNeedTextViewContentTopBottomInset;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) _Bool usesRedesignLineSpacing; // @synthesize usesRedesignLineSpacing=_usesRedesignLineSpacing;
@property(nonatomic) struct CGRect keyboardFrameInScreen; // @synthesize keyboardFrameInScreen=_keyboardFrameInScreen;
@property(nonatomic) __weak id <MMGrowTextViewCustomeTagDelegate> customTagDelegate; // @synthesize customTagDelegate=_customTagDelegate;
@property(retain, nonatomic) MMTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long maxFontSize; // @synthesize maxFontSize;
@property(nonatomic) long long maxLength; // @synthesize maxLength;
@property(nonatomic) long long iKeyboardAnimationCurve; // @synthesize iKeyboardAnimationCurve=_iKeyboardAnimationCurve;
@property(nonatomic) double fKeyboardAnimationDuration; // @synthesize fKeyboardAnimationDuration=_fKeyboardAnimationDuration;
@property(retain, nonatomic) NSString *extensionKey; // @synthesize extensionKey=_extensionKey;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic) __weak id <MMGrowTextViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct UIEdgeInsets backgroundImageInsets; // @synthesize backgroundImageInsets;
@property(nonatomic) struct CGSize textViewMaxSize; // @synthesize textViewMaxSize;
@property(nonatomic) double textViewMinHeight; // @synthesize textViewMinHeight=_textViewMinHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateSelectedRangeWhenKeyboardHide:(struct _NSRange)arg1;
- (void)stopControlSetTextViewContentOffset;
- (void)dealloc;
- (_Bool)canChangeTextValue;
- (void)deleteBackward;
- (void)insertString:(id)arg1;
- (double)getTextViewHeight;
@property(retain, nonatomic) NSAttributedString *attributedText;
- (void)setAttributedPlaceholder:(id)arg1 animated:(_Bool)arg2;
- (void)setPlaceholder:(id)arg1 animated:(_Bool)arg2;
- (void)setTextViewEnableSetContentOffsetOnlyByMyself:(_Bool)arg1;
- (void)setPlaceHolderMultiLine:(_Bool)arg1;
- (void)setPlaceHolderColor:(id)arg1;
@property(nonatomic) __weak NSAttributedString *attributePlaceholder;
@property(nonatomic) __weak NSString *placeHolder; // @synthesize placeHolder;
- (void)setTextColor:(id)arg1;
- (void)setTextFont:(id)arg1;
- (void)resetTextWidth;
- (void)setTextWidth:(double)arg1;
@property(nonatomic) __weak NSString *text; // @synthesize text;
- (int)parseAndAppendTopicSearchAttributeds:(id)arg1;
- (void)doWXTagParse;
- (void)fixAttributedTextColor;
- (_Bool)pretreatmentAttributedText;
- (id)topicTagAttributes;
- (_Bool)shouldParseTextAttri;
- (void)showFullScreenInput;
- (void)closeTranslateTool;
- (void)openTranslateTool;
- (void)openTopicSearch;
- (void)inputAddTagStr;
- (id)getExtMenuItems;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)shouldRespondToKeyBoardEvent;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (_Bool)handleKeyCommand:(id)arg1;
- (unsigned long long)menuTypeForExtMenuAction:(SEL)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)touchesEnded_TextView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_TextView:(id)arg1 withEvent:(id)arg2;
- (void)textView:(id)arg1 willPastedText:(id)arg2;
- (void)textview:(id)arg1 pasteImage:(id)arg2;
- (_Bool)textview:(id)arg1 shouldPasteImage:(id)arg2;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)fixWeInputMarkedTextEmojiShowBug:(id)arg1;
- (void)tryFixWeInputMarkedTextEmojiShowBug:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)sendTextViewMessage;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)getTextViewMaxSize;
- (struct _NSRange)getTextSelectRange;
- (void)saveTextSelectRange;
- (id)textArea;
- (void)adjustRect;
- (struct CGSize)adjustSize;
- (void)resetScrollPositionForIOS7;
- (double)measureHeight;
- (void)textView:(id)arg1 didShowMenuTypes:(id)arg2;
- (void)MenuControllerWillHide:(id)arg1;
- (void)onGrowTextViewDidShowMenuController:(id)arg1;
- (void)UITextViewTextDidBeginEditingNotification:(id)arg1;
- (void)changeContentSize;
- (void)UITextViewTextDidChangeNotification:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (_Bool)isExtenalKeyboardAttatched;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithOriginHeight:(double)arg1 WithDonotNeedTextViewContentTopBottomInset:(_Bool)arg2 extConfig:(id)arg3 matchInnerViewHeightWithFrame:(_Bool)arg4;
- (id)initWithOriginHeight:(double)arg1 extConfig:(id)arg2;
- (id)initWithOriginHeight:(double)arg1;
- (id)initWithDonotNeedTextViewContentTopBottomInset:(_Bool)arg1 matchInnerViewHeightWithFrame:(_Bool)arg2;
- (id)initWithDonotNeedTextViewContentTopBottomInset:(_Bool)arg1;
- (id)initWithExtConfig:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)postTextChangeNotification;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateInnerTouchInsets;
- (void)setUIScrollViewContentInsetAdjustmentNever;
- (void)setTextViewContentInsets;
- (void)setAdjustToInterfaceOrientation:(long long)arg1;
@property(nonatomic) __weak UIResponder *menuResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

