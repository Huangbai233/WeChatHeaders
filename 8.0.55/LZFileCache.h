//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface LZFileCache : NSObject
{
    _Bool _bCleaned;
    _Bool _bCacheFinish;
    int _fileFD;
    int _status;
    NSError *_innerError;
    unsigned long long _cacheType;
    NSObject<OS_dispatch_queue> *_fileOptQueue;
    void *_queueContext;
    NSString *_fileName;
    NSString *_cfgfileName;
    void *_mapBuf;
    unsigned long long _fileSize;
    NSMutableArray *_writeRanges;
    NSMutableArray *_readRanges;
    NSMutableDictionary *_dicOptItems;
    NSMutableDictionary *_dicmapRefforread;
    long long _fileCacheErrorType;
}

+ (void)preheat:(void *)arg1 size:(unsigned long long)arg2;
+ (int)pageSize;
+ (id)cfgPath:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long fileCacheErrorType; // @synthesize fileCacheErrorType=_fileCacheErrorType;
@property(nonatomic) _Bool bCacheFinish; // @synthesize bCacheFinish=_bCacheFinish;
@property(nonatomic) _Bool bCleaned; // @synthesize bCleaned=_bCleaned;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableDictionary *dicmapRefforread; // @synthesize dicmapRefforread=_dicmapRefforread;
@property(retain, nonatomic) NSMutableDictionary *dicOptItems; // @synthesize dicOptItems=_dicOptItems;
@property(retain, nonatomic) NSMutableArray *readRanges; // @synthesize readRanges=_readRanges;
@property(retain, nonatomic) NSMutableArray *writeRanges; // @synthesize writeRanges=_writeRanges;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) void *mapBuf; // @synthesize mapBuf=_mapBuf;
@property(nonatomic) int fileFD; // @synthesize fileFD=_fileFD;
@property(retain, nonatomic) NSString *cfgfileName; // @synthesize cfgfileName=_cfgfileName;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) void *queueContext; // @synthesize queueContext=_queueContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileOptQueue; // @synthesize fileOptQueue=_fileOptQueue;
@property(readonly, nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(retain) NSError *innerError; // @synthesize innerError=_innerError;
- (void)loadfilecfg;
- (void)savefileCfg;
- (void)fileCacheSuccess;
- (void)mergeRanges:(id)arg1;
- (void)refreshReadRanges;
- (_Bool)readFileInner:(id)arg1 range:(struct _LzRange)arg2 data:(id *)arg3;
- (_Bool)openFileAndSetupMapInner:(id)arg1;
- (_Bool)loadCacheInfoInner;
- (struct _LzRange)calcDownloadRangeInner:(struct _LzRange)arg1;
- (id)mergeInfo;
- (void)releaseFile;
- (void)releaseMapping;
- (unsigned long long)fileRealSize;
- (_Bool)isFileCacheFinished;
- (_Bool)loadCacheInfo;
- (struct _LzRange)calcDownloadRange:(struct _LzRange)arg1;
- (_Bool)stopCaching:(_Bool)arg1;
- (long long)fileContinuousCachedLengthWithPosition:(long long)arg1;
- (long long)fileCachedLength:(long long *)arg1 lastOffset:(long long *)arg2;
- (long long)fileCachedLength:(long long *)arg1;
- (void)close:(_Bool)arg1;
- (_Bool)readFile:(id)arg1 range:(struct _LzRange)arg2 data:(id *)arg3;
- (void)endRead:(id)arg1;
- (void)finishWirte:(id)arg1;
- (void)cleanFileCaching;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isFinish:(_Bool *)arg3;
- (_Bool)openFileAndSetupMap:(id)arg1;
@property(readonly, nonatomic) NSString *filePath;
- (void)dealloc;
- (id)initWithFile:(id)arg1 queue:(id)arg2 context:(void *)arg3 type:(unsigned long long)arg4;
- (id)init;

@end

