//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString;

@protocol SearchVoiceInputViewControllerDelegate <NSObject>

@optional
- (void)onTextViewAttributeTextChange:(NSAttributedString *)arg1;
- (void)showStreamVoiceInputMaskView:(_Bool)arg1;
- (void)streamVoiceInputViewHeightChanged;
- (void)onVoiceInputEndWithText:(NSString *)arg1;
- (void)onSendTextMsg:(NSString *)arg1;
- (void)streamVoiceInputFullScreenExit;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputBoardWillHideWithText:(NSString *)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardDidShow;
@end
