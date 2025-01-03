//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface QBJceInputStreamNew
{
    int _headType;
    int _headTag;
    int _stringLength;
    NSData *_dataHolders;
}

+ (id)streamWithData:(id)arg1;
@property(nonatomic) int stringLength; // @synthesize stringLength=_stringLength;
@property(retain, nonatomic) NSData *dataHolders; // @synthesize dataHolders=_dataHolders;
@property(readonly, nonatomic) int headTag; // @synthesize headTag=_headTag;
@property(nonatomic) int headType; // @synthesize headType=_headType;
- (void).cxx_destruct;
- (id)readAnything:(int)arg1 required:(_Bool)arg2 description:(id)arg3;
- (id)readUTF8String:(int)arg1 required:(_Bool)arg2 description:(id)arg3;
- (id)readDictionary:(int)arg1 required:(_Bool)arg2 description:(id)arg3;
- (id)readArray:(int)arg1 required:(_Bool)arg2 description:(id)arg3;
- (id)readObject:(int)arg1 required:(_Bool)arg2 description:(Class)arg3;
- (id)readData:(int)arg1 required:(_Bool)arg2;
- (id)readString:(int)arg1 required:(_Bool)arg2;
- (id)utf8Decode:(char *)arg1 length:(int)arg2;
- (id)readNumber:(int)arg1 required:(_Bool)arg2;
- (id)readDataWithSize:(int)arg1;
- (void)skip:(unsigned int)arg1;
- (char *)readBytes:(unsigned int)arg1;
- (double)readDouble;
- (float)readFloat;
- (double)readDouble:(int)arg1;
- (float)readFloat:(int)arg1;
- (long long)readInt:(int)arg1;
- (long long)readInt8;
- (int)readInt4;
- (short)readInt2;
- (BOOL)readInt1;
- (_Bool)readHead;
- (_Bool)peakHead;
- (id)data;
- (id)init;

@end

