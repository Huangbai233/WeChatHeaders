//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@class CADisplayLink, NSMutableArray;

@interface WAVideoLayer : CALayer
{
    _Bool _playing;
    NSMutableArray *_floatList;
    long long _visibleBegin;
    long long _visibleCount;
    double _rowCount;
    CADisplayLink *_displayLink;
    double _currentTime;
    double _initFloatTime;
}

- (void).cxx_destruct;
@property(nonatomic) double initFloatTime; // @synthesize initFloatTime=_initFloatTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) long long visibleCount; // @synthesize visibleCount=_visibleCount;
@property(nonatomic) long long visibleBegin; // @synthesize visibleBegin=_visibleBegin;
@property(retain, nonatomic) NSMutableArray *floatList; // @synthesize floatList=_floatList;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
- (void)clearFloat;
- (void)onUpdateFloat;
- (void)forceUpdate;
- (void)updateVideoTime:(double)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)addFloat:(id)arg1 color:(id)arg2;
- (void)initFloat:(id)arg1;
- (void)enableFloat:(_Bool)arg1;
- (void)invalidate;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

