//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@interface MMKPoint : NSObject
{
    float _x;
    float _y;
}

+ (id)KPointWithX:(float)arg1 y:(float)arg2;
@property(readonly, nonatomic) float y; // @synthesize y=_y;
@property(readonly, nonatomic) float x; // @synthesize x=_x;
- (id)description;
- (id)initWithX:(float)arg1 y:(float)arg2;

@end

