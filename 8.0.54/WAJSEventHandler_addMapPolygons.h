//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSMutableArray;

@interface WAJSEventHandler_addMapPolygons
{
    NSMutableArray *_overlays;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *overlays; // @synthesize overlays=_overlays;
- (void)addMapPolygon:(id)arg1 polygon:(id)arg2;
- (void)handleJSEvent:(id)arg1;

@end
