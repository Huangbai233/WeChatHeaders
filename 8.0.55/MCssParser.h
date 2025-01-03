//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;
@protocol MCssParserDelegate;

@interface MCssParser : NSObject
{
    id <MCssParserDelegate> m_delegate;
    NSRecursiveLock *m_oLock;
    NSString *m_currentFile;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCssParser;
+ (void)initialize;
- (void).cxx_destruct;
- (void)startWithDelegate:(id)arg1;
- (_Bool)isParsing;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (void)onCssRuleSetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onParseErrorOnLineNumber:(id)arg1 withText:(id)arg2 withErrorMessage:(id)arg3;
- (_Bool)onParseNextFile;
- (void)startParseCssFiles;
- (void)cleanUpLexer;
- (_Bool)openNextCssFile;
- (void)safeCloseCssFile;
- (id)init;

@end

