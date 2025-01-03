//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (RegexKitLiteAdditions)
+ (long long)captureCountForRegex:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (long long)captureCountForRegex:(id)arg1;
+ (void)clearStringCache;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateStringsSeparatedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (_Bool)enumerateStringsSeparatedByRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateStringsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (_Bool)enumerateStringsMatchedByRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeys:(id *)arg5 forCaptures:(int *)arg6 count:(unsigned long long)arg7;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withFirstKey:(id)arg5 arguments:(char *)arg6;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeysAndCaptures:(id)arg5;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 range:(struct _NSRange)arg2 withKeysAndCaptures:(id)arg3;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 withKeysAndCaptures:(id)arg2;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeys:(id *)arg5 forCaptures:(int *)arg6 count:(unsigned long long)arg7;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withFirstKey:(id)arg5 arguments:(char *)arg6;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeysAndCaptures:(id)arg5;
- (id)dictionaryByMatchingRegex:(id)arg1 range:(struct _NSRange)arg2 withKeysAndCaptures:(id)arg3;
- (id)dictionaryByMatchingRegex:(id)arg1 withKeysAndCaptures:(id)arg2;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1;
- (id)captureComponentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)captureComponentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)captureComponentsMatchedByRegex:(id)arg1;
- (id)componentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (id)componentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)componentsMatchedByRegex:(id)arg1 capture:(long long)arg2;
- (id)componentsMatchedByRegex:(id)arg1;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2 range:(struct _NSRange)arg3;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2;
- (id)stringByMatching:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (id)stringByMatching:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)stringByMatching:(id)arg1 capture:(long long)arg2;
- (id)stringByMatching:(id)arg1;
- (struct _NSRange)rangeOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (struct _NSRange)rangeOfRegex:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfRegex:(id)arg1 capture:(long long)arg2;
- (struct _NSRange)rangeOfRegex:(id)arg1;
- (void)flushCachedRegexData;
- (_Bool)isRegexValidWithOptions:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)isRegexValid;
- (_Bool)isMatchedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4;
- (_Bool)isMatchedByRegex:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)isMatchedByRegex:(id)arg1;
- (id)componentsSeparatedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)componentsSeparatedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)componentsSeparatedByRegex:(id)arg1;
- (long long)captureCountWithOptions:(unsigned int)arg1 error:(id *)arg2;
- (long long)captureCount;
@end

