//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderDataItem;

@interface WCFinderDataitemSceneObj : NSObject
{
    int _scene;
    WCFinderDataItem *_dataItem;
}

+ (id)objWithDataItem:(id)arg1 scene:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) int scene; // @synthesize scene=_scene;

@end
