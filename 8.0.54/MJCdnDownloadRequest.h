//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface MJCdnDownloadRequest : NSObject
{
    int _appType;
    int _fileType;
    NSString *_taskKey;
    NSString *_fileCdnURL;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) int appType; // @synthesize appType=_appType;
@property(readonly, copy, nonatomic) NSString *fileCdnURL; // @synthesize fileCdnURL=_fileCdnURL;
@property(readonly, copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (id)initWithTaskKey:(id)arg1 fileCdnURL:(id)arg2;

@end

